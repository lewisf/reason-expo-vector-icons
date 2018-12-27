module Feather = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "Feather";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "activity"] `undefined
    | [@bs.as "airplay"] `undefined
    | [@bs.as "alert-circle"] `undefined
    | [@bs.as "alert-octagon"] `undefined
    | [@bs.as "alert-triangle"] `undefined
    | [@bs.as "align-center"] `undefined
    | [@bs.as "align-justify"] `undefined
    | [@bs.as "align-left"] `undefined
    | [@bs.as "align-right"] `undefined
    | [@bs.as "anchor"] `undefined
    | [@bs.as "aperture"] `undefined
    | [@bs.as "archive"] `undefined
    | [@bs.as "arrow-down"] `undefined
    | [@bs.as "arrow-down-circle"] `undefined
    | [@bs.as "arrow-down-left"] `undefined
    | [@bs.as "arrow-down-right"] `undefined
    | [@bs.as "arrow-left"] `undefined
    | [@bs.as "arrow-left-circle"] `undefined
    | [@bs.as "arrow-right"] `undefined
    | [@bs.as "arrow-right-circle"] `undefined
    | [@bs.as "arrow-up"] `undefined
    | [@bs.as "arrow-up-circle"] `undefined
    | [@bs.as "arrow-up-left"] `undefined
    | [@bs.as "arrow-up-right"] `undefined
    | [@bs.as "at-sign"] `undefined
    | [@bs.as "award"] `undefined
    | [@bs.as "bar-chart"] `undefined
    | [@bs.as "bar-chart-2"] `undefined
    | [@bs.as "battery"] `undefined
    | [@bs.as "battery-charging"] `undefined
    | [@bs.as "bell"] `undefined
    | [@bs.as "bell-off"] `undefined
    | [@bs.as "bluetooth"] `undefined
    | [@bs.as "bold"] `undefined
    | [@bs.as "book"] `undefined
    | [@bs.as "book-open"] `undefined
    | [@bs.as "bookmark"] `undefined
    | [@bs.as "box"] `undefined
    | [@bs.as "briefcase"] `undefined
    | [@bs.as "calendar"] `undefined
    | [@bs.as "camera"] `undefined
    | [@bs.as "camera-off"] `undefined
    | [@bs.as "cast"] `undefined
    | [@bs.as "check"] `undefined
    | [@bs.as "check-circle"] `undefined
    | [@bs.as "check-square"] `undefined
    | [@bs.as "chevron-down"] `undefined
    | [@bs.as "chevron-left"] `undefined
    | [@bs.as "chevron-right"] `undefined
    | [@bs.as "chevron-up"] `undefined
    | [@bs.as "chevrons-down"] `undefined
    | [@bs.as "chevrons-left"] `undefined
    | [@bs.as "chevrons-right"] `undefined
    | [@bs.as "chevrons-up"] `undefined
    | [@bs.as "chrome"] `undefined
    | [@bs.as "circle"] `undefined
    | [@bs.as "clipboard"] `undefined
    | [@bs.as "clock"] `undefined
    | [@bs.as "cloud"] `undefined
    | [@bs.as "cloud-drizzle"] `undefined
    | [@bs.as "cloud-lightning"] `undefined
    | [@bs.as "cloud-off"] `undefined
    | [@bs.as "cloud-rain"] `undefined
    | [@bs.as "cloud-snow"] `undefined
    | [@bs.as "code"] `undefined
    | [@bs.as "codepen"] `undefined
    | [@bs.as "command"] `undefined
    | [@bs.as "compass"] `undefined
    | [@bs.as "copy"] `undefined
    | [@bs.as "corner-down-left"] `undefined
    | [@bs.as "corner-down-right"] `undefined
    | [@bs.as "corner-left-down"] `undefined
    | [@bs.as "corner-left-up"] `undefined
    | [@bs.as "corner-right-down"] `undefined
    | [@bs.as "corner-right-up"] `undefined
    | [@bs.as "corner-up-left"] `undefined
    | [@bs.as "corner-up-right"] `undefined
    | [@bs.as "cpu"] `undefined
    | [@bs.as "credit-card"] `undefined
    | [@bs.as "crop"] `undefined
    | [@bs.as "crosshair"] `undefined
    | [@bs.as "database"] `undefined
    | [@bs.as "delete"] `undefined
    | [@bs.as "disc"] `undefined
    | [@bs.as "dollar-sign"] `undefined
    | [@bs.as "download"] `undefined
    | [@bs.as "download-cloud"] `undefined
    | [@bs.as "droplet"] `undefined
    | [@bs.as "edit"] `undefined
    | [@bs.as "edit-2"] `undefined
    | [@bs.as "edit-3"] `undefined
    | [@bs.as "external-link"] `undefined
    | [@bs.as "eye"] `undefined
    | [@bs.as "eye-off"] `undefined
    | [@bs.as "facebook"] `undefined
    | [@bs.as "fast-forward"] `undefined
    | [@bs.as "feather"] `undefined
    | [@bs.as "file"] `undefined
    | [@bs.as "file-minus"] `undefined
    | [@bs.as "file-plus"] `undefined
    | [@bs.as "file-text"] `undefined
    | [@bs.as "film"] `undefined
    | [@bs.as "filter"] `undefined
    | [@bs.as "flag"] `undefined
    | [@bs.as "folder"] `undefined
    | [@bs.as "folder-minus"] `undefined
    | [@bs.as "folder-plus"] `undefined
    | [@bs.as "gift"] `undefined
    | [@bs.as "git-branch"] `undefined
    | [@bs.as "git-commit"] `undefined
    | [@bs.as "git-merge"] `undefined
    | [@bs.as "git-pull-request"] `undefined
    | [@bs.as "github"] `undefined
    | [@bs.as "gitlab"] `undefined
    | [@bs.as "globe"] `undefined
    | [@bs.as "grid"] `undefined
    | [@bs.as "hard-drive"] `undefined
    | [@bs.as "hash"] `undefined
    | [@bs.as "headphones"] `undefined
    | [@bs.as "heart"] `undefined
    | [@bs.as "help-circle"] `undefined
    | [@bs.as "home"] `undefined
    | [@bs.as "image"] `undefined
    | [@bs.as "inbox"] `undefined
    | [@bs.as "info"] `undefined
    | [@bs.as "instagram"] `undefined
    | [@bs.as "italic"] `undefined
    | [@bs.as "layers"] `undefined
    | [@bs.as "layout"] `undefined
    | [@bs.as "life-buoy"] `undefined
    | [@bs.as "link"] `undefined
    | [@bs.as "link-2"] `undefined
    | [@bs.as "linkedin"] `undefined
    | [@bs.as "list"] `undefined
    | [@bs.as "loader"] `undefined
    | [@bs.as "lock"] `undefined
    | [@bs.as "log-in"] `undefined
    | [@bs.as "log-out"] `undefined
    | [@bs.as "mail"] `undefined
    | [@bs.as "map"] `undefined
    | [@bs.as "map-pin"] `undefined
    | [@bs.as "maximize"] `undefined
    | [@bs.as "maximize-2"] `undefined
    | [@bs.as "menu"] `undefined
    | [@bs.as "message-circle"] `undefined
    | [@bs.as "message-square"] `undefined
    | [@bs.as "mic"] `undefined
    | [@bs.as "mic-off"] `undefined
    | [@bs.as "minimize"] `undefined
    | [@bs.as "minimize-2"] `undefined
    | [@bs.as "minus"] `undefined
    | [@bs.as "minus-circle"] `undefined
    | [@bs.as "minus-square"] `undefined
    | [@bs.as "monitor"] `undefined
    | [@bs.as "moon"] `undefined
    | [@bs.as "more-horizontal"] `undefined
    | [@bs.as "more-vertical"] `undefined
    | [@bs.as "move"] `undefined
    | [@bs.as "music"] `undefined
    | [@bs.as "navigation"] `undefined
    | [@bs.as "navigation-2"] `undefined
    | [@bs.as "octagon"] `undefined
    | [@bs.as "package"] `undefined
    | [@bs.as "paperclip"] `undefined
    | [@bs.as "pause"] `undefined
    | [@bs.as "pause-circle"] `undefined
    | [@bs.as "percent"] `undefined
    | [@bs.as "phone"] `undefined
    | [@bs.as "phone-call"] `undefined
    | [@bs.as "phone-forwarded"] `undefined
    | [@bs.as "phone-incoming"] `undefined
    | [@bs.as "phone-missed"] `undefined
    | [@bs.as "phone-off"] `undefined
    | [@bs.as "phone-outgoing"] `undefined
    | [@bs.as "pie-chart"] `undefined
    | [@bs.as "play"] `undefined
    | [@bs.as "play-circle"] `undefined
    | [@bs.as "plus"] `undefined
    | [@bs.as "plus-circle"] `undefined
    | [@bs.as "plus-square"] `undefined
    | [@bs.as "pocket"] `undefined
    | [@bs.as "power"] `undefined
    | [@bs.as "printer"] `undefined
    | [@bs.as "radio"] `undefined
    | [@bs.as "refresh-ccw"] `undefined
    | [@bs.as "refresh-cw"] `undefined
    | [@bs.as "repeat"] `undefined
    | [@bs.as "rewind"] `undefined
    | [@bs.as "rotate-ccw"] `undefined
    | [@bs.as "rotate-cw"] `undefined
    | [@bs.as "rss"] `undefined
    | [@bs.as "save"] `undefined
    | [@bs.as "scissors"] `undefined
    | [@bs.as "search"] `undefined
    | [@bs.as "send"] `undefined
    | [@bs.as "server"] `undefined
    | [@bs.as "settings"] `undefined
    | [@bs.as "share"] `undefined
    | [@bs.as "share-2"] `undefined
    | [@bs.as "shield"] `undefined
    | [@bs.as "shield-off"] `undefined
    | [@bs.as "shopping-bag"] `undefined
    | [@bs.as "shopping-cart"] `undefined
    | [@bs.as "shuffle"] `undefined
    | [@bs.as "sidebar"] `undefined
    | [@bs.as "skip-back"] `undefined
    | [@bs.as "skip-forward"] `undefined
    | [@bs.as "slack"] `undefined
    | [@bs.as "slash"] `undefined
    | [@bs.as "sliders"] `undefined
    | [@bs.as "smartphone"] `undefined
    | [@bs.as "speaker"] `undefined
    | [@bs.as "square"] `undefined
    | [@bs.as "star"] `undefined
    | [@bs.as "stop-circle"] `undefined
    | [@bs.as "sun"] `undefined
    | [@bs.as "sunrise"] `undefined
    | [@bs.as "sunset"] `undefined
    | [@bs.as "tablet"] `undefined
    | [@bs.as "tag"] `undefined
    | [@bs.as "target"] `undefined
    | [@bs.as "terminal"] `undefined
    | [@bs.as "thermometer"] `undefined
    | [@bs.as "thumbs-down"] `undefined
    | [@bs.as "thumbs-up"] `undefined
    | [@bs.as "toggle-left"] `undefined
    | [@bs.as "toggle-right"] `undefined
    | [@bs.as "trash"] `undefined
    | [@bs.as "trash-2"] `undefined
    | [@bs.as "trending-down"] `undefined
    | [@bs.as "trending-up"] `undefined
    | [@bs.as "triangle"] `undefined
    | [@bs.as "truck"] `undefined
    | [@bs.as "tv"] `undefined
    | [@bs.as "twitter"] `undefined
    | [@bs.as "type"] `undefined
    | [@bs.as "umbrella"] `undefined
    | [@bs.as "underline"] `undefined
    | [@bs.as "unlock"] `undefined
    | [@bs.as "upload"] `undefined
    | [@bs.as "upload-cloud"] `undefined
    | [@bs.as "user"] `undefined
    | [@bs.as "user-check"] `undefined
    | [@bs.as "user-minus"] `undefined
    | [@bs.as "user-plus"] `undefined
    | [@bs.as "user-x"] `undefined
    | [@bs.as "users"] `undefined
    | [@bs.as "video"] `undefined
    | [@bs.as "video-off"] `undefined
    | [@bs.as "voicemail"] `undefined
    | [@bs.as "volume"] `undefined
    | [@bs.as "volume-1"] `undefined
    | [@bs.as "volume-2"] `undefined
    | [@bs.as "volume-x"] `undefined
    | [@bs.as "watch"] `undefined
    | [@bs.as "wifi"] `undefined
    | [@bs.as "wifi-off"] `undefined
    | [@bs.as "wind"] `undefined
    | [@bs.as "x"] `undefined
    | [@bs.as "x-circle"] `undefined
    | [@bs.as "x-square"] `undefined
    | [@bs.as "youtube"] `undefined
    | [@bs.as "zap"] `undefined
    | [@bs.as "zap-off"] `undefined
    | [@bs.as "zoom-in"] `undefined
    | [@bs.as "zoom-out"] `undefined
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