module SimpleLineIcons = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "SimpleLineIcons";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "user"] `undefined
    | [@bs.as "people"] `undefined
    | [@bs.as "user-female"] `undefined
    | [@bs.as "user-follow"] `undefined
    | [@bs.as "user-following"] `undefined
    | [@bs.as "user-unfollow"] `undefined
    | [@bs.as "login"] `undefined
    | [@bs.as "logout"] `undefined
    | [@bs.as "emotsmile"] `undefined
    | [@bs.as "phone"] `undefined
    | [@bs.as "call-end"] `undefined
    | [@bs.as "call-in"] `undefined
    | [@bs.as "call-out"] `undefined
    | [@bs.as "map"] `undefined
    | [@bs.as "location-pin"] `undefined
    | [@bs.as "direction"] `undefined
    | [@bs.as "directions"] `undefined
    | [@bs.as "compass"] `undefined
    | [@bs.as "layers"] `undefined
    | [@bs.as "menu"] `undefined
    | [@bs.as "list"] `undefined
    | [@bs.as "options-vertical"] `undefined
    | [@bs.as "options"] `undefined
    | [@bs.as "arrow-down"] `undefined
    | [@bs.as "arrow-left"] `undefined
    | [@bs.as "arrow-right"] `undefined
    | [@bs.as "arrow-up"] `undefined
    | [@bs.as "arrow-up-circle"] `undefined
    | [@bs.as "arrow-left-circle"] `undefined
    | [@bs.as "arrow-right-circle"] `undefined
    | [@bs.as "arrow-down-circle"] `undefined
    | [@bs.as "check"] `undefined
    | [@bs.as "clock"] `undefined
    | [@bs.as "plus"] `undefined
    | [@bs.as "minus"] `undefined
    | [@bs.as "close"] `undefined
    | [@bs.as "event"] `undefined
    | [@bs.as "exclamation"] `undefined
    | [@bs.as "organization"] `undefined
    | [@bs.as "trophy"] `undefined
    | [@bs.as "screen-smartphone"] `undefined
    | [@bs.as "screen-desktop"] `undefined
    | [@bs.as "plane"] `undefined
    | [@bs.as "notebook"] `undefined
    | [@bs.as "mustache"] `undefined
    | [@bs.as "mouse"] `undefined
    | [@bs.as "magnet"] `undefined
    | [@bs.as "energy"] `undefined
    | [@bs.as "disc"] `undefined
    | [@bs.as "cursor"] `undefined
    | [@bs.as "cursor-move"] `undefined
    | [@bs.as "crop"] `undefined
    | [@bs.as "chemistry"] `undefined
    | [@bs.as "speedometer"] `undefined
    | [@bs.as "shield"] `undefined
    | [@bs.as "screen-tablet"] `undefined
    | [@bs.as "magic-wand"] `undefined
    | [@bs.as "hourglass"] `undefined
    | [@bs.as "graduation"] `undefined
    | [@bs.as "ghost"] `undefined
    | [@bs.as "game-controller"] `undefined
    | [@bs.as "fire"] `undefined
    | [@bs.as "eyeglass"] `undefined
    | [@bs.as "envelope-open"] `undefined
    | [@bs.as "envelope-letter"] `undefined
    | [@bs.as "bell"] `undefined
    | [@bs.as "badge"] `undefined
    | [@bs.as "anchor"] `undefined
    | [@bs.as "wallet"] `undefined
    | [@bs.as "vector"] `undefined
    | [@bs.as "speech"] `undefined
    | [@bs.as "puzzle"] `undefined
    | [@bs.as "printer"] `undefined
    | [@bs.as "present"] `undefined
    | [@bs.as "playlist"] `undefined
    | [@bs.as "pin"] `undefined
    | [@bs.as "picture"] `undefined
    | [@bs.as "handbag"] `undefined
    | [@bs.as "globe-alt"] `undefined
    | [@bs.as "globe"] `undefined
    | [@bs.as "folder-alt"] `undefined
    | [@bs.as "folder"] `undefined
    | [@bs.as "film"] `undefined
    | [@bs.as "feed"] `undefined
    | [@bs.as "drop"] `undefined
    | [@bs.as "drawer"] `undefined
    | [@bs.as "docs"] `undefined
    | [@bs.as "doc"] `undefined
    | [@bs.as "diamond"] `undefined
    | [@bs.as "cup"] `undefined
    | [@bs.as "calculator"] `undefined
    | [@bs.as "bubbles"] `undefined
    | [@bs.as "briefcase"] `undefined
    | [@bs.as "book-open"] `undefined
    | [@bs.as "basket-loaded"] `undefined
    | [@bs.as "basket"] `undefined
    | [@bs.as "bag"] `undefined
    | [@bs.as "action-undo"] `undefined
    | [@bs.as "action-redo"] `undefined
    | [@bs.as "wrench"] `undefined
    | [@bs.as "umbrella"] `undefined
    | [@bs.as "trash"] `undefined
    | [@bs.as "tag"] `undefined
    | [@bs.as "support"] `undefined
    | [@bs.as "frame"] `undefined
    | [@bs.as "size-fullscreen"] `undefined
    | [@bs.as "size-actual"] `undefined
    | [@bs.as "shuffle"] `undefined
    | [@bs.as "share-alt"] `undefined
    | [@bs.as "share"] `undefined
    | [@bs.as "rocket"] `undefined
    | [@bs.as "question"] `undefined
    | [@bs.as "pie-chart"] `undefined
    | [@bs.as "pencil"] `undefined
    | [@bs.as "note"] `undefined
    | [@bs.as "loop"] `undefined
    | [@bs.as "home"] `undefined
    | [@bs.as "grid"] `undefined
    | [@bs.as "graph"] `undefined
    | [@bs.as "microphone"] `undefined
    | [@bs.as "music-tone-alt"] `undefined
    | [@bs.as "music-tone"] `undefined
    | [@bs.as "earphones-alt"] `undefined
    | [@bs.as "earphones"] `undefined
    | [@bs.as "equalizer"] `undefined
    | [@bs.as "like"] `undefined
    | [@bs.as "dislike"] `undefined
    | [@bs.as "control-start"] `undefined
    | [@bs.as "control-rewind"] `undefined
    | [@bs.as "control-play"] `undefined
    | [@bs.as "control-pause"] `undefined
    | [@bs.as "control-forward"] `undefined
    | [@bs.as "control-end"] `undefined
    | [@bs.as "volume-1"] `undefined
    | [@bs.as "volume-2"] `undefined
    | [@bs.as "volume-off"] `undefined
    | [@bs.as "calendar"] `undefined
    | [@bs.as "bulb"] `undefined
    | [@bs.as "chart"] `undefined
    | [@bs.as "ban"] `undefined
    | [@bs.as "bubble"] `undefined
    | [@bs.as "camrecorder"] `undefined
    | [@bs.as "camera"] `undefined
    | [@bs.as "cloud-download"] `undefined
    | [@bs.as "cloud-upload"] `undefined
    | [@bs.as "envelope"] `undefined
    | [@bs.as "eye"] `undefined
    | [@bs.as "flag"] `undefined
    | [@bs.as "heart"] `undefined
    | [@bs.as "info"] `undefined
    | [@bs.as "key"] `undefined
    | [@bs.as "link"] `undefined
    | [@bs.as "lock"] `undefined
    | [@bs.as "lock-open"] `undefined
    | [@bs.as "magnifier"] `undefined
    | [@bs.as "magnifier-add"] `undefined
    | [@bs.as "magnifier-remove"] `undefined
    | [@bs.as "paper-clip"] `undefined
    | [@bs.as "paper-plane"] `undefined
    | [@bs.as "power"] `undefined
    | [@bs.as "refresh"] `undefined
    | [@bs.as "reload"] `undefined
    | [@bs.as "settings"] `undefined
    | [@bs.as "star"] `undefined
    | [@bs.as "symbol-female"] `undefined
    | [@bs.as "symbol-male"] `undefined
    | [@bs.as "target"] `undefined
    | [@bs.as "credit-card"] `undefined
    | [@bs.as "paypal"] `undefined
    | [@bs.as "social-tumblr"] `undefined
    | [@bs.as "social-twitter"] `undefined
    | [@bs.as "social-facebook"] `undefined
    | [@bs.as "social-instagram"] `undefined
    | [@bs.as "social-linkedin"] `undefined
    | [@bs.as "social-pinterest"] `undefined
    | [@bs.as "social-github"] `undefined
    | [@bs.as "social-google"] `undefined
    | [@bs.as "social-reddit"] `undefined
    | [@bs.as "social-skype"] `undefined
    | [@bs.as "social-dribbble"] `undefined
    | [@bs.as "social-behance"] `undefined
    | [@bs.as "social-foursqare"] `undefined
    | [@bs.as "social-soundcloud"] `undefined
    | [@bs.as "social-spotify"] `undefined
    | [@bs.as "social-stumbleupon"] `undefined
    | [@bs.as "social-youtube"] `undefined
    | [@bs.as "social-dropbox"] `undefined
    | [@bs.as "social-vkontakte"] `undefined
    | [@bs.as "social-steam"] `undefined
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
      ~name=`undefined,
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