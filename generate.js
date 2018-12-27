require("isomorphic-fetch");

const path = require("path");
const fs = require("fs");
const { stripIndent } = require("common-tags");
const camelCase = require("lodash.camelcase");
const capitalize = require("lodash.capitalize");

const ICONS = [
  {
    name: "AntDesign",
    glyphMapUrl:
      "https://raw.githubusercontent.com/expo/vector-icons/master/vendor/react-native-vector-icons/glyphmaps/AntDesign.json"
  },
  {
    name: "Entypo",
    glyphMapUrl:
      "https://raw.githubusercontent.com/expo/vector-icons/master/vendor/react-native-vector-icons/glyphmaps/Entypo.json"
  },
  {
    name: "EvilIcons",
    glyphMapUrl:
      "https://raw.githubusercontent.com/expo/vector-icons/master/vendor/react-native-vector-icons/glyphmaps/EvilIcons.json"
  },
  {
    name: "Feather",
    glyphMapUrl:
      "https://raw.githubusercontent.com/expo/vector-icons/master/vendor/react-native-vector-icons/glyphmaps/Feather.json"
  },
  {
    name: "FontAwesome",
    glyphMapUrl:
      "https://raw.githubusercontent.com/expo/vector-icons/master/vendor/react-native-vector-icons/glyphmaps/FontAwesome.json"
  },
  {
    name: "Foundation",
    glyphMapUrl:
      "https://raw.githubusercontent.com/expo/vector-icons/master/vendor/react-native-vector-icons/glyphmaps/Foundation.json"
  },
  {
    name: "Ionicons",
    glyphMapUrl:
      "https://raw.githubusercontent.com/expo/vector-icons/master/vendor/react-native-vector-icons/glyphmaps/Ionicons.json"
  },
  {
    name: "MaterialCommunityIcons",
    glyphMapUrl:
      "https://raw.githubusercontent.com/expo/vector-icons/master/vendor/react-native-vector-icons/glyphmaps/MaterialCommunityIcons.json"
  },
  {
    name: "MaterialIcons",
    glyphMapUrl:
      "https://raw.githubusercontent.com/expo/vector-icons/master/vendor/react-native-vector-icons/glyphmaps/MaterialIcons.json"
  },
  {
    name: "Octicons",
    glyphMapUrl:
      "https://raw.githubusercontent.com/expo/vector-icons/master/vendor/react-native-vector-icons/glyphmaps/Octicons.json"
  },
  {
    name: "SimpleLineIcons",
    glyphMapUrl:
      "https://raw.githubusercontent.com/expo/vector-icons/master/vendor/react-native-vector-icons/glyphmaps/SimpleLineIcons.json"
  },
  {
    name: "Zocial",
    glyphMapUrl:
      "https://raw.githubusercontent.com/expo/vector-icons/master/vendor/react-native-vector-icons/glyphmaps/Zocial.json"
  }
];

const moduleTemplate = ({ name, defaultIcon, variant }) => stripIndent`
module ${name} = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "${name}";

  [@bs.deriving jsConverter]
  type name = [
    ${variant}
  ]
  let nameToJs = nameToJs;

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    allowFontScaling: bool,
    [@bs.optional]
    name: name,
    [@bs.optional]
    size: int,
    [@bs.optional]
    color: string,
    [@bs.optional]
    style: BsReactNative.Style.t,
  };

  let make =
    (
      ~allowFontScaling=false,
      ~name=\`${defaultIcon},
      ~color="black",
      ~size=12,
      ~style=BsReactNative.Style.style([]),
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props=
      props(
        ~allowFontScaling,
        ~name,
        ~size,
        ~color,
        ~style,
        (),
      ),
    children,
  );

}
`;

const handleKeywordCollisions = x => {
  if (x === "function") {
    return `${x}_`;
  } else {
    return x;
  }
};

const makeReasonIdent = x => handleKeywordCollisions(camelCase(x));

const generateVariantFromIconsSet = icons => [
  Object.keys(icons)
    .map(icon => `| [@bs.as "${icon}"] \`${makeReasonIdent(icon)}`)
    .join("\n    "),
  Object.keys(icons)[0]
];

function generate() {
  console.log("Generating...");
  Promise.all(
    ICONS.map(({ requirePath, name, glyphMapUrl }) => {
      console.log(`Fetching ${name} from ${glyphMapUrl}\n`);

      return fetch(glyphMapUrl)
        .then(res => res.json())
        .then(generateVariantFromIconsSet)
        .then(([variant, defaultIcon]) =>
          moduleTemplate({
            name,
            variant,
            defaultIcon: makeReasonIdent(defaultIcon)
          })
        )
        .then(file => {
          fs.writeFileSync(path.join(__dirname, "src", `${name}.re`), file);
        });
    })
  );
}

generate();
