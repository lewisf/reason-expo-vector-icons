module EvilIcons = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "EvilIcons";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "archive"] `archive
    | [@bs.as "arrow-down"] `arrowDown
    | [@bs.as "arrow-left"] `arrowLeft
    | [@bs.as "arrow-right"] `arrowRight
    | [@bs.as "arrow-up"] `arrowUp
    | [@bs.as "bell"] `bell
    | [@bs.as "calendar"] `calendar
    | [@bs.as "camera"] `camera
    | [@bs.as "cart"] `cart
    | [@bs.as "chart"] `chart
    | [@bs.as "check"] `check
    | [@bs.as "chevron-down"] `chevronDown
    | [@bs.as "chevron-left"] `chevronLeft
    | [@bs.as "chevron-right"] `chevronRight
    | [@bs.as "chevron-up"] `chevronUp
    | [@bs.as "clock"] `clock
    | [@bs.as "close"] `close
    | [@bs.as "close-o"] `closeO
    | [@bs.as "comment"] `comment
    | [@bs.as "credit-card"] `creditCard
    | [@bs.as "envelope"] `envelope
    | [@bs.as "exclamation"] `exclamation
    | [@bs.as "external-link"] `externalLink
    | [@bs.as "eye"] `eye
    | [@bs.as "gear"] `gear
    | [@bs.as "heart"] `heart
    | [@bs.as "image"] `image
    | [@bs.as "like"] `like
    | [@bs.as "link"] `link
    | [@bs.as "location"] `location
    | [@bs.as "lock"] `lock
    | [@bs.as "minus"] `minus
    | [@bs.as "navicon"] `navicon
    | [@bs.as "paperclip"] `paperclip
    | [@bs.as "pencil"] `pencil
    | [@bs.as "play"] `play
    | [@bs.as "plus"] `plus
    | [@bs.as "pointer"] `pointer
    | [@bs.as "question"] `question
    | [@bs.as "redo"] `redo
    | [@bs.as "refresh"] `refresh
    | [@bs.as "retweet"] `retweet
    | [@bs.as "sc-facebook"] `scFacebook
    | [@bs.as "sc-github"] `scGithub
    | [@bs.as "sc-google-plus"] `scGooglePlus
    | [@bs.as "sc-instagram"] `scInstagram
    | [@bs.as "sc-linkedin"] `scLinkedin
    | [@bs.as "sc-odnoklassniki"] `scOdnoklassniki
    | [@bs.as "sc-pinterest"] `scPinterest
    | [@bs.as "sc-skype"] `scSkype
    | [@bs.as "sc-soundcloud"] `scSoundcloud
    | [@bs.as "sc-telegram"] `scTelegram
    | [@bs.as "sc-tumblr"] `scTumblr
    | [@bs.as "sc-twitter"] `scTwitter
    | [@bs.as "sc-vimeo"] `scVimeo
    | [@bs.as "sc-vk"] `scVk
    | [@bs.as "sc-youtube"] `scYoutube
    | [@bs.as "search"] `search
    | [@bs.as "share-apple"] `shareApple
    | [@bs.as "share-google"] `shareGoogle
    | [@bs.as "spinner"] `spinner
    | [@bs.as "spinner-2"] `spinner2
    | [@bs.as "spinner-3"] `spinner3
    | [@bs.as "star"] `star
    | [@bs.as "tag"] `tag
    | [@bs.as "trash"] `trash
    | [@bs.as "trophy"] `trophy
    | [@bs.as "undo"] `undo
    | [@bs.as "unlock"] `unlock
    | [@bs.as "user"] `user
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
      ~name=`archive,
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