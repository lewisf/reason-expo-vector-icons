module Foundation = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "Foundation";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "address-book"] `addressBook
    | [@bs.as "alert"] `alert
    | [@bs.as "align-center"] `alignCenter
    | [@bs.as "align-justify"] `alignJustify
    | [@bs.as "align-left"] `alignLeft
    | [@bs.as "align-right"] `alignRight
    | [@bs.as "anchor"] `anchor
    | [@bs.as "annotate"] `annotate
    | [@bs.as "archive"] `archive
    | [@bs.as "arrow-down"] `arrowDown
    | [@bs.as "arrow-left"] `arrowLeft
    | [@bs.as "arrow-right"] `arrowRight
    | [@bs.as "arrow-up"] `arrowUp
    | [@bs.as "arrows-compress"] `arrowsCompress
    | [@bs.as "arrows-expand"] `arrowsExpand
    | [@bs.as "arrows-in"] `arrowsIn
    | [@bs.as "arrows-out"] `arrowsOut
    | [@bs.as "asl"] `asl
    | [@bs.as "asterisk"] `asterisk
    | [@bs.as "at-sign"] `atSign
    | [@bs.as "background-color"] `backgroundColor
    | [@bs.as "battery-empty"] `batteryEmpty
    | [@bs.as "battery-full"] `batteryFull
    | [@bs.as "battery-half"] `batteryHalf
    | [@bs.as "bitcoin-circle"] `bitcoinCircle
    | [@bs.as "bitcoin"] `bitcoin
    | [@bs.as "blind"] `blind
    | [@bs.as "bluetooth"] `bluetooth
    | [@bs.as "bold"] `bold
    | [@bs.as "book-bookmark"] `bookBookmark
    | [@bs.as "book"] `book
    | [@bs.as "bookmark"] `bookmark
    | [@bs.as "braille"] `braille
    | [@bs.as "burst-new"] `burstNew
    | [@bs.as "burst-sale"] `burstSale
    | [@bs.as "burst"] `burst
    | [@bs.as "calendar"] `calendar
    | [@bs.as "camera"] `camera
    | [@bs.as "check"] `check
    | [@bs.as "checkbox"] `checkbox
    | [@bs.as "clipboard-notes"] `clipboardNotes
    | [@bs.as "clipboard-pencil"] `clipboardPencil
    | [@bs.as "clipboard"] `clipboard
    | [@bs.as "clock"] `clock
    | [@bs.as "closed-caption"] `closedCaption
    | [@bs.as "cloud"] `cloud
    | [@bs.as "comment-minus"] `commentMinus
    | [@bs.as "comment-quotes"] `commentQuotes
    | [@bs.as "comment-video"] `commentVideo
    | [@bs.as "comment"] `comment
    | [@bs.as "comments"] `comments
    | [@bs.as "compass"] `compass
    | [@bs.as "contrast"] `contrast
    | [@bs.as "credit-card"] `creditCard
    | [@bs.as "crop"] `crop
    | [@bs.as "crown"] `crown
    | [@bs.as "css3"] `css3
    | [@bs.as "database"] `database
    | [@bs.as "die-five"] `dieFive
    | [@bs.as "die-four"] `dieFour
    | [@bs.as "die-one"] `dieOne
    | [@bs.as "die-six"] `dieSix
    | [@bs.as "die-three"] `dieThree
    | [@bs.as "die-two"] `dieTwo
    | [@bs.as "dislike"] `dislike
    | [@bs.as "dollar-bill"] `dollarBill
    | [@bs.as "dollar"] `dollar
    | [@bs.as "download"] `download
    | [@bs.as "eject"] `eject
    | [@bs.as "elevator"] `elevator
    | [@bs.as "euro"] `euro
    | [@bs.as "eye"] `eye
    | [@bs.as "fast-forward"] `fastForward
    | [@bs.as "female-symbol"] `femaleSymbol
    | [@bs.as "female"] `female
    | [@bs.as "filter"] `filter
    | [@bs.as "first-aid"] `firstAid
    | [@bs.as "flag"] `flag
    | [@bs.as "folder-add"] `folderAdd
    | [@bs.as "folder-lock"] `folderLock
    | [@bs.as "folder"] `folder
    | [@bs.as "foot"] `foot
    | [@bs.as "foundation"] `foundation
    | [@bs.as "graph-bar"] `graphBar
    | [@bs.as "graph-horizontal"] `graphHorizontal
    | [@bs.as "graph-pie"] `graphPie
    | [@bs.as "graph-trend"] `graphTrend
    | [@bs.as "guide-dog"] `guideDog
    | [@bs.as "hearing-aid"] `hearingAid
    | [@bs.as "heart"] `heart
    | [@bs.as "home"] `home
    | [@bs.as "html5"] `html5
    | [@bs.as "indent-less"] `indentLess
    | [@bs.as "indent-more"] `indentMore
    | [@bs.as "info"] `info
    | [@bs.as "italic"] `italic
    | [@bs.as "key"] `key
    | [@bs.as "laptop"] `laptop
    | [@bs.as "layout"] `layout
    | [@bs.as "lightbulb"] `lightbulb
    | [@bs.as "like"] `like
    | [@bs.as "link"] `link
    | [@bs.as "list-bullet"] `listBullet
    | [@bs.as "list-number"] `listNumber
    | [@bs.as "list-thumbnails"] `listThumbnails
    | [@bs.as "list"] `list
    | [@bs.as "lock"] `lock
    | [@bs.as "loop"] `loop
    | [@bs.as "magnifying-glass"] `magnifyingGlass
    | [@bs.as "mail"] `mail
    | [@bs.as "male-female"] `maleFemale
    | [@bs.as "male-symbol"] `maleSymbol
    | [@bs.as "male"] `male
    | [@bs.as "map"] `map
    | [@bs.as "marker"] `marker
    | [@bs.as "megaphone"] `megaphone
    | [@bs.as "microphone"] `microphone
    | [@bs.as "minus-circle"] `minusCircle
    | [@bs.as "minus"] `minus
    | [@bs.as "mobile-signal"] `mobileSignal
    | [@bs.as "mobile"] `mobile
    | [@bs.as "monitor"] `monitor
    | [@bs.as "mountains"] `mountains
    | [@bs.as "music"] `music
    | [@bs.as "next"] `next
    | [@bs.as "no-dogs"] `noDogs
    | [@bs.as "no-smoking"] `noSmoking
    | [@bs.as "page-add"] `pageAdd
    | [@bs.as "page-copy"] `pageCopy
    | [@bs.as "page-csv"] `pageCsv
    | [@bs.as "page-delete"] `pageDelete
    | [@bs.as "page-doc"] `pageDoc
    | [@bs.as "page-edit"] `pageEdit
    | [@bs.as "page-export-csv"] `pageExportCsv
    | [@bs.as "page-export-doc"] `pageExportDoc
    | [@bs.as "page-export-pdf"] `pageExportPdf
    | [@bs.as "page-export"] `pageExport
    | [@bs.as "page-filled"] `pageFilled
    | [@bs.as "page-multiple"] `pageMultiple
    | [@bs.as "page-pdf"] `pagePdf
    | [@bs.as "page-remove"] `pageRemove
    | [@bs.as "page-search"] `pageSearch
    | [@bs.as "page"] `page
    | [@bs.as "paint-bucket"] `paintBucket
    | [@bs.as "paperclip"] `paperclip
    | [@bs.as "pause"] `pause
    | [@bs.as "paw"] `paw
    | [@bs.as "paypal"] `paypal
    | [@bs.as "pencil"] `pencil
    | [@bs.as "photo"] `photo
    | [@bs.as "play-circle"] `playCircle
    | [@bs.as "play-video"] `playVideo
    | [@bs.as "play"] `play
    | [@bs.as "plus"] `plus
    | [@bs.as "pound"] `pound
    | [@bs.as "power"] `power
    | [@bs.as "previous"] `previous
    | [@bs.as "price-tag"] `priceTag
    | [@bs.as "pricetag-multiple"] `pricetagMultiple
    | [@bs.as "print"] `print
    | [@bs.as "prohibited"] `prohibited
    | [@bs.as "projection-screen"] `projectionScreen
    | [@bs.as "puzzle"] `puzzle
    | [@bs.as "quote"] `quote
    | [@bs.as "record"] `record
    | [@bs.as "refresh"] `refresh
    | [@bs.as "results-demographics"] `resultsDemographics
    | [@bs.as "results"] `results
    | [@bs.as "rewind-ten"] `rewindTen
    | [@bs.as "rewind"] `rewind
    | [@bs.as "rss"] `rss
    | [@bs.as "safety-cone"] `safetyCone
    | [@bs.as "save"] `save
    | [@bs.as "share"] `share
    | [@bs.as "sheriff-badge"] `sheriffBadge
    | [@bs.as "shield"] `shield
    | [@bs.as "shopping-bag"] `shoppingBag
    | [@bs.as "shopping-cart"] `shoppingCart
    | [@bs.as "shuffle"] `shuffle
    | [@bs.as "skull"] `skull
    | [@bs.as "social-500px"] `social500Px
    | [@bs.as "social-adobe"] `socialAdobe
    | [@bs.as "social-amazon"] `socialAmazon
    | [@bs.as "social-android"] `socialAndroid
    | [@bs.as "social-apple"] `socialApple
    | [@bs.as "social-behance"] `socialBehance
    | [@bs.as "social-bing"] `socialBing
    | [@bs.as "social-blogger"] `socialBlogger
    | [@bs.as "social-delicious"] `socialDelicious
    | [@bs.as "social-designer-news"] `socialDesignerNews
    | [@bs.as "social-deviant-art"] `socialDeviantArt
    | [@bs.as "social-digg"] `socialDigg
    | [@bs.as "social-dribbble"] `socialDribbble
    | [@bs.as "social-drive"] `socialDrive
    | [@bs.as "social-dropbox"] `socialDropbox
    | [@bs.as "social-evernote"] `socialEvernote
    | [@bs.as "social-facebook"] `socialFacebook
    | [@bs.as "social-flickr"] `socialFlickr
    | [@bs.as "social-forrst"] `socialForrst
    | [@bs.as "social-foursquare"] `socialFoursquare
    | [@bs.as "social-game-center"] `socialGameCenter
    | [@bs.as "social-github"] `socialGithub
    | [@bs.as "social-google-plus"] `socialGooglePlus
    | [@bs.as "social-hacker-news"] `socialHackerNews
    | [@bs.as "social-hi5"] `socialHi5
    | [@bs.as "social-instagram"] `socialInstagram
    | [@bs.as "social-joomla"] `socialJoomla
    | [@bs.as "social-lastfm"] `socialLastfm
    | [@bs.as "social-linkedin"] `socialLinkedin
    | [@bs.as "social-medium"] `socialMedium
    | [@bs.as "social-myspace"] `socialMyspace
    | [@bs.as "social-orkut"] `socialOrkut
    | [@bs.as "social-path"] `socialPath
    | [@bs.as "social-picasa"] `socialPicasa
    | [@bs.as "social-pinterest"] `socialPinterest
    | [@bs.as "social-rdio"] `socialRdio
    | [@bs.as "social-reddit"] `socialReddit
    | [@bs.as "social-skillshare"] `socialSkillshare
    | [@bs.as "social-skype"] `socialSkype
    | [@bs.as "social-smashing-mag"] `socialSmashingMag
    | [@bs.as "social-snapchat"] `socialSnapchat
    | [@bs.as "social-spotify"] `socialSpotify
    | [@bs.as "social-squidoo"] `socialSquidoo
    | [@bs.as "social-stack-overflow"] `socialStackOverflow
    | [@bs.as "social-steam"] `socialSteam
    | [@bs.as "social-stumbleupon"] `socialStumbleupon
    | [@bs.as "social-treehouse"] `socialTreehouse
    | [@bs.as "social-tumblr"] `socialTumblr
    | [@bs.as "social-twitter"] `socialTwitter
    | [@bs.as "social-vimeo"] `socialVimeo
    | [@bs.as "social-windows"] `socialWindows
    | [@bs.as "social-xbox"] `socialXbox
    | [@bs.as "social-yahoo"] `socialYahoo
    | [@bs.as "social-yelp"] `socialYelp
    | [@bs.as "social-youtube"] `socialYoutube
    | [@bs.as "social-zerply"] `socialZerply
    | [@bs.as "social-zurb"] `socialZurb
    | [@bs.as "sound"] `sound
    | [@bs.as "star"] `star
    | [@bs.as "stop"] `stop
    | [@bs.as "strikethrough"] `strikethrough
    | [@bs.as "subscript"] `subscript
    | [@bs.as "superscript"] `superscript
    | [@bs.as "tablet-landscape"] `tabletLandscape
    | [@bs.as "tablet-portrait"] `tabletPortrait
    | [@bs.as "target-two"] `targetTwo
    | [@bs.as "target"] `target
    | [@bs.as "telephone-accessible"] `telephoneAccessible
    | [@bs.as "telephone"] `telephone
    | [@bs.as "text-color"] `textColor
    | [@bs.as "thumbnails"] `thumbnails
    | [@bs.as "ticket"] `ticket
    | [@bs.as "torso-business"] `torsoBusiness
    | [@bs.as "torso-female"] `torsoFemale
    | [@bs.as "torso"] `torso
    | [@bs.as "torsos-all-female"] `torsosAllFemale
    | [@bs.as "torsos-all"] `torsosAll
    | [@bs.as "torsos-female-male"] `torsosFemaleMale
    | [@bs.as "torsos-male-female"] `torsosMaleFemale
    | [@bs.as "torsos"] `torsos
    | [@bs.as "trash"] `trash
    | [@bs.as "trees"] `trees
    | [@bs.as "trophy"] `trophy
    | [@bs.as "underline"] `underline
    | [@bs.as "universal-access"] `universalAccess
    | [@bs.as "unlink"] `unlink
    | [@bs.as "unlock"] `unlock
    | [@bs.as "upload-cloud"] `uploadCloud
    | [@bs.as "upload"] `upload
    | [@bs.as "usb"] `usb
    | [@bs.as "video"] `video
    | [@bs.as "volume-none"] `volumeNone
    | [@bs.as "volume-strike"] `volumeStrike
    | [@bs.as "volume"] `volume
    | [@bs.as "web"] `web
    | [@bs.as "wheelchair"] `wheelchair
    | [@bs.as "widget"] `widget
    | [@bs.as "wrench"] `wrench
    | [@bs.as "x-circle"] `xCircle
    | [@bs.as "x"] `x
    | [@bs.as "yen"] `yen
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
    ~name=`addressBook,
    ~color="black",
    ~size=12,
    ~style=BsReactNative.Style.style([]),
    children,
  ) =>
ReasonReact.wrapJsForReason(
  ~reactClass=Foundation.js,
  ~props=
    Foundation.props(
      ~allowFontScaling,
      ~name=Foundation.nameToJs(name),
      ~size,
      ~color,
      ~style,
      (),
    ),
  children,
);