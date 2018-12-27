module Ionicons = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "Ionicons";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "ios-add"] `iosAdd
    | [@bs.as "ios-add-circle"] `iosAddCircle
    | [@bs.as "ios-add-circle-outline"] `iosAddCircleOutline
    | [@bs.as "ios-airplane"] `iosAirplane
    | [@bs.as "ios-alarm"] `iosAlarm
    | [@bs.as "ios-albums"] `iosAlbums
    | [@bs.as "ios-alert"] `iosAlert
    | [@bs.as "ios-american-football"] `iosAmericanFootball
    | [@bs.as "ios-analytics"] `iosAnalytics
    | [@bs.as "ios-aperture"] `iosAperture
    | [@bs.as "ios-apps"] `iosApps
    | [@bs.as "ios-appstore"] `iosAppstore
    | [@bs.as "ios-archive"] `iosArchive
    | [@bs.as "ios-arrow-back"] `iosArrowBack
    | [@bs.as "ios-arrow-down"] `iosArrowDown
    | [@bs.as "ios-arrow-dropdown"] `iosArrowDropdown
    | [@bs.as "ios-arrow-dropdown-circle"] `iosArrowDropdownCircle
    | [@bs.as "ios-arrow-dropleft"] `iosArrowDropleft
    | [@bs.as "ios-arrow-dropleft-circle"] `iosArrowDropleftCircle
    | [@bs.as "ios-arrow-dropright"] `iosArrowDropright
    | [@bs.as "ios-arrow-dropright-circle"] `iosArrowDroprightCircle
    | [@bs.as "ios-arrow-dropup"] `iosArrowDropup
    | [@bs.as "ios-arrow-dropup-circle"] `iosArrowDropupCircle
    | [@bs.as "ios-arrow-forward"] `iosArrowForward
    | [@bs.as "ios-arrow-round-back"] `iosArrowRoundBack
    | [@bs.as "ios-arrow-round-down"] `iosArrowRoundDown
    | [@bs.as "ios-arrow-round-forward"] `iosArrowRoundForward
    | [@bs.as "ios-arrow-round-up"] `iosArrowRoundUp
    | [@bs.as "ios-arrow-up"] `iosArrowUp
    | [@bs.as "ios-at"] `iosAt
    | [@bs.as "ios-attach"] `iosAttach
    | [@bs.as "ios-backspace"] `iosBackspace
    | [@bs.as "ios-barcode"] `iosBarcode
    | [@bs.as "ios-baseball"] `iosBaseball
    | [@bs.as "ios-basket"] `iosBasket
    | [@bs.as "ios-basketball"] `iosBasketball
    | [@bs.as "ios-battery-charging"] `iosBatteryCharging
    | [@bs.as "ios-battery-dead"] `iosBatteryDead
    | [@bs.as "ios-battery-full"] `iosBatteryFull
    | [@bs.as "ios-beaker"] `iosBeaker
    | [@bs.as "ios-bed"] `iosBed
    | [@bs.as "ios-beer"] `iosBeer
    | [@bs.as "ios-bicycle"] `iosBicycle
    | [@bs.as "ios-bluetooth"] `iosBluetooth
    | [@bs.as "ios-boat"] `iosBoat
    | [@bs.as "ios-body"] `iosBody
    | [@bs.as "ios-bonfire"] `iosBonfire
    | [@bs.as "ios-book"] `iosBook
    | [@bs.as "ios-bookmark"] `iosBookmark
    | [@bs.as "ios-bookmarks"] `iosBookmarks
    | [@bs.as "ios-bowtie"] `iosBowtie
    | [@bs.as "ios-briefcase"] `iosBriefcase
    | [@bs.as "ios-browsers"] `iosBrowsers
    | [@bs.as "ios-brush"] `iosBrush
    | [@bs.as "ios-bug"] `iosBug
    | [@bs.as "ios-build"] `iosBuild
    | [@bs.as "ios-bulb"] `iosBulb
    | [@bs.as "ios-bus"] `iosBus
    | [@bs.as "ios-business"] `iosBusiness
    | [@bs.as "ios-cafe"] `iosCafe
    | [@bs.as "ios-calculator"] `iosCalculator
    | [@bs.as "ios-calendar"] `iosCalendar
    | [@bs.as "ios-call"] `iosCall
    | [@bs.as "ios-camera"] `iosCamera
    | [@bs.as "ios-car"] `iosCar
    | [@bs.as "ios-card"] `iosCard
    | [@bs.as "ios-cart"] `iosCart
    | [@bs.as "ios-cash"] `iosCash
    | [@bs.as "ios-cellular"] `iosCellular
    | [@bs.as "ios-chatboxes"] `iosChatboxes
    | [@bs.as "ios-chatbubbles"] `iosChatbubbles
    | [@bs.as "ios-checkbox"] `iosCheckbox
    | [@bs.as "ios-checkbox-outline"] `iosCheckboxOutline
    | [@bs.as "ios-checkmark"] `iosCheckmark
    | [@bs.as "ios-checkmark-circle"] `iosCheckmarkCircle
    | [@bs.as "ios-checkmark-circle-outline"] `iosCheckmarkCircleOutline
    | [@bs.as "ios-clipboard"] `iosClipboard
    | [@bs.as "ios-clock"] `iosClock
    | [@bs.as "ios-close"] `iosClose
    | [@bs.as "ios-close-circle"] `iosCloseCircle
    | [@bs.as "ios-close-circle-outline"] `iosCloseCircleOutline
    | [@bs.as "ios-cloud"] `iosCloud
    | [@bs.as "ios-cloud-circle"] `iosCloudCircle
    | [@bs.as "ios-cloud-done"] `iosCloudDone
    | [@bs.as "ios-cloud-download"] `iosCloudDownload
    | [@bs.as "ios-cloud-outline"] `iosCloudOutline
    | [@bs.as "ios-cloud-upload"] `iosCloudUpload
    | [@bs.as "ios-cloudy"] `iosCloudy
    | [@bs.as "ios-cloudy-night"] `iosCloudyNight
    | [@bs.as "ios-code"] `iosCode
    | [@bs.as "ios-code-download"] `iosCodeDownload
    | [@bs.as "ios-code-working"] `iosCodeWorking
    | [@bs.as "ios-cog"] `iosCog
    | [@bs.as "ios-color-fill"] `iosColorFill
    | [@bs.as "ios-color-filter"] `iosColorFilter
    | [@bs.as "ios-color-palette"] `iosColorPalette
    | [@bs.as "ios-color-wand"] `iosColorWand
    | [@bs.as "ios-compass"] `iosCompass
    | [@bs.as "ios-construct"] `iosConstruct
    | [@bs.as "ios-contact"] `iosContact
    | [@bs.as "ios-contacts"] `iosContacts
    | [@bs.as "ios-contract"] `iosContract
    | [@bs.as "ios-contrast"] `iosContrast
    | [@bs.as "ios-copy"] `iosCopy
    | [@bs.as "ios-create"] `iosCreate
    | [@bs.as "ios-crop"] `iosCrop
    | [@bs.as "ios-cube"] `iosCube
    | [@bs.as "ios-cut"] `iosCut
    | [@bs.as "ios-desktop"] `iosDesktop
    | [@bs.as "ios-disc"] `iosDisc
    | [@bs.as "ios-document"] `iosDocument
    | [@bs.as "ios-done-all"] `iosDoneAll
    | [@bs.as "ios-download"] `iosDownload
    | [@bs.as "ios-easel"] `iosEasel
    | [@bs.as "ios-egg"] `iosEgg
    | [@bs.as "ios-exit"] `iosExit
    | [@bs.as "ios-expand"] `iosExpand
    | [@bs.as "ios-eye"] `iosEye
    | [@bs.as "ios-eye-off"] `iosEyeOff
    | [@bs.as "ios-fastforward"] `iosFastforward
    | [@bs.as "ios-female"] `iosFemale
    | [@bs.as "ios-filing"] `iosFiling
    | [@bs.as "ios-film"] `iosFilm
    | [@bs.as "ios-finger-print"] `iosFingerPrint
    | [@bs.as "ios-fitness"] `iosFitness
    | [@bs.as "ios-flag"] `iosFlag
    | [@bs.as "ios-flame"] `iosFlame
    | [@bs.as "ios-flash"] `iosFlash
    | [@bs.as "ios-flash-off"] `iosFlashOff
    | [@bs.as "ios-flashlight"] `iosFlashlight
    | [@bs.as "ios-flask"] `iosFlask
    | [@bs.as "ios-flower"] `iosFlower
    | [@bs.as "ios-folder"] `iosFolder
    | [@bs.as "ios-folder-open"] `iosFolderOpen
    | [@bs.as "ios-football"] `iosFootball
    | [@bs.as "ios-funnel"] `iosFunnel
    | [@bs.as "ios-gift"] `iosGift
    | [@bs.as "ios-git-branch"] `iosGitBranch
    | [@bs.as "ios-git-commit"] `iosGitCommit
    | [@bs.as "ios-git-compare"] `iosGitCompare
    | [@bs.as "ios-git-merge"] `iosGitMerge
    | [@bs.as "ios-git-network"] `iosGitNetwork
    | [@bs.as "ios-git-pull-request"] `iosGitPullRequest
    | [@bs.as "ios-glasses"] `iosGlasses
    | [@bs.as "ios-globe"] `iosGlobe
    | [@bs.as "ios-grid"] `iosGrid
    | [@bs.as "ios-hammer"] `iosHammer
    | [@bs.as "ios-hand"] `iosHand
    | [@bs.as "ios-happy"] `iosHappy
    | [@bs.as "ios-headset"] `iosHeadset
    | [@bs.as "ios-heart"] `iosHeart
    | [@bs.as "ios-heart-dislike"] `iosHeartDislike
    | [@bs.as "ios-heart-empty"] `iosHeartEmpty
    | [@bs.as "ios-heart-half"] `iosHeartHalf
    | [@bs.as "ios-help"] `iosHelp
    | [@bs.as "ios-help-buoy"] `iosHelpBuoy
    | [@bs.as "ios-help-circle"] `iosHelpCircle
    | [@bs.as "ios-help-circle-outline"] `iosHelpCircleOutline
    | [@bs.as "ios-home"] `iosHome
    | [@bs.as "ios-hourglass"] `iosHourglass
    | [@bs.as "ios-ice-cream"] `iosIceCream
    | [@bs.as "ios-image"] `iosImage
    | [@bs.as "ios-images"] `iosImages
    | [@bs.as "ios-infinite"] `iosInfinite
    | [@bs.as "ios-information"] `iosInformation
    | [@bs.as "ios-information-circle"] `iosInformationCircle
    | [@bs.as "ios-information-circle-outline"] `iosInformationCircleOutline
    | [@bs.as "ios-jet"] `iosJet
    | [@bs.as "ios-journal"] `iosJournal
    | [@bs.as "ios-key"] `iosKey
    | [@bs.as "ios-keypad"] `iosKeypad
    | [@bs.as "ios-laptop"] `iosLaptop
    | [@bs.as "ios-leaf"] `iosLeaf
    | [@bs.as "ios-link"] `iosLink
    | [@bs.as "ios-list"] `iosList
    | [@bs.as "ios-list-box"] `iosListBox
    | [@bs.as "ios-locate"] `iosLocate
    | [@bs.as "ios-lock"] `iosLock
    | [@bs.as "ios-log-in"] `iosLogIn
    | [@bs.as "ios-log-out"] `iosLogOut
    | [@bs.as "ios-magnet"] `iosMagnet
    | [@bs.as "ios-mail"] `iosMail
    | [@bs.as "ios-mail-open"] `iosMailOpen
    | [@bs.as "ios-mail-unread"] `iosMailUnread
    | [@bs.as "ios-male"] `iosMale
    | [@bs.as "ios-man"] `iosMan
    | [@bs.as "ios-map"] `iosMap
    | [@bs.as "ios-medal"] `iosMedal
    | [@bs.as "ios-medical"] `iosMedical
    | [@bs.as "ios-medkit"] `iosMedkit
    | [@bs.as "ios-megaphone"] `iosMegaphone
    | [@bs.as "ios-menu"] `iosMenu
    | [@bs.as "ios-mic"] `iosMic
    | [@bs.as "ios-mic-off"] `iosMicOff
    | [@bs.as "ios-microphone"] `iosMicrophone
    | [@bs.as "ios-moon"] `iosMoon
    | [@bs.as "ios-more"] `iosMore
    | [@bs.as "ios-move"] `iosMove
    | [@bs.as "ios-musical-note"] `iosMusicalNote
    | [@bs.as "ios-musical-notes"] `iosMusicalNotes
    | [@bs.as "ios-navigate"] `iosNavigate
    | [@bs.as "ios-notifications"] `iosNotifications
    | [@bs.as "ios-notifications-off"] `iosNotificationsOff
    | [@bs.as "ios-notifications-outline"] `iosNotificationsOutline
    | [@bs.as "ios-nuclear"] `iosNuclear
    | [@bs.as "ios-nutrition"] `iosNutrition
    | [@bs.as "ios-open"] `iosOpen
    | [@bs.as "ios-options"] `iosOptions
    | [@bs.as "ios-outlet"] `iosOutlet
    | [@bs.as "ios-paper"] `iosPaper
    | [@bs.as "ios-paper-plane"] `iosPaperPlane
    | [@bs.as "ios-partly-sunny"] `iosPartlySunny
    | [@bs.as "ios-pause"] `iosPause
    | [@bs.as "ios-paw"] `iosPaw
    | [@bs.as "ios-people"] `iosPeople
    | [@bs.as "ios-person"] `iosPerson
    | [@bs.as "ios-person-add"] `iosPersonAdd
    | [@bs.as "ios-phone-landscape"] `iosPhoneLandscape
    | [@bs.as "ios-phone-portrait"] `iosPhonePortrait
    | [@bs.as "ios-photos"] `iosPhotos
    | [@bs.as "ios-pie"] `iosPie
    | [@bs.as "ios-pin"] `iosPin
    | [@bs.as "ios-pint"] `iosPint
    | [@bs.as "ios-pizza"] `iosPizza
    | [@bs.as "ios-planet"] `iosPlanet
    | [@bs.as "ios-play"] `iosPlay
    | [@bs.as "ios-play-circle"] `iosPlayCircle
    | [@bs.as "ios-podium"] `iosPodium
    | [@bs.as "ios-power"] `iosPower
    | [@bs.as "ios-pricetag"] `iosPricetag
    | [@bs.as "ios-pricetags"] `iosPricetags
    | [@bs.as "ios-print"] `iosPrint
    | [@bs.as "ios-pulse"] `iosPulse
    | [@bs.as "ios-qr-scanner"] `iosQrScanner
    | [@bs.as "ios-quote"] `iosQuote
    | [@bs.as "ios-radio"] `iosRadio
    | [@bs.as "ios-radio-button-off"] `iosRadioButtonOff
    | [@bs.as "ios-radio-button-on"] `iosRadioButtonOn
    | [@bs.as "ios-rainy"] `iosRainy
    | [@bs.as "ios-recording"] `iosRecording
    | [@bs.as "ios-redo"] `iosRedo
    | [@bs.as "ios-refresh"] `iosRefresh
    | [@bs.as "ios-refresh-circle"] `iosRefreshCircle
    | [@bs.as "ios-remove"] `iosRemove
    | [@bs.as "ios-remove-circle"] `iosRemoveCircle
    | [@bs.as "ios-remove-circle-outline"] `iosRemoveCircleOutline
    | [@bs.as "ios-reorder"] `iosReorder
    | [@bs.as "ios-repeat"] `iosRepeat
    | [@bs.as "ios-resize"] `iosResize
    | [@bs.as "ios-restaurant"] `iosRestaurant
    | [@bs.as "ios-return-left"] `iosReturnLeft
    | [@bs.as "ios-return-right"] `iosReturnRight
    | [@bs.as "ios-reverse-camera"] `iosReverseCamera
    | [@bs.as "ios-rewind"] `iosRewind
    | [@bs.as "ios-ribbon"] `iosRibbon
    | [@bs.as "ios-rocket"] `iosRocket
    | [@bs.as "ios-rose"] `iosRose
    | [@bs.as "ios-sad"] `iosSad
    | [@bs.as "ios-save"] `iosSave
    | [@bs.as "ios-school"] `iosSchool
    | [@bs.as "ios-search"] `iosSearch
    | [@bs.as "ios-send"] `iosSend
    | [@bs.as "ios-settings"] `iosSettings
    | [@bs.as "ios-share"] `iosShare
    | [@bs.as "ios-share-alt"] `iosShareAlt
    | [@bs.as "ios-shirt"] `iosShirt
    | [@bs.as "ios-shuffle"] `iosShuffle
    | [@bs.as "ios-skip-backward"] `iosSkipBackward
    | [@bs.as "ios-skip-forward"] `iosSkipForward
    | [@bs.as "ios-snow"] `iosSnow
    | [@bs.as "ios-speedometer"] `iosSpeedometer
    | [@bs.as "ios-square"] `iosSquare
    | [@bs.as "ios-square-outline"] `iosSquareOutline
    | [@bs.as "ios-star"] `iosStar
    | [@bs.as "ios-star-half"] `iosStarHalf
    | [@bs.as "ios-star-outline"] `iosStarOutline
    | [@bs.as "ios-stats"] `iosStats
    | [@bs.as "ios-stopwatch"] `iosStopwatch
    | [@bs.as "ios-subway"] `iosSubway
    | [@bs.as "ios-sunny"] `iosSunny
    | [@bs.as "ios-swap"] `iosSwap
    | [@bs.as "ios-switch"] `iosSwitch
    | [@bs.as "ios-sync"] `iosSync
    | [@bs.as "ios-tablet-landscape"] `iosTabletLandscape
    | [@bs.as "ios-tablet-portrait"] `iosTabletPortrait
    | [@bs.as "ios-tennisball"] `iosTennisball
    | [@bs.as "ios-text"] `iosText
    | [@bs.as "ios-thermometer"] `iosThermometer
    | [@bs.as "ios-thumbs-down"] `iosThumbsDown
    | [@bs.as "ios-thumbs-up"] `iosThumbsUp
    | [@bs.as "ios-thunderstorm"] `iosThunderstorm
    | [@bs.as "ios-time"] `iosTime
    | [@bs.as "ios-timer"] `iosTimer
    | [@bs.as "ios-today"] `iosToday
    | [@bs.as "ios-train"] `iosTrain
    | [@bs.as "ios-transgender"] `iosTransgender
    | [@bs.as "ios-trash"] `iosTrash
    | [@bs.as "ios-trending-down"] `iosTrendingDown
    | [@bs.as "ios-trending-up"] `iosTrendingUp
    | [@bs.as "ios-trophy"] `iosTrophy
    | [@bs.as "ios-tv"] `iosTv
    | [@bs.as "ios-umbrella"] `iosUmbrella
    | [@bs.as "ios-undo"] `iosUndo
    | [@bs.as "ios-unlock"] `iosUnlock
    | [@bs.as "ios-videocam"] `iosVideocam
    | [@bs.as "ios-volume-high"] `iosVolumeHigh
    | [@bs.as "ios-volume-low"] `iosVolumeLow
    | [@bs.as "ios-volume-mute"] `iosVolumeMute
    | [@bs.as "ios-volume-off"] `iosVolumeOff
    | [@bs.as "ios-walk"] `iosWalk
    | [@bs.as "ios-wallet"] `iosWallet
    | [@bs.as "ios-warning"] `iosWarning
    | [@bs.as "ios-watch"] `iosWatch
    | [@bs.as "ios-water"] `iosWater
    | [@bs.as "ios-wifi"] `iosWifi
    | [@bs.as "ios-wine"] `iosWine
    | [@bs.as "ios-woman"] `iosWoman
    | [@bs.as "logo-android"] `logoAndroid
    | [@bs.as "logo-angular"] `logoAngular
    | [@bs.as "logo-apple"] `logoApple
    | [@bs.as "logo-bitbucket"] `logoBitbucket
    | [@bs.as "logo-bitcoin"] `logoBitcoin
    | [@bs.as "logo-buffer"] `logoBuffer
    | [@bs.as "logo-chrome"] `logoChrome
    | [@bs.as "logo-closed-captioning"] `logoClosedCaptioning
    | [@bs.as "logo-codepen"] `logoCodepen
    | [@bs.as "logo-css3"] `logoCss3
    | [@bs.as "logo-designernews"] `logoDesignernews
    | [@bs.as "logo-dribbble"] `logoDribbble
    | [@bs.as "logo-dropbox"] `logoDropbox
    | [@bs.as "logo-euro"] `logoEuro
    | [@bs.as "logo-facebook"] `logoFacebook
    | [@bs.as "logo-flickr"] `logoFlickr
    | [@bs.as "logo-foursquare"] `logoFoursquare
    | [@bs.as "logo-freebsd-devil"] `logoFreebsdDevil
    | [@bs.as "logo-game-controller-a"] `logoGameControllerA
    | [@bs.as "logo-game-controller-b"] `logoGameControllerB
    | [@bs.as "logo-github"] `logoGithub
    | [@bs.as "logo-google"] `logoGoogle
    | [@bs.as "logo-googleplus"] `logoGoogleplus
    | [@bs.as "logo-hackernews"] `logoHackernews
    | [@bs.as "logo-html5"] `logoHtml5
    | [@bs.as "logo-instagram"] `logoInstagram
    | [@bs.as "logo-ionic"] `logoIonic
    | [@bs.as "logo-ionitron"] `logoIonitron
    | [@bs.as "logo-javascript"] `logoJavascript
    | [@bs.as "logo-linkedin"] `logoLinkedin
    | [@bs.as "logo-markdown"] `logoMarkdown
    | [@bs.as "logo-model-s"] `logoModelS
    | [@bs.as "logo-no-smoking"] `logoNoSmoking
    | [@bs.as "logo-nodejs"] `logoNodejs
    | [@bs.as "logo-npm"] `logoNpm
    | [@bs.as "logo-octocat"] `logoOctocat
    | [@bs.as "logo-pinterest"] `logoPinterest
    | [@bs.as "logo-playstation"] `logoPlaystation
    | [@bs.as "logo-polymer"] `logoPolymer
    | [@bs.as "logo-python"] `logoPython
    | [@bs.as "logo-reddit"] `logoReddit
    | [@bs.as "logo-rss"] `logoRss
    | [@bs.as "logo-sass"] `logoSass
    | [@bs.as "logo-skype"] `logoSkype
    | [@bs.as "logo-slack"] `logoSlack
    | [@bs.as "logo-snapchat"] `logoSnapchat
    | [@bs.as "logo-steam"] `logoSteam
    | [@bs.as "logo-tumblr"] `logoTumblr
    | [@bs.as "logo-tux"] `logoTux
    | [@bs.as "logo-twitch"] `logoTwitch
    | [@bs.as "logo-twitter"] `logoTwitter
    | [@bs.as "logo-usd"] `logoUsd
    | [@bs.as "logo-vimeo"] `logoVimeo
    | [@bs.as "logo-vk"] `logoVk
    | [@bs.as "logo-whatsapp"] `logoWhatsapp
    | [@bs.as "logo-windows"] `logoWindows
    | [@bs.as "logo-wordpress"] `logoWordpress
    | [@bs.as "logo-xbox"] `logoXbox
    | [@bs.as "logo-xing"] `logoXing
    | [@bs.as "logo-yahoo"] `logoYahoo
    | [@bs.as "logo-yen"] `logoYen
    | [@bs.as "logo-youtube"] `logoYoutube
    | [@bs.as "md-add"] `mdAdd
    | [@bs.as "md-add-circle"] `mdAddCircle
    | [@bs.as "md-add-circle-outline"] `mdAddCircleOutline
    | [@bs.as "md-airplane"] `mdAirplane
    | [@bs.as "md-alarm"] `mdAlarm
    | [@bs.as "md-albums"] `mdAlbums
    | [@bs.as "md-alert"] `mdAlert
    | [@bs.as "md-american-football"] `mdAmericanFootball
    | [@bs.as "md-analytics"] `mdAnalytics
    | [@bs.as "md-aperture"] `mdAperture
    | [@bs.as "md-apps"] `mdApps
    | [@bs.as "md-appstore"] `mdAppstore
    | [@bs.as "md-archive"] `mdArchive
    | [@bs.as "md-arrow-back"] `mdArrowBack
    | [@bs.as "md-arrow-down"] `mdArrowDown
    | [@bs.as "md-arrow-dropdown"] `mdArrowDropdown
    | [@bs.as "md-arrow-dropdown-circle"] `mdArrowDropdownCircle
    | [@bs.as "md-arrow-dropleft"] `mdArrowDropleft
    | [@bs.as "md-arrow-dropleft-circle"] `mdArrowDropleftCircle
    | [@bs.as "md-arrow-dropright"] `mdArrowDropright
    | [@bs.as "md-arrow-dropright-circle"] `mdArrowDroprightCircle
    | [@bs.as "md-arrow-dropup"] `mdArrowDropup
    | [@bs.as "md-arrow-dropup-circle"] `mdArrowDropupCircle
    | [@bs.as "md-arrow-forward"] `mdArrowForward
    | [@bs.as "md-arrow-round-back"] `mdArrowRoundBack
    | [@bs.as "md-arrow-round-down"] `mdArrowRoundDown
    | [@bs.as "md-arrow-round-forward"] `mdArrowRoundForward
    | [@bs.as "md-arrow-round-up"] `mdArrowRoundUp
    | [@bs.as "md-arrow-up"] `mdArrowUp
    | [@bs.as "md-at"] `mdAt
    | [@bs.as "md-attach"] `mdAttach
    | [@bs.as "md-backspace"] `mdBackspace
    | [@bs.as "md-barcode"] `mdBarcode
    | [@bs.as "md-baseball"] `mdBaseball
    | [@bs.as "md-basket"] `mdBasket
    | [@bs.as "md-basketball"] `mdBasketball
    | [@bs.as "md-battery-charging"] `mdBatteryCharging
    | [@bs.as "md-battery-dead"] `mdBatteryDead
    | [@bs.as "md-battery-full"] `mdBatteryFull
    | [@bs.as "md-beaker"] `mdBeaker
    | [@bs.as "md-bed"] `mdBed
    | [@bs.as "md-beer"] `mdBeer
    | [@bs.as "md-bicycle"] `mdBicycle
    | [@bs.as "md-bluetooth"] `mdBluetooth
    | [@bs.as "md-boat"] `mdBoat
    | [@bs.as "md-body"] `mdBody
    | [@bs.as "md-bonfire"] `mdBonfire
    | [@bs.as "md-book"] `mdBook
    | [@bs.as "md-bookmark"] `mdBookmark
    | [@bs.as "md-bookmarks"] `mdBookmarks
    | [@bs.as "md-bowtie"] `mdBowtie
    | [@bs.as "md-briefcase"] `mdBriefcase
    | [@bs.as "md-browsers"] `mdBrowsers
    | [@bs.as "md-brush"] `mdBrush
    | [@bs.as "md-bug"] `mdBug
    | [@bs.as "md-build"] `mdBuild
    | [@bs.as "md-bulb"] `mdBulb
    | [@bs.as "md-bus"] `mdBus
    | [@bs.as "md-business"] `mdBusiness
    | [@bs.as "md-cafe"] `mdCafe
    | [@bs.as "md-calculator"] `mdCalculator
    | [@bs.as "md-calendar"] `mdCalendar
    | [@bs.as "md-call"] `mdCall
    | [@bs.as "md-camera"] `mdCamera
    | [@bs.as "md-car"] `mdCar
    | [@bs.as "md-card"] `mdCard
    | [@bs.as "md-cart"] `mdCart
    | [@bs.as "md-cash"] `mdCash
    | [@bs.as "md-cellular"] `mdCellular
    | [@bs.as "md-chatboxes"] `mdChatboxes
    | [@bs.as "md-chatbubbles"] `mdChatbubbles
    | [@bs.as "md-checkbox"] `mdCheckbox
    | [@bs.as "md-checkbox-outline"] `mdCheckboxOutline
    | [@bs.as "md-checkmark"] `mdCheckmark
    | [@bs.as "md-checkmark-circle"] `mdCheckmarkCircle
    | [@bs.as "md-checkmark-circle-outline"] `mdCheckmarkCircleOutline
    | [@bs.as "md-clipboard"] `mdClipboard
    | [@bs.as "md-clock"] `mdClock
    | [@bs.as "md-close"] `mdClose
    | [@bs.as "md-close-circle"] `mdCloseCircle
    | [@bs.as "md-close-circle-outline"] `mdCloseCircleOutline
    | [@bs.as "md-cloud"] `mdCloud
    | [@bs.as "md-cloud-circle"] `mdCloudCircle
    | [@bs.as "md-cloud-done"] `mdCloudDone
    | [@bs.as "md-cloud-download"] `mdCloudDownload
    | [@bs.as "md-cloud-outline"] `mdCloudOutline
    | [@bs.as "md-cloud-upload"] `mdCloudUpload
    | [@bs.as "md-cloudy"] `mdCloudy
    | [@bs.as "md-cloudy-night"] `mdCloudyNight
    | [@bs.as "md-code"] `mdCode
    | [@bs.as "md-code-download"] `mdCodeDownload
    | [@bs.as "md-code-working"] `mdCodeWorking
    | [@bs.as "md-cog"] `mdCog
    | [@bs.as "md-color-fill"] `mdColorFill
    | [@bs.as "md-color-filter"] `mdColorFilter
    | [@bs.as "md-color-palette"] `mdColorPalette
    | [@bs.as "md-color-wand"] `mdColorWand
    | [@bs.as "md-compass"] `mdCompass
    | [@bs.as "md-construct"] `mdConstruct
    | [@bs.as "md-contact"] `mdContact
    | [@bs.as "md-contacts"] `mdContacts
    | [@bs.as "md-contract"] `mdContract
    | [@bs.as "md-contrast"] `mdContrast
    | [@bs.as "md-copy"] `mdCopy
    | [@bs.as "md-create"] `mdCreate
    | [@bs.as "md-crop"] `mdCrop
    | [@bs.as "md-cube"] `mdCube
    | [@bs.as "md-cut"] `mdCut
    | [@bs.as "md-desktop"] `mdDesktop
    | [@bs.as "md-disc"] `mdDisc
    | [@bs.as "md-document"] `mdDocument
    | [@bs.as "md-done-all"] `mdDoneAll
    | [@bs.as "md-download"] `mdDownload
    | [@bs.as "md-easel"] `mdEasel
    | [@bs.as "md-egg"] `mdEgg
    | [@bs.as "md-exit"] `mdExit
    | [@bs.as "md-expand"] `mdExpand
    | [@bs.as "md-eye"] `mdEye
    | [@bs.as "md-eye-off"] `mdEyeOff
    | [@bs.as "md-fastforward"] `mdFastforward
    | [@bs.as "md-female"] `mdFemale
    | [@bs.as "md-filing"] `mdFiling
    | [@bs.as "md-film"] `mdFilm
    | [@bs.as "md-finger-print"] `mdFingerPrint
    | [@bs.as "md-fitness"] `mdFitness
    | [@bs.as "md-flag"] `mdFlag
    | [@bs.as "md-flame"] `mdFlame
    | [@bs.as "md-flash"] `mdFlash
    | [@bs.as "md-flash-off"] `mdFlashOff
    | [@bs.as "md-flashlight"] `mdFlashlight
    | [@bs.as "md-flask"] `mdFlask
    | [@bs.as "md-flower"] `mdFlower
    | [@bs.as "md-folder"] `mdFolder
    | [@bs.as "md-folder-open"] `mdFolderOpen
    | [@bs.as "md-football"] `mdFootball
    | [@bs.as "md-funnel"] `mdFunnel
    | [@bs.as "md-gift"] `mdGift
    | [@bs.as "md-git-branch"] `mdGitBranch
    | [@bs.as "md-git-commit"] `mdGitCommit
    | [@bs.as "md-git-compare"] `mdGitCompare
    | [@bs.as "md-git-merge"] `mdGitMerge
    | [@bs.as "md-git-network"] `mdGitNetwork
    | [@bs.as "md-git-pull-request"] `mdGitPullRequest
    | [@bs.as "md-glasses"] `mdGlasses
    | [@bs.as "md-globe"] `mdGlobe
    | [@bs.as "md-grid"] `mdGrid
    | [@bs.as "md-hammer"] `mdHammer
    | [@bs.as "md-hand"] `mdHand
    | [@bs.as "md-happy"] `mdHappy
    | [@bs.as "md-headset"] `mdHeadset
    | [@bs.as "md-heart"] `mdHeart
    | [@bs.as "md-heart-dislike"] `mdHeartDislike
    | [@bs.as "md-heart-empty"] `mdHeartEmpty
    | [@bs.as "md-heart-half"] `mdHeartHalf
    | [@bs.as "md-help"] `mdHelp
    | [@bs.as "md-help-buoy"] `mdHelpBuoy
    | [@bs.as "md-help-circle"] `mdHelpCircle
    | [@bs.as "md-help-circle-outline"] `mdHelpCircleOutline
    | [@bs.as "md-home"] `mdHome
    | [@bs.as "md-hourglass"] `mdHourglass
    | [@bs.as "md-ice-cream"] `mdIceCream
    | [@bs.as "md-image"] `mdImage
    | [@bs.as "md-images"] `mdImages
    | [@bs.as "md-infinite"] `mdInfinite
    | [@bs.as "md-information"] `mdInformation
    | [@bs.as "md-information-circle"] `mdInformationCircle
    | [@bs.as "md-information-circle-outline"] `mdInformationCircleOutline
    | [@bs.as "md-jet"] `mdJet
    | [@bs.as "md-journal"] `mdJournal
    | [@bs.as "md-key"] `mdKey
    | [@bs.as "md-keypad"] `mdKeypad
    | [@bs.as "md-laptop"] `mdLaptop
    | [@bs.as "md-leaf"] `mdLeaf
    | [@bs.as "md-link"] `mdLink
    | [@bs.as "md-list"] `mdList
    | [@bs.as "md-list-box"] `mdListBox
    | [@bs.as "md-locate"] `mdLocate
    | [@bs.as "md-lock"] `mdLock
    | [@bs.as "md-log-in"] `mdLogIn
    | [@bs.as "md-log-out"] `mdLogOut
    | [@bs.as "md-magnet"] `mdMagnet
    | [@bs.as "md-mail"] `mdMail
    | [@bs.as "md-mail-open"] `mdMailOpen
    | [@bs.as "md-mail-unread"] `mdMailUnread
    | [@bs.as "md-male"] `mdMale
    | [@bs.as "md-man"] `mdMan
    | [@bs.as "md-map"] `mdMap
    | [@bs.as "md-medal"] `mdMedal
    | [@bs.as "md-medical"] `mdMedical
    | [@bs.as "md-medkit"] `mdMedkit
    | [@bs.as "md-megaphone"] `mdMegaphone
    | [@bs.as "md-menu"] `mdMenu
    | [@bs.as "md-mic"] `mdMic
    | [@bs.as "md-mic-off"] `mdMicOff
    | [@bs.as "md-microphone"] `mdMicrophone
    | [@bs.as "md-moon"] `mdMoon
    | [@bs.as "md-more"] `mdMore
    | [@bs.as "md-move"] `mdMove
    | [@bs.as "md-musical-note"] `mdMusicalNote
    | [@bs.as "md-musical-notes"] `mdMusicalNotes
    | [@bs.as "md-navigate"] `mdNavigate
    | [@bs.as "md-notifications"] `mdNotifications
    | [@bs.as "md-notifications-off"] `mdNotificationsOff
    | [@bs.as "md-notifications-outline"] `mdNotificationsOutline
    | [@bs.as "md-nuclear"] `mdNuclear
    | [@bs.as "md-nutrition"] `mdNutrition
    | [@bs.as "md-open"] `mdOpen
    | [@bs.as "md-options"] `mdOptions
    | [@bs.as "md-outlet"] `mdOutlet
    | [@bs.as "md-paper"] `mdPaper
    | [@bs.as "md-paper-plane"] `mdPaperPlane
    | [@bs.as "md-partly-sunny"] `mdPartlySunny
    | [@bs.as "md-pause"] `mdPause
    | [@bs.as "md-paw"] `mdPaw
    | [@bs.as "md-people"] `mdPeople
    | [@bs.as "md-person"] `mdPerson
    | [@bs.as "md-person-add"] `mdPersonAdd
    | [@bs.as "md-phone-landscape"] `mdPhoneLandscape
    | [@bs.as "md-phone-portrait"] `mdPhonePortrait
    | [@bs.as "md-photos"] `mdPhotos
    | [@bs.as "md-pie"] `mdPie
    | [@bs.as "md-pin"] `mdPin
    | [@bs.as "md-pint"] `mdPint
    | [@bs.as "md-pizza"] `mdPizza
    | [@bs.as "md-planet"] `mdPlanet
    | [@bs.as "md-play"] `mdPlay
    | [@bs.as "md-play-circle"] `mdPlayCircle
    | [@bs.as "md-podium"] `mdPodium
    | [@bs.as "md-power"] `mdPower
    | [@bs.as "md-pricetag"] `mdPricetag
    | [@bs.as "md-pricetags"] `mdPricetags
    | [@bs.as "md-print"] `mdPrint
    | [@bs.as "md-pulse"] `mdPulse
    | [@bs.as "md-qr-scanner"] `mdQrScanner
    | [@bs.as "md-quote"] `mdQuote
    | [@bs.as "md-radio"] `mdRadio
    | [@bs.as "md-radio-button-off"] `mdRadioButtonOff
    | [@bs.as "md-radio-button-on"] `mdRadioButtonOn
    | [@bs.as "md-rainy"] `mdRainy
    | [@bs.as "md-recording"] `mdRecording
    | [@bs.as "md-redo"] `mdRedo
    | [@bs.as "md-refresh"] `mdRefresh
    | [@bs.as "md-refresh-circle"] `mdRefreshCircle
    | [@bs.as "md-remove"] `mdRemove
    | [@bs.as "md-remove-circle"] `mdRemoveCircle
    | [@bs.as "md-remove-circle-outline"] `mdRemoveCircleOutline
    | [@bs.as "md-reorder"] `mdReorder
    | [@bs.as "md-repeat"] `mdRepeat
    | [@bs.as "md-resize"] `mdResize
    | [@bs.as "md-restaurant"] `mdRestaurant
    | [@bs.as "md-return-left"] `mdReturnLeft
    | [@bs.as "md-return-right"] `mdReturnRight
    | [@bs.as "md-reverse-camera"] `mdReverseCamera
    | [@bs.as "md-rewind"] `mdRewind
    | [@bs.as "md-ribbon"] `mdRibbon
    | [@bs.as "md-rocket"] `mdRocket
    | [@bs.as "md-rose"] `mdRose
    | [@bs.as "md-sad"] `mdSad
    | [@bs.as "md-save"] `mdSave
    | [@bs.as "md-school"] `mdSchool
    | [@bs.as "md-search"] `mdSearch
    | [@bs.as "md-send"] `mdSend
    | [@bs.as "md-settings"] `mdSettings
    | [@bs.as "md-share"] `mdShare
    | [@bs.as "md-share-alt"] `mdShareAlt
    | [@bs.as "md-shirt"] `mdShirt
    | [@bs.as "md-shuffle"] `mdShuffle
    | [@bs.as "md-skip-backward"] `mdSkipBackward
    | [@bs.as "md-skip-forward"] `mdSkipForward
    | [@bs.as "md-snow"] `mdSnow
    | [@bs.as "md-speedometer"] `mdSpeedometer
    | [@bs.as "md-square"] `mdSquare
    | [@bs.as "md-square-outline"] `mdSquareOutline
    | [@bs.as "md-star"] `mdStar
    | [@bs.as "md-star-half"] `mdStarHalf
    | [@bs.as "md-star-outline"] `mdStarOutline
    | [@bs.as "md-stats"] `mdStats
    | [@bs.as "md-stopwatch"] `mdStopwatch
    | [@bs.as "md-subway"] `mdSubway
    | [@bs.as "md-sunny"] `mdSunny
    | [@bs.as "md-swap"] `mdSwap
    | [@bs.as "md-switch"] `mdSwitch
    | [@bs.as "md-sync"] `mdSync
    | [@bs.as "md-tablet-landscape"] `mdTabletLandscape
    | [@bs.as "md-tablet-portrait"] `mdTabletPortrait
    | [@bs.as "md-tennisball"] `mdTennisball
    | [@bs.as "md-text"] `mdText
    | [@bs.as "md-thermometer"] `mdThermometer
    | [@bs.as "md-thumbs-down"] `mdThumbsDown
    | [@bs.as "md-thumbs-up"] `mdThumbsUp
    | [@bs.as "md-thunderstorm"] `mdThunderstorm
    | [@bs.as "md-time"] `mdTime
    | [@bs.as "md-timer"] `mdTimer
    | [@bs.as "md-today"] `mdToday
    | [@bs.as "md-train"] `mdTrain
    | [@bs.as "md-transgender"] `mdTransgender
    | [@bs.as "md-trash"] `mdTrash
    | [@bs.as "md-trending-down"] `mdTrendingDown
    | [@bs.as "md-trending-up"] `mdTrendingUp
    | [@bs.as "md-trophy"] `mdTrophy
    | [@bs.as "md-tv"] `mdTv
    | [@bs.as "md-umbrella"] `mdUmbrella
    | [@bs.as "md-undo"] `mdUndo
    | [@bs.as "md-unlock"] `mdUnlock
    | [@bs.as "md-videocam"] `mdVideocam
    | [@bs.as "md-volume-high"] `mdVolumeHigh
    | [@bs.as "md-volume-low"] `mdVolumeLow
    | [@bs.as "md-volume-mute"] `mdVolumeMute
    | [@bs.as "md-volume-off"] `mdVolumeOff
    | [@bs.as "md-walk"] `mdWalk
    | [@bs.as "md-wallet"] `mdWallet
    | [@bs.as "md-warning"] `mdWarning
    | [@bs.as "md-watch"] `mdWatch
    | [@bs.as "md-water"] `mdWater
    | [@bs.as "md-wifi"] `mdWifi
    | [@bs.as "md-wine"] `mdWine
    | [@bs.as "md-woman"] `mdWoman
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
    ~name=`iosAdd,
    ~color="black",
    ~size=12,
    ~style=BsReactNative.Style.style([]),
    children,
  ) =>
ReasonReact.wrapJsForReason(
  ~reactClass=Ionicons.js,
  ~props=
    Ionicons.props(
      ~allowFontScaling,
      ~name=Ionicons.nameToJs(name),
      ~size,
      ~color,
      ~style,
      (),
    ),
  children,
);