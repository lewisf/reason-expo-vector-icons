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
      "https://raw.githack.com/expo/vector-icons/master/src/vendor/react-native-vector-icons/glyphmaps/AntDesign.json"
  },
  {
    name: "Entypo",
    glyphMapUrl:
      "https://raw.githack.com/expo/vector-icons/master/src/vendor/react-native-vector-icons/glyphmaps/Entypo.json"
  },
  {
    name: "EvilIcons",
    glyphMapUrl:
      "https://raw.githack.com/expo/vector-icons/master/src/vendor/react-native-vector-icons/glyphmaps/EvilIcons.json"
  },
  {
    name: "Feather",
    glyphMapUrl:
      "https://raw.githack.com/expo/vector-icons/master/src/vendor/react-native-vector-icons/glyphmaps/Feather.json"
  },
  {
    name: "FontAwesome",
    glyphMapUrl:
      "https://raw.githack.com/expo/vector-icons/master/src/vendor/react-native-vector-icons/glyphmaps/FontAwesome.json"
  },
  {
    name: "Foundation",
    glyphMapUrl:
      "https://raw.githack.com/expo/vector-icons/master/src/vendor/react-native-vector-icons/glyphmaps/Foundation.json"
  },
  {
    name: "Ionicons",
    glyphMapUrl:
      "https://raw.githack.com/expo/vector-icons/master/src/vendor/react-native-vector-icons/glyphmaps/Ionicons.json"
  },
  {
    name: "MaterialCommunityIcons",
    glyphMapUrl:
      "https://raw.githack.com/expo/vector-icons/master/src/vendor/react-native-vector-icons/glyphmaps/MaterialCommunityIcons.json"
  },
  {
    name: "MaterialIcons",
    glyphMapUrl:
      "https://raw.githack.com/expo/vector-icons/master/src/vendor/react-native-vector-icons/glyphmaps/MaterialIcons.json"
  },
  {
    name: "Octicons",
    glyphMapUrl:
      "https://raw.githack.com/expo/vector-icons/master/src/vendor/react-native-vector-icons/glyphmaps/Octicons.json"
  },
  {
    name: "SimpleLineIcons",
    glyphMapUrl:
      "https://raw.githack.com/expo/vector-icons/master/src/vendor/react-native-vector-icons/glyphmaps/SimpleLineIcons.json"
  },
  {
    name: "Zocial",
    glyphMapUrl:
      "https://raw.githack.com/expo/vector-icons/master/src/vendor/react-native-vector-icons/glyphmaps/Zocial.json"
  }
];
const moduleTemplate = ({ name, variant }) => stripIndent`
module ${name} = {
  [@bs.module ("@expo/vector-icons", "${name}")] [@react.component]
  external make:
    (~name: [@bs.string][ ${variant}  ], ~size: int, ~color: string, ~style: ReactNative.Style.t=?) =>
    React.element = "${name}";
}
`;


const handleKeywordCollisions = x => {
  if (
    ["class", "done", "function", "new", "switch", "try", "type"].includes(x)
  ) {
    return `${x}_`;
  } else if (/[0-9]/.test(x[0])) {
    return `_${x}`;
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
// const generateVariantFromIconsSet = icons => [
//   Object.keys(icons)
//     .map(icon => `| [@bs.as "${icon}"] \`${makeReasonIdent(icon)}`)
//     .join("\n    "),
//   Object.keys(icons)[0]
// ];
function print( pathtodir ) {
  let files = fs.readdirSync( pathtodir );
  files.forEach( file => {
    let stats = fs.statSync( pathtodir + '/' + file);
    let created = new Date( stats.birthtime ).toDateString();
    console.log( created, file );
  });
};
function generate() {
  console.log("Generating...");
  Promise.all(
    ICONS.map(({ requirePath, name, glyphMapUrl }) => {
      console.log(`Fetching ${name} from ${glyphMapUrl}\n`);

      return fetch(glyphMapUrl)
        .then(res => res.json())
        .then(generateVariantFromIconsSet)
        .then(([variant]) =>
          moduleTemplate({
            name,
            variant
          })
        )
        .then(file => {
          fs.writeFileSync(path.join(__dirname, "src", `Icons_${name}.re`), file);
          // fs.writeFileSync(path.join(__dirname, "src", `${name}.re`), file);
        });
    })
  );
}

// generate();
print('./src/')