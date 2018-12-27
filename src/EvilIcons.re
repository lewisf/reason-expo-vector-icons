module EvilIcons = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "EvilIcons";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "archive"] `undefined
    | [@bs.as "arrow-down"] `undefined
    | [@bs.as "arrow-left"] `undefined
    | [@bs.as "arrow-right"] `undefined
    | [@bs.as "arrow-up"] `undefined
    | [@bs.as "bell"] `undefined
    | [@bs.as "calendar"] `undefined
    | [@bs.as "camera"] `undefined
    | [@bs.as "cart"] `undefined
    | [@bs.as "chart"] `undefined
    | [@bs.as "check"] `undefined
    | [@bs.as "chevron-down"] `undefined
    | [@bs.as "chevron-left"] `undefined
    | [@bs.as "chevron-right"] `undefined
    | [@bs.as "chevron-up"] `undefined
    | [@bs.as "clock"] `undefined
    | [@bs.as "close"] `undefined
    | [@bs.as "close-o"] `undefined
    | [@bs.as "comment"] `undefined
    | [@bs.as "credit-card"] `undefined
    | [@bs.as "envelope"] `undefined
    | [@bs.as "exclamation"] `undefined
    | [@bs.as "external-link"] `undefined
    | [@bs.as "eye"] `undefined
    | [@bs.as "gear"] `undefined
    | [@bs.as "heart"] `undefined
    | [@bs.as "image"] `undefined
    | [@bs.as "like"] `undefined
    | [@bs.as "link"] `undefined
    | [@bs.as "location"] `undefined
    | [@bs.as "lock"] `undefined
    | [@bs.as "minus"] `undefined
    | [@bs.as "navicon"] `undefined
    | [@bs.as "paperclip"] `undefined
    | [@bs.as "pencil"] `undefined
    | [@bs.as "play"] `undefined
    | [@bs.as "plus"] `undefined
    | [@bs.as "pointer"] `undefined
    | [@bs.as "question"] `undefined
    | [@bs.as "redo"] `undefined
    | [@bs.as "refresh"] `undefined
    | [@bs.as "retweet"] `undefined
    | [@bs.as "sc-facebook"] `undefined
    | [@bs.as "sc-github"] `undefined
    | [@bs.as "sc-google-plus"] `undefined
    | [@bs.as "sc-instagram"] `undefined
    | [@bs.as "sc-linkedin"] `undefined
    | [@bs.as "sc-odnoklassniki"] `undefined
    | [@bs.as "sc-pinterest"] `undefined
    | [@bs.as "sc-skype"] `undefined
    | [@bs.as "sc-soundcloud"] `undefined
    | [@bs.as "sc-telegram"] `undefined
    | [@bs.as "sc-tumblr"] `undefined
    | [@bs.as "sc-twitter"] `undefined
    | [@bs.as "sc-vimeo"] `undefined
    | [@bs.as "sc-vk"] `undefined
    | [@bs.as "sc-youtube"] `undefined
    | [@bs.as "search"] `undefined
    | [@bs.as "share-apple"] `undefined
    | [@bs.as "share-google"] `undefined
    | [@bs.as "spinner"] `undefined
    | [@bs.as "spinner-2"] `undefined
    | [@bs.as "spinner-3"] `undefined
    | [@bs.as "star"] `undefined
    | [@bs.as "tag"] `undefined
    | [@bs.as "trash"] `undefined
    | [@bs.as "trophy"] `undefined
    | [@bs.as "undo"] `undefined
    | [@bs.as "unlock"] `undefined
    | [@bs.as "user"] `undefined
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