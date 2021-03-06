module Feather = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "Feather";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "activity"] `activity
    | [@bs.as "airplay"] `airplay
    | [@bs.as "alert-circle"] `alertCircle
    | [@bs.as "alert-octagon"] `alertOctagon
    | [@bs.as "alert-triangle"] `alertTriangle
    | [@bs.as "align-center"] `alignCenter
    | [@bs.as "align-justify"] `alignJustify
    | [@bs.as "align-left"] `alignLeft
    | [@bs.as "align-right"] `alignRight
    | [@bs.as "anchor"] `anchor
    | [@bs.as "aperture"] `aperture
    | [@bs.as "archive"] `archive
    | [@bs.as "arrow-down"] `arrowDown
    | [@bs.as "arrow-down-circle"] `arrowDownCircle
    | [@bs.as "arrow-down-left"] `arrowDownLeft
    | [@bs.as "arrow-down-right"] `arrowDownRight
    | [@bs.as "arrow-left"] `arrowLeft
    | [@bs.as "arrow-left-circle"] `arrowLeftCircle
    | [@bs.as "arrow-right"] `arrowRight
    | [@bs.as "arrow-right-circle"] `arrowRightCircle
    | [@bs.as "arrow-up"] `arrowUp
    | [@bs.as "arrow-up-circle"] `arrowUpCircle
    | [@bs.as "arrow-up-left"] `arrowUpLeft
    | [@bs.as "arrow-up-right"] `arrowUpRight
    | [@bs.as "at-sign"] `atSign
    | [@bs.as "award"] `award
    | [@bs.as "bar-chart"] `barChart
    | [@bs.as "bar-chart-2"] `barChart2
    | [@bs.as "battery"] `battery
    | [@bs.as "battery-charging"] `batteryCharging
    | [@bs.as "bell"] `bell
    | [@bs.as "bell-off"] `bellOff
    | [@bs.as "bluetooth"] `bluetooth
    | [@bs.as "bold"] `bold
    | [@bs.as "book"] `book
    | [@bs.as "book-open"] `bookOpen
    | [@bs.as "bookmark"] `bookmark
    | [@bs.as "box"] `box
    | [@bs.as "briefcase"] `briefcase
    | [@bs.as "calendar"] `calendar
    | [@bs.as "camera"] `camera
    | [@bs.as "camera-off"] `cameraOff
    | [@bs.as "cast"] `cast
    | [@bs.as "check"] `check
    | [@bs.as "check-circle"] `checkCircle
    | [@bs.as "check-square"] `checkSquare
    | [@bs.as "chevron-down"] `chevronDown
    | [@bs.as "chevron-left"] `chevronLeft
    | [@bs.as "chevron-right"] `chevronRight
    | [@bs.as "chevron-up"] `chevronUp
    | [@bs.as "chevrons-down"] `chevronsDown
    | [@bs.as "chevrons-left"] `chevronsLeft
    | [@bs.as "chevrons-right"] `chevronsRight
    | [@bs.as "chevrons-up"] `chevronsUp
    | [@bs.as "chrome"] `chrome
    | [@bs.as "circle"] `circle
    | [@bs.as "clipboard"] `clipboard
    | [@bs.as "clock"] `clock
    | [@bs.as "cloud"] `cloud
    | [@bs.as "cloud-drizzle"] `cloudDrizzle
    | [@bs.as "cloud-lightning"] `cloudLightning
    | [@bs.as "cloud-off"] `cloudOff
    | [@bs.as "cloud-rain"] `cloudRain
    | [@bs.as "cloud-snow"] `cloudSnow
    | [@bs.as "code"] `code
    | [@bs.as "codepen"] `codepen
    | [@bs.as "command"] `command
    | [@bs.as "compass"] `compass
    | [@bs.as "copy"] `copy
    | [@bs.as "corner-down-left"] `cornerDownLeft
    | [@bs.as "corner-down-right"] `cornerDownRight
    | [@bs.as "corner-left-down"] `cornerLeftDown
    | [@bs.as "corner-left-up"] `cornerLeftUp
    | [@bs.as "corner-right-down"] `cornerRightDown
    | [@bs.as "corner-right-up"] `cornerRightUp
    | [@bs.as "corner-up-left"] `cornerUpLeft
    | [@bs.as "corner-up-right"] `cornerUpRight
    | [@bs.as "cpu"] `cpu
    | [@bs.as "credit-card"] `creditCard
    | [@bs.as "crop"] `crop
    | [@bs.as "crosshair"] `crosshair
    | [@bs.as "database"] `database
    | [@bs.as "delete"] `delete
    | [@bs.as "disc"] `disc
    | [@bs.as "dollar-sign"] `dollarSign
    | [@bs.as "download"] `download
    | [@bs.as "download-cloud"] `downloadCloud
    | [@bs.as "droplet"] `droplet
    | [@bs.as "edit"] `edit
    | [@bs.as "edit-2"] `edit2
    | [@bs.as "edit-3"] `edit3
    | [@bs.as "external-link"] `externalLink
    | [@bs.as "eye"] `eye
    | [@bs.as "eye-off"] `eyeOff
    | [@bs.as "facebook"] `facebook
    | [@bs.as "fast-forward"] `fastForward
    | [@bs.as "feather"] `feather
    | [@bs.as "file"] `file
    | [@bs.as "file-minus"] `fileMinus
    | [@bs.as "file-plus"] `filePlus
    | [@bs.as "file-text"] `fileText
    | [@bs.as "film"] `film
    | [@bs.as "filter"] `filter
    | [@bs.as "flag"] `flag
    | [@bs.as "folder"] `folder
    | [@bs.as "folder-minus"] `folderMinus
    | [@bs.as "folder-plus"] `folderPlus
    | [@bs.as "gift"] `gift
    | [@bs.as "git-branch"] `gitBranch
    | [@bs.as "git-commit"] `gitCommit
    | [@bs.as "git-merge"] `gitMerge
    | [@bs.as "git-pull-request"] `gitPullRequest
    | [@bs.as "github"] `github
    | [@bs.as "gitlab"] `gitlab
    | [@bs.as "globe"] `globe
    | [@bs.as "grid"] `grid
    | [@bs.as "hard-drive"] `hardDrive
    | [@bs.as "hash"] `hash
    | [@bs.as "headphones"] `headphones
    | [@bs.as "heart"] `heart
    | [@bs.as "help-circle"] `helpCircle
    | [@bs.as "home"] `home
    | [@bs.as "image"] `image
    | [@bs.as "inbox"] `inbox
    | [@bs.as "info"] `info
    | [@bs.as "instagram"] `instagram
    | [@bs.as "italic"] `italic
    | [@bs.as "layers"] `layers
    | [@bs.as "layout"] `layout
    | [@bs.as "life-buoy"] `lifeBuoy
    | [@bs.as "link"] `link
    | [@bs.as "link-2"] `link2
    | [@bs.as "linkedin"] `linkedin
    | [@bs.as "list"] `list
    | [@bs.as "loader"] `loader
    | [@bs.as "lock"] `lock
    | [@bs.as "log-in"] `logIn
    | [@bs.as "log-out"] `logOut
    | [@bs.as "mail"] `mail
    | [@bs.as "map"] `map
    | [@bs.as "map-pin"] `mapPin
    | [@bs.as "maximize"] `maximize
    | [@bs.as "maximize-2"] `maximize2
    | [@bs.as "menu"] `menu
    | [@bs.as "message-circle"] `messageCircle
    | [@bs.as "message-square"] `messageSquare
    | [@bs.as "mic"] `mic
    | [@bs.as "mic-off"] `micOff
    | [@bs.as "minimize"] `minimize
    | [@bs.as "minimize-2"] `minimize2
    | [@bs.as "minus"] `minus
    | [@bs.as "minus-circle"] `minusCircle
    | [@bs.as "minus-square"] `minusSquare
    | [@bs.as "monitor"] `monitor
    | [@bs.as "moon"] `moon
    | [@bs.as "more-horizontal"] `moreHorizontal
    | [@bs.as "more-vertical"] `moreVertical
    | [@bs.as "move"] `move
    | [@bs.as "music"] `music
    | [@bs.as "navigation"] `navigation
    | [@bs.as "navigation-2"] `navigation2
    | [@bs.as "octagon"] `octagon
    | [@bs.as "package"] `package
    | [@bs.as "paperclip"] `paperclip
    | [@bs.as "pause"] `pause
    | [@bs.as "pause-circle"] `pauseCircle
    | [@bs.as "percent"] `percent
    | [@bs.as "phone"] `phone
    | [@bs.as "phone-call"] `phoneCall
    | [@bs.as "phone-forwarded"] `phoneForwarded
    | [@bs.as "phone-incoming"] `phoneIncoming
    | [@bs.as "phone-missed"] `phoneMissed
    | [@bs.as "phone-off"] `phoneOff
    | [@bs.as "phone-outgoing"] `phoneOutgoing
    | [@bs.as "pie-chart"] `pieChart
    | [@bs.as "play"] `play
    | [@bs.as "play-circle"] `playCircle
    | [@bs.as "plus"] `plus
    | [@bs.as "plus-circle"] `plusCircle
    | [@bs.as "plus-square"] `plusSquare
    | [@bs.as "pocket"] `pocket
    | [@bs.as "power"] `power
    | [@bs.as "printer"] `printer
    | [@bs.as "radio"] `radio
    | [@bs.as "refresh-ccw"] `refreshCcw
    | [@bs.as "refresh-cw"] `refreshCw
    | [@bs.as "repeat"] `repeat
    | [@bs.as "rewind"] `rewind
    | [@bs.as "rotate-ccw"] `rotateCcw
    | [@bs.as "rotate-cw"] `rotateCw
    | [@bs.as "rss"] `rss
    | [@bs.as "save"] `save
    | [@bs.as "scissors"] `scissors
    | [@bs.as "search"] `search
    | [@bs.as "send"] `send
    | [@bs.as "server"] `server
    | [@bs.as "settings"] `settings
    | [@bs.as "share"] `share
    | [@bs.as "share-2"] `share2
    | [@bs.as "shield"] `shield
    | [@bs.as "shield-off"] `shieldOff
    | [@bs.as "shopping-bag"] `shoppingBag
    | [@bs.as "shopping-cart"] `shoppingCart
    | [@bs.as "shuffle"] `shuffle
    | [@bs.as "sidebar"] `sidebar
    | [@bs.as "skip-back"] `skipBack
    | [@bs.as "skip-forward"] `skipForward
    | [@bs.as "slack"] `slack
    | [@bs.as "slash"] `slash
    | [@bs.as "sliders"] `sliders
    | [@bs.as "smartphone"] `smartphone
    | [@bs.as "speaker"] `speaker
    | [@bs.as "square"] `square
    | [@bs.as "star"] `star
    | [@bs.as "stop-circle"] `stopCircle
    | [@bs.as "sun"] `sun
    | [@bs.as "sunrise"] `sunrise
    | [@bs.as "sunset"] `sunset
    | [@bs.as "tablet"] `tablet
    | [@bs.as "tag"] `tag
    | [@bs.as "target"] `target
    | [@bs.as "terminal"] `terminal
    | [@bs.as "thermometer"] `thermometer
    | [@bs.as "thumbs-down"] `thumbsDown
    | [@bs.as "thumbs-up"] `thumbsUp
    | [@bs.as "toggle-left"] `toggleLeft
    | [@bs.as "toggle-right"] `toggleRight
    | [@bs.as "trash"] `trash
    | [@bs.as "trash-2"] `trash2
    | [@bs.as "trending-down"] `trendingDown
    | [@bs.as "trending-up"] `trendingUp
    | [@bs.as "triangle"] `triangle
    | [@bs.as "truck"] `truck
    | [@bs.as "tv"] `tv
    | [@bs.as "twitter"] `twitter
    | [@bs.as "type"] `type_
    | [@bs.as "umbrella"] `umbrella
    | [@bs.as "underline"] `underline
    | [@bs.as "unlock"] `unlock
    | [@bs.as "upload"] `upload
    | [@bs.as "upload-cloud"] `uploadCloud
    | [@bs.as "user"] `user
    | [@bs.as "user-check"] `userCheck
    | [@bs.as "user-minus"] `userMinus
    | [@bs.as "user-plus"] `userPlus
    | [@bs.as "user-x"] `userX
    | [@bs.as "users"] `users
    | [@bs.as "video"] `video
    | [@bs.as "video-off"] `videoOff
    | [@bs.as "voicemail"] `voicemail
    | [@bs.as "volume"] `volume
    | [@bs.as "volume-1"] `volume1
    | [@bs.as "volume-2"] `volume2
    | [@bs.as "volume-x"] `volumeX
    | [@bs.as "watch"] `watch
    | [@bs.as "wifi"] `wifi
    | [@bs.as "wifi-off"] `wifiOff
    | [@bs.as "wind"] `wind
    | [@bs.as "x"] `x
    | [@bs.as "x-circle"] `xCircle
    | [@bs.as "x-square"] `xSquare
    | [@bs.as "youtube"] `youtube
    | [@bs.as "zap"] `zap
    | [@bs.as "zap-off"] `zapOff
    | [@bs.as "zoom-in"] `zoomIn
    | [@bs.as "zoom-out"] `zoomOut
  ]
  let nameToJs = nameToJs;

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    allowFontScaling: bool,
    [@bs.optional]
    name: string,
    [@bs.optional]
    size: int,
    [@bs.optional]
    color: string,
    [@bs.optional]
    style: BsReactNative.Style.t,
  };

}

let make =
  (
    ~allowFontScaling=false,
    ~name=`activity,
    ~color="black",
    ~size=12,
    ~style=BsReactNative.Style.style([]),
    children,
  ) =>
ReasonReact.wrapJsForReason(
  ~reactClass=Feather.js,
  ~props=
    Feather.props(
      ~allowFontScaling,
      ~name=Feather.nameToJs(name),
      ~size,
      ~color,
      ~style,
      (),
    ),
  children,
);