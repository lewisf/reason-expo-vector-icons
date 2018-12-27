module Foundation = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "Foundation";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "address-book"] `undefined
    | [@bs.as "alert"] `undefined
    | [@bs.as "align-center"] `undefined
    | [@bs.as "align-justify"] `undefined
    | [@bs.as "align-left"] `undefined
    | [@bs.as "align-right"] `undefined
    | [@bs.as "anchor"] `undefined
    | [@bs.as "annotate"] `undefined
    | [@bs.as "archive"] `undefined
    | [@bs.as "arrow-down"] `undefined
    | [@bs.as "arrow-left"] `undefined
    | [@bs.as "arrow-right"] `undefined
    | [@bs.as "arrow-up"] `undefined
    | [@bs.as "arrows-compress"] `undefined
    | [@bs.as "arrows-expand"] `undefined
    | [@bs.as "arrows-in"] `undefined
    | [@bs.as "arrows-out"] `undefined
    | [@bs.as "asl"] `undefined
    | [@bs.as "asterisk"] `undefined
    | [@bs.as "at-sign"] `undefined
    | [@bs.as "background-color"] `undefined
    | [@bs.as "battery-empty"] `undefined
    | [@bs.as "battery-full"] `undefined
    | [@bs.as "battery-half"] `undefined
    | [@bs.as "bitcoin-circle"] `undefined
    | [@bs.as "bitcoin"] `undefined
    | [@bs.as "blind"] `undefined
    | [@bs.as "bluetooth"] `undefined
    | [@bs.as "bold"] `undefined
    | [@bs.as "book-bookmark"] `undefined
    | [@bs.as "book"] `undefined
    | [@bs.as "bookmark"] `undefined
    | [@bs.as "braille"] `undefined
    | [@bs.as "burst-new"] `undefined
    | [@bs.as "burst-sale"] `undefined
    | [@bs.as "burst"] `undefined
    | [@bs.as "calendar"] `undefined
    | [@bs.as "camera"] `undefined
    | [@bs.as "check"] `undefined
    | [@bs.as "checkbox"] `undefined
    | [@bs.as "clipboard-notes"] `undefined
    | [@bs.as "clipboard-pencil"] `undefined
    | [@bs.as "clipboard"] `undefined
    | [@bs.as "clock"] `undefined
    | [@bs.as "closed-caption"] `undefined
    | [@bs.as "cloud"] `undefined
    | [@bs.as "comment-minus"] `undefined
    | [@bs.as "comment-quotes"] `undefined
    | [@bs.as "comment-video"] `undefined
    | [@bs.as "comment"] `undefined
    | [@bs.as "comments"] `undefined
    | [@bs.as "compass"] `undefined
    | [@bs.as "contrast"] `undefined
    | [@bs.as "credit-card"] `undefined
    | [@bs.as "crop"] `undefined
    | [@bs.as "crown"] `undefined
    | [@bs.as "css3"] `undefined
    | [@bs.as "database"] `undefined
    | [@bs.as "die-five"] `undefined
    | [@bs.as "die-four"] `undefined
    | [@bs.as "die-one"] `undefined
    | [@bs.as "die-six"] `undefined
    | [@bs.as "die-three"] `undefined
    | [@bs.as "die-two"] `undefined
    | [@bs.as "dislike"] `undefined
    | [@bs.as "dollar-bill"] `undefined
    | [@bs.as "dollar"] `undefined
    | [@bs.as "download"] `undefined
    | [@bs.as "eject"] `undefined
    | [@bs.as "elevator"] `undefined
    | [@bs.as "euro"] `undefined
    | [@bs.as "eye"] `undefined
    | [@bs.as "fast-forward"] `undefined
    | [@bs.as "female-symbol"] `undefined
    | [@bs.as "female"] `undefined
    | [@bs.as "filter"] `undefined
    | [@bs.as "first-aid"] `undefined
    | [@bs.as "flag"] `undefined
    | [@bs.as "folder-add"] `undefined
    | [@bs.as "folder-lock"] `undefined
    | [@bs.as "folder"] `undefined
    | [@bs.as "foot"] `undefined
    | [@bs.as "foundation"] `undefined
    | [@bs.as "graph-bar"] `undefined
    | [@bs.as "graph-horizontal"] `undefined
    | [@bs.as "graph-pie"] `undefined
    | [@bs.as "graph-trend"] `undefined
    | [@bs.as "guide-dog"] `undefined
    | [@bs.as "hearing-aid"] `undefined
    | [@bs.as "heart"] `undefined
    | [@bs.as "home"] `undefined
    | [@bs.as "html5"] `undefined
    | [@bs.as "indent-less"] `undefined
    | [@bs.as "indent-more"] `undefined
    | [@bs.as "info"] `undefined
    | [@bs.as "italic"] `undefined
    | [@bs.as "key"] `undefined
    | [@bs.as "laptop"] `undefined
    | [@bs.as "layout"] `undefined
    | [@bs.as "lightbulb"] `undefined
    | [@bs.as "like"] `undefined
    | [@bs.as "link"] `undefined
    | [@bs.as "list-bullet"] `undefined
    | [@bs.as "list-number"] `undefined
    | [@bs.as "list-thumbnails"] `undefined
    | [@bs.as "list"] `undefined
    | [@bs.as "lock"] `undefined
    | [@bs.as "loop"] `undefined
    | [@bs.as "magnifying-glass"] `undefined
    | [@bs.as "mail"] `undefined
    | [@bs.as "male-female"] `undefined
    | [@bs.as "male-symbol"] `undefined
    | [@bs.as "male"] `undefined
    | [@bs.as "map"] `undefined
    | [@bs.as "marker"] `undefined
    | [@bs.as "megaphone"] `undefined
    | [@bs.as "microphone"] `undefined
    | [@bs.as "minus-circle"] `undefined
    | [@bs.as "minus"] `undefined
    | [@bs.as "mobile-signal"] `undefined
    | [@bs.as "mobile"] `undefined
    | [@bs.as "monitor"] `undefined
    | [@bs.as "mountains"] `undefined
    | [@bs.as "music"] `undefined
    | [@bs.as "next"] `undefined
    | [@bs.as "no-dogs"] `undefined
    | [@bs.as "no-smoking"] `undefined
    | [@bs.as "page-add"] `undefined
    | [@bs.as "page-copy"] `undefined
    | [@bs.as "page-csv"] `undefined
    | [@bs.as "page-delete"] `undefined
    | [@bs.as "page-doc"] `undefined
    | [@bs.as "page-edit"] `undefined
    | [@bs.as "page-export-csv"] `undefined
    | [@bs.as "page-export-doc"] `undefined
    | [@bs.as "page-export-pdf"] `undefined
    | [@bs.as "page-export"] `undefined
    | [@bs.as "page-filled"] `undefined
    | [@bs.as "page-multiple"] `undefined
    | [@bs.as "page-pdf"] `undefined
    | [@bs.as "page-remove"] `undefined
    | [@bs.as "page-search"] `undefined
    | [@bs.as "page"] `undefined
    | [@bs.as "paint-bucket"] `undefined
    | [@bs.as "paperclip"] `undefined
    | [@bs.as "pause"] `undefined
    | [@bs.as "paw"] `undefined
    | [@bs.as "paypal"] `undefined
    | [@bs.as "pencil"] `undefined
    | [@bs.as "photo"] `undefined
    | [@bs.as "play-circle"] `undefined
    | [@bs.as "play-video"] `undefined
    | [@bs.as "play"] `undefined
    | [@bs.as "plus"] `undefined
    | [@bs.as "pound"] `undefined
    | [@bs.as "power"] `undefined
    | [@bs.as "previous"] `undefined
    | [@bs.as "price-tag"] `undefined
    | [@bs.as "pricetag-multiple"] `undefined
    | [@bs.as "print"] `undefined
    | [@bs.as "prohibited"] `undefined
    | [@bs.as "projection-screen"] `undefined
    | [@bs.as "puzzle"] `undefined
    | [@bs.as "quote"] `undefined
    | [@bs.as "record"] `undefined
    | [@bs.as "refresh"] `undefined
    | [@bs.as "results-demographics"] `undefined
    | [@bs.as "results"] `undefined
    | [@bs.as "rewind-ten"] `undefined
    | [@bs.as "rewind"] `undefined
    | [@bs.as "rss"] `undefined
    | [@bs.as "safety-cone"] `undefined
    | [@bs.as "save"] `undefined
    | [@bs.as "share"] `undefined
    | [@bs.as "sheriff-badge"] `undefined
    | [@bs.as "shield"] `undefined
    | [@bs.as "shopping-bag"] `undefined
    | [@bs.as "shopping-cart"] `undefined
    | [@bs.as "shuffle"] `undefined
    | [@bs.as "skull"] `undefined
    | [@bs.as "social-500px"] `undefined
    | [@bs.as "social-adobe"] `undefined
    | [@bs.as "social-amazon"] `undefined
    | [@bs.as "social-android"] `undefined
    | [@bs.as "social-apple"] `undefined
    | [@bs.as "social-behance"] `undefined
    | [@bs.as "social-bing"] `undefined
    | [@bs.as "social-blogger"] `undefined
    | [@bs.as "social-delicious"] `undefined
    | [@bs.as "social-designer-news"] `undefined
    | [@bs.as "social-deviant-art"] `undefined
    | [@bs.as "social-digg"] `undefined
    | [@bs.as "social-dribbble"] `undefined
    | [@bs.as "social-drive"] `undefined
    | [@bs.as "social-dropbox"] `undefined
    | [@bs.as "social-evernote"] `undefined
    | [@bs.as "social-facebook"] `undefined
    | [@bs.as "social-flickr"] `undefined
    | [@bs.as "social-forrst"] `undefined
    | [@bs.as "social-foursquare"] `undefined
    | [@bs.as "social-game-center"] `undefined
    | [@bs.as "social-github"] `undefined
    | [@bs.as "social-google-plus"] `undefined
    | [@bs.as "social-hacker-news"] `undefined
    | [@bs.as "social-hi5"] `undefined
    | [@bs.as "social-instagram"] `undefined
    | [@bs.as "social-joomla"] `undefined
    | [@bs.as "social-lastfm"] `undefined
    | [@bs.as "social-linkedin"] `undefined
    | [@bs.as "social-medium"] `undefined
    | [@bs.as "social-myspace"] `undefined
    | [@bs.as "social-orkut"] `undefined
    | [@bs.as "social-path"] `undefined
    | [@bs.as "social-picasa"] `undefined
    | [@bs.as "social-pinterest"] `undefined
    | [@bs.as "social-rdio"] `undefined
    | [@bs.as "social-reddit"] `undefined
    | [@bs.as "social-skillshare"] `undefined
    | [@bs.as "social-skype"] `undefined
    | [@bs.as "social-smashing-mag"] `undefined
    | [@bs.as "social-snapchat"] `undefined
    | [@bs.as "social-spotify"] `undefined
    | [@bs.as "social-squidoo"] `undefined
    | [@bs.as "social-stack-overflow"] `undefined
    | [@bs.as "social-steam"] `undefined
    | [@bs.as "social-stumbleupon"] `undefined
    | [@bs.as "social-treehouse"] `undefined
    | [@bs.as "social-tumblr"] `undefined
    | [@bs.as "social-twitter"] `undefined
    | [@bs.as "social-vimeo"] `undefined
    | [@bs.as "social-windows"] `undefined
    | [@bs.as "social-xbox"] `undefined
    | [@bs.as "social-yahoo"] `undefined
    | [@bs.as "social-yelp"] `undefined
    | [@bs.as "social-youtube"] `undefined
    | [@bs.as "social-zerply"] `undefined
    | [@bs.as "social-zurb"] `undefined
    | [@bs.as "sound"] `undefined
    | [@bs.as "star"] `undefined
    | [@bs.as "stop"] `undefined
    | [@bs.as "strikethrough"] `undefined
    | [@bs.as "subscript"] `undefined
    | [@bs.as "superscript"] `undefined
    | [@bs.as "tablet-landscape"] `undefined
    | [@bs.as "tablet-portrait"] `undefined
    | [@bs.as "target-two"] `undefined
    | [@bs.as "target"] `undefined
    | [@bs.as "telephone-accessible"] `undefined
    | [@bs.as "telephone"] `undefined
    | [@bs.as "text-color"] `undefined
    | [@bs.as "thumbnails"] `undefined
    | [@bs.as "ticket"] `undefined
    | [@bs.as "torso-business"] `undefined
    | [@bs.as "torso-female"] `undefined
    | [@bs.as "torso"] `undefined
    | [@bs.as "torsos-all-female"] `undefined
    | [@bs.as "torsos-all"] `undefined
    | [@bs.as "torsos-female-male"] `undefined
    | [@bs.as "torsos-male-female"] `undefined
    | [@bs.as "torsos"] `undefined
    | [@bs.as "trash"] `undefined
    | [@bs.as "trees"] `undefined
    | [@bs.as "trophy"] `undefined
    | [@bs.as "underline"] `undefined
    | [@bs.as "universal-access"] `undefined
    | [@bs.as "unlink"] `undefined
    | [@bs.as "unlock"] `undefined
    | [@bs.as "upload-cloud"] `undefined
    | [@bs.as "upload"] `undefined
    | [@bs.as "usb"] `undefined
    | [@bs.as "video"] `undefined
    | [@bs.as "volume-none"] `undefined
    | [@bs.as "volume-strike"] `undefined
    | [@bs.as "volume"] `undefined
    | [@bs.as "web"] `undefined
    | [@bs.as "wheelchair"] `undefined
    | [@bs.as "widget"] `undefined
    | [@bs.as "wrench"] `undefined
    | [@bs.as "x-circle"] `undefined
    | [@bs.as "x"] `undefined
    | [@bs.as "yen"] `undefined
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