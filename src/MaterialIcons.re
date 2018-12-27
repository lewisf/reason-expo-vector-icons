module MaterialIcons = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "MaterialIcons";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "3d-rotation"] `undefined
    | [@bs.as "ac-unit"] `undefined
    | [@bs.as "access-alarm"] `undefined
    | [@bs.as "access-alarms"] `undefined
    | [@bs.as "access-time"] `undefined
    | [@bs.as "accessibility"] `undefined
    | [@bs.as "accessible"] `undefined
    | [@bs.as "account-balance"] `undefined
    | [@bs.as "account-balance-wallet"] `undefined
    | [@bs.as "account-box"] `undefined
    | [@bs.as "account-circle"] `undefined
    | [@bs.as "adb"] `undefined
    | [@bs.as "add"] `undefined
    | [@bs.as "add-a-photo"] `undefined
    | [@bs.as "add-alarm"] `undefined
    | [@bs.as "add-alert"] `undefined
    | [@bs.as "add-box"] `undefined
    | [@bs.as "add-circle"] `undefined
    | [@bs.as "add-circle-outline"] `undefined
    | [@bs.as "add-location"] `undefined
    | [@bs.as "add-shopping-cart"] `undefined
    | [@bs.as "add-to-photos"] `undefined
    | [@bs.as "add-to-queue"] `undefined
    | [@bs.as "adjust"] `undefined
    | [@bs.as "airline-seat-flat"] `undefined
    | [@bs.as "airline-seat-flat-angled"] `undefined
    | [@bs.as "airline-seat-individual-suite"] `undefined
    | [@bs.as "airline-seat-legroom-extra"] `undefined
    | [@bs.as "airline-seat-legroom-normal"] `undefined
    | [@bs.as "airline-seat-legroom-reduced"] `undefined
    | [@bs.as "airline-seat-recline-extra"] `undefined
    | [@bs.as "airline-seat-recline-normal"] `undefined
    | [@bs.as "airplanemode-active"] `undefined
    | [@bs.as "airplanemode-inactive"] `undefined
    | [@bs.as "airplay"] `undefined
    | [@bs.as "airport-shuttle"] `undefined
    | [@bs.as "alarm"] `undefined
    | [@bs.as "alarm-add"] `undefined
    | [@bs.as "alarm-off"] `undefined
    | [@bs.as "alarm-on"] `undefined
    | [@bs.as "album"] `undefined
    | [@bs.as "all-inclusive"] `undefined
    | [@bs.as "all-out"] `undefined
    | [@bs.as "android"] `undefined
    | [@bs.as "announcement"] `undefined
    | [@bs.as "apps"] `undefined
    | [@bs.as "archive"] `undefined
    | [@bs.as "arrow-back"] `undefined
    | [@bs.as "arrow-downward"] `undefined
    | [@bs.as "arrow-drop-down"] `undefined
    | [@bs.as "arrow-drop-down-circle"] `undefined
    | [@bs.as "arrow-drop-up"] `undefined
    | [@bs.as "arrow-forward"] `undefined
    | [@bs.as "arrow-upward"] `undefined
    | [@bs.as "art-track"] `undefined
    | [@bs.as "aspect-ratio"] `undefined
    | [@bs.as "assessment"] `undefined
    | [@bs.as "assignment"] `undefined
    | [@bs.as "assignment-ind"] `undefined
    | [@bs.as "assignment-late"] `undefined
    | [@bs.as "assignment-return"] `undefined
    | [@bs.as "assignment-returned"] `undefined
    | [@bs.as "assignment-turned-in"] `undefined
    | [@bs.as "assistant"] `undefined
    | [@bs.as "assistant-photo"] `undefined
    | [@bs.as "attach-file"] `undefined
    | [@bs.as "attach-money"] `undefined
    | [@bs.as "attachment"] `undefined
    | [@bs.as "audiotrack"] `undefined
    | [@bs.as "autorenew"] `undefined
    | [@bs.as "av-timer"] `undefined
    | [@bs.as "backspace"] `undefined
    | [@bs.as "backup"] `undefined
    | [@bs.as "battery-alert"] `undefined
    | [@bs.as "battery-charging-full"] `undefined
    | [@bs.as "battery-full"] `undefined
    | [@bs.as "battery-std"] `undefined
    | [@bs.as "battery-unknown"] `undefined
    | [@bs.as "beach-access"] `undefined
    | [@bs.as "beenhere"] `undefined
    | [@bs.as "block"] `undefined
    | [@bs.as "bluetooth"] `undefined
    | [@bs.as "bluetooth-audio"] `undefined
    | [@bs.as "bluetooth-connected"] `undefined
    | [@bs.as "bluetooth-disabled"] `undefined
    | [@bs.as "bluetooth-searching"] `undefined
    | [@bs.as "blur-circular"] `undefined
    | [@bs.as "blur-linear"] `undefined
    | [@bs.as "blur-off"] `undefined
    | [@bs.as "blur-on"] `undefined
    | [@bs.as "book"] `undefined
    | [@bs.as "bookmark"] `undefined
    | [@bs.as "bookmark-border"] `undefined
    | [@bs.as "border-all"] `undefined
    | [@bs.as "border-bottom"] `undefined
    | [@bs.as "border-clear"] `undefined
    | [@bs.as "border-color"] `undefined
    | [@bs.as "border-horizontal"] `undefined
    | [@bs.as "border-inner"] `undefined
    | [@bs.as "border-left"] `undefined
    | [@bs.as "border-outer"] `undefined
    | [@bs.as "border-right"] `undefined
    | [@bs.as "border-style"] `undefined
    | [@bs.as "border-top"] `undefined
    | [@bs.as "border-vertical"] `undefined
    | [@bs.as "branding-watermark"] `undefined
    | [@bs.as "brightness-1"] `undefined
    | [@bs.as "brightness-2"] `undefined
    | [@bs.as "brightness-3"] `undefined
    | [@bs.as "brightness-4"] `undefined
    | [@bs.as "brightness-5"] `undefined
    | [@bs.as "brightness-6"] `undefined
    | [@bs.as "brightness-7"] `undefined
    | [@bs.as "brightness-auto"] `undefined
    | [@bs.as "brightness-high"] `undefined
    | [@bs.as "brightness-low"] `undefined
    | [@bs.as "brightness-medium"] `undefined
    | [@bs.as "broken-image"] `undefined
    | [@bs.as "brush"] `undefined
    | [@bs.as "bubble-chart"] `undefined
    | [@bs.as "bug-report"] `undefined
    | [@bs.as "build"] `undefined
    | [@bs.as "burst-mode"] `undefined
    | [@bs.as "business"] `undefined
    | [@bs.as "business-center"] `undefined
    | [@bs.as "cached"] `undefined
    | [@bs.as "cake"] `undefined
    | [@bs.as "call"] `undefined
    | [@bs.as "call-end"] `undefined
    | [@bs.as "call-made"] `undefined
    | [@bs.as "call-merge"] `undefined
    | [@bs.as "call-missed"] `undefined
    | [@bs.as "call-missed-outgoing"] `undefined
    | [@bs.as "call-received"] `undefined
    | [@bs.as "call-split"] `undefined
    | [@bs.as "call-to-action"] `undefined
    | [@bs.as "camera"] `undefined
    | [@bs.as "camera-alt"] `undefined
    | [@bs.as "camera-enhance"] `undefined
    | [@bs.as "camera-front"] `undefined
    | [@bs.as "camera-rear"] `undefined
    | [@bs.as "camera-roll"] `undefined
    | [@bs.as "cancel"] `undefined
    | [@bs.as "card-giftcard"] `undefined
    | [@bs.as "card-membership"] `undefined
    | [@bs.as "card-travel"] `undefined
    | [@bs.as "casino"] `undefined
    | [@bs.as "cast"] `undefined
    | [@bs.as "cast-connected"] `undefined
    | [@bs.as "center-focus-strong"] `undefined
    | [@bs.as "center-focus-weak"] `undefined
    | [@bs.as "change-history"] `undefined
    | [@bs.as "chat"] `undefined
    | [@bs.as "chat-bubble"] `undefined
    | [@bs.as "chat-bubble-outline"] `undefined
    | [@bs.as "check"] `undefined
    | [@bs.as "check-box"] `undefined
    | [@bs.as "check-box-outline-blank"] `undefined
    | [@bs.as "check-circle"] `undefined
    | [@bs.as "chevron-left"] `undefined
    | [@bs.as "chevron-right"] `undefined
    | [@bs.as "child-care"] `undefined
    | [@bs.as "child-friendly"] `undefined
    | [@bs.as "chrome-reader-mode"] `undefined
    | [@bs.as "class"] `undefined
    | [@bs.as "clear"] `undefined
    | [@bs.as "clear-all"] `undefined
    | [@bs.as "close"] `undefined
    | [@bs.as "closed-caption"] `undefined
    | [@bs.as "cloud"] `undefined
    | [@bs.as "cloud-circle"] `undefined
    | [@bs.as "cloud-done"] `undefined
    | [@bs.as "cloud-download"] `undefined
    | [@bs.as "cloud-off"] `undefined
    | [@bs.as "cloud-queue"] `undefined
    | [@bs.as "cloud-upload"] `undefined
    | [@bs.as "code"] `undefined
    | [@bs.as "collections"] `undefined
    | [@bs.as "collections-bookmark"] `undefined
    | [@bs.as "color-lens"] `undefined
    | [@bs.as "colorize"] `undefined
    | [@bs.as "comment"] `undefined
    | [@bs.as "compare"] `undefined
    | [@bs.as "compare-arrows"] `undefined
    | [@bs.as "computer"] `undefined
    | [@bs.as "confirmation-number"] `undefined
    | [@bs.as "contact-mail"] `undefined
    | [@bs.as "contact-phone"] `undefined
    | [@bs.as "contacts"] `undefined
    | [@bs.as "content-copy"] `undefined
    | [@bs.as "content-cut"] `undefined
    | [@bs.as "content-paste"] `undefined
    | [@bs.as "control-point"] `undefined
    | [@bs.as "control-point-duplicate"] `undefined
    | [@bs.as "copyright"] `undefined
    | [@bs.as "create"] `undefined
    | [@bs.as "create-new-folder"] `undefined
    | [@bs.as "credit-card"] `undefined
    | [@bs.as "crop"] `undefined
    | [@bs.as "crop-16-9"] `undefined
    | [@bs.as "crop-3-2"] `undefined
    | [@bs.as "crop-5-4"] `undefined
    | [@bs.as "crop-7-5"] `undefined
    | [@bs.as "crop-din"] `undefined
    | [@bs.as "crop-free"] `undefined
    | [@bs.as "crop-landscape"] `undefined
    | [@bs.as "crop-original"] `undefined
    | [@bs.as "crop-portrait"] `undefined
    | [@bs.as "crop-rotate"] `undefined
    | [@bs.as "crop-square"] `undefined
    | [@bs.as "dashboard"] `undefined
    | [@bs.as "data-usage"] `undefined
    | [@bs.as "date-range"] `undefined
    | [@bs.as "dehaze"] `undefined
    | [@bs.as "delete"] `undefined
    | [@bs.as "delete-forever"] `undefined
    | [@bs.as "delete-sweep"] `undefined
    | [@bs.as "description"] `undefined
    | [@bs.as "desktop-mac"] `undefined
    | [@bs.as "desktop-windows"] `undefined
    | [@bs.as "details"] `undefined
    | [@bs.as "developer-board"] `undefined
    | [@bs.as "developer-mode"] `undefined
    | [@bs.as "device-hub"] `undefined
    | [@bs.as "devices"] `undefined
    | [@bs.as "devices-other"] `undefined
    | [@bs.as "dialer-sip"] `undefined
    | [@bs.as "dialpad"] `undefined
    | [@bs.as "directions"] `undefined
    | [@bs.as "directions-bike"] `undefined
    | [@bs.as "directions-boat"] `undefined
    | [@bs.as "directions-bus"] `undefined
    | [@bs.as "directions-car"] `undefined
    | [@bs.as "directions-railway"] `undefined
    | [@bs.as "directions-run"] `undefined
    | [@bs.as "directions-subway"] `undefined
    | [@bs.as "directions-transit"] `undefined
    | [@bs.as "directions-walk"] `undefined
    | [@bs.as "disc-full"] `undefined
    | [@bs.as "dns"] `undefined
    | [@bs.as "do-not-disturb"] `undefined
    | [@bs.as "do-not-disturb-alt"] `undefined
    | [@bs.as "do-not-disturb-off"] `undefined
    | [@bs.as "do-not-disturb-on"] `undefined
    | [@bs.as "dock"] `undefined
    | [@bs.as "domain"] `undefined
    | [@bs.as "done"] `undefined
    | [@bs.as "done-all"] `undefined
    | [@bs.as "donut-large"] `undefined
    | [@bs.as "donut-small"] `undefined
    | [@bs.as "drafts"] `undefined
    | [@bs.as "drag-handle"] `undefined
    | [@bs.as "drive-eta"] `undefined
    | [@bs.as "dvr"] `undefined
    | [@bs.as "edit"] `undefined
    | [@bs.as "edit-location"] `undefined
    | [@bs.as "eject"] `undefined
    | [@bs.as "email"] `undefined
    | [@bs.as "enhanced-encryption"] `undefined
    | [@bs.as "equalizer"] `undefined
    | [@bs.as "error"] `undefined
    | [@bs.as "error-outline"] `undefined
    | [@bs.as "euro-symbol"] `undefined
    | [@bs.as "ev-station"] `undefined
    | [@bs.as "event"] `undefined
    | [@bs.as "event-available"] `undefined
    | [@bs.as "event-busy"] `undefined
    | [@bs.as "event-note"] `undefined
    | [@bs.as "event-seat"] `undefined
    | [@bs.as "exit-to-app"] `undefined
    | [@bs.as "expand-less"] `undefined
    | [@bs.as "expand-more"] `undefined
    | [@bs.as "explicit"] `undefined
    | [@bs.as "explore"] `undefined
    | [@bs.as "exposure"] `undefined
    | [@bs.as "exposure-neg-1"] `undefined
    | [@bs.as "exposure-neg-2"] `undefined
    | [@bs.as "exposure-plus-1"] `undefined
    | [@bs.as "exposure-plus-2"] `undefined
    | [@bs.as "exposure-zero"] `undefined
    | [@bs.as "extension"] `undefined
    | [@bs.as "face"] `undefined
    | [@bs.as "fast-forward"] `undefined
    | [@bs.as "fast-rewind"] `undefined
    | [@bs.as "favorite"] `undefined
    | [@bs.as "favorite-border"] `undefined
    | [@bs.as "featured-play-list"] `undefined
    | [@bs.as "featured-video"] `undefined
    | [@bs.as "feedback"] `undefined
    | [@bs.as "fiber-dvr"] `undefined
    | [@bs.as "fiber-manual-record"] `undefined
    | [@bs.as "fiber-new"] `undefined
    | [@bs.as "fiber-pin"] `undefined
    | [@bs.as "fiber-smart-record"] `undefined
    | [@bs.as "file-download"] `undefined
    | [@bs.as "file-upload"] `undefined
    | [@bs.as "filter"] `undefined
    | [@bs.as "filter-1"] `undefined
    | [@bs.as "filter-2"] `undefined
    | [@bs.as "filter-3"] `undefined
    | [@bs.as "filter-4"] `undefined
    | [@bs.as "filter-5"] `undefined
    | [@bs.as "filter-6"] `undefined
    | [@bs.as "filter-7"] `undefined
    | [@bs.as "filter-8"] `undefined
    | [@bs.as "filter-9"] `undefined
    | [@bs.as "filter-9-plus"] `undefined
    | [@bs.as "filter-b-and-w"] `undefined
    | [@bs.as "filter-center-focus"] `undefined
    | [@bs.as "filter-drama"] `undefined
    | [@bs.as "filter-frames"] `undefined
    | [@bs.as "filter-hdr"] `undefined
    | [@bs.as "filter-list"] `undefined
    | [@bs.as "filter-none"] `undefined
    | [@bs.as "filter-tilt-shift"] `undefined
    | [@bs.as "filter-vintage"] `undefined
    | [@bs.as "find-in-page"] `undefined
    | [@bs.as "find-replace"] `undefined
    | [@bs.as "fingerprint"] `undefined
    | [@bs.as "first-page"] `undefined
    | [@bs.as "fitness-center"] `undefined
    | [@bs.as "flag"] `undefined
    | [@bs.as "flare"] `undefined
    | [@bs.as "flash-auto"] `undefined
    | [@bs.as "flash-off"] `undefined
    | [@bs.as "flash-on"] `undefined
    | [@bs.as "flight"] `undefined
    | [@bs.as "flight-land"] `undefined
    | [@bs.as "flight-takeoff"] `undefined
    | [@bs.as "flip"] `undefined
    | [@bs.as "flip-to-back"] `undefined
    | [@bs.as "flip-to-front"] `undefined
    | [@bs.as "folder"] `undefined
    | [@bs.as "folder-open"] `undefined
    | [@bs.as "folder-shared"] `undefined
    | [@bs.as "folder-special"] `undefined
    | [@bs.as "font-download"] `undefined
    | [@bs.as "format-align-center"] `undefined
    | [@bs.as "format-align-justify"] `undefined
    | [@bs.as "format-align-left"] `undefined
    | [@bs.as "format-align-right"] `undefined
    | [@bs.as "format-bold"] `undefined
    | [@bs.as "format-clear"] `undefined
    | [@bs.as "format-color-fill"] `undefined
    | [@bs.as "format-color-reset"] `undefined
    | [@bs.as "format-color-text"] `undefined
    | [@bs.as "format-indent-decrease"] `undefined
    | [@bs.as "format-indent-increase"] `undefined
    | [@bs.as "format-italic"] `undefined
    | [@bs.as "format-line-spacing"] `undefined
    | [@bs.as "format-list-bulleted"] `undefined
    | [@bs.as "format-list-numbered"] `undefined
    | [@bs.as "format-paint"] `undefined
    | [@bs.as "format-quote"] `undefined
    | [@bs.as "format-shapes"] `undefined
    | [@bs.as "format-size"] `undefined
    | [@bs.as "format-strikethrough"] `undefined
    | [@bs.as "format-textdirection-l-to-r"] `undefined
    | [@bs.as "format-textdirection-r-to-l"] `undefined
    | [@bs.as "format-underlined"] `undefined
    | [@bs.as "forum"] `undefined
    | [@bs.as "forward"] `undefined
    | [@bs.as "forward-10"] `undefined
    | [@bs.as "forward-30"] `undefined
    | [@bs.as "forward-5"] `undefined
    | [@bs.as "free-breakfast"] `undefined
    | [@bs.as "fullscreen"] `undefined
    | [@bs.as "fullscreen-exit"] `undefined
    | [@bs.as "functions"] `undefined
    | [@bs.as "g-translate"] `undefined
    | [@bs.as "gamepad"] `undefined
    | [@bs.as "games"] `undefined
    | [@bs.as "gavel"] `undefined
    | [@bs.as "gesture"] `undefined
    | [@bs.as "get-app"] `undefined
    | [@bs.as "gif"] `undefined
    | [@bs.as "golf-course"] `undefined
    | [@bs.as "gps-fixed"] `undefined
    | [@bs.as "gps-not-fixed"] `undefined
    | [@bs.as "gps-off"] `undefined
    | [@bs.as "grade"] `undefined
    | [@bs.as "gradient"] `undefined
    | [@bs.as "grain"] `undefined
    | [@bs.as "graphic-eq"] `undefined
    | [@bs.as "grid-off"] `undefined
    | [@bs.as "grid-on"] `undefined
    | [@bs.as "group"] `undefined
    | [@bs.as "group-add"] `undefined
    | [@bs.as "group-work"] `undefined
    | [@bs.as "hd"] `undefined
    | [@bs.as "hdr-off"] `undefined
    | [@bs.as "hdr-on"] `undefined
    | [@bs.as "hdr-strong"] `undefined
    | [@bs.as "hdr-weak"] `undefined
    | [@bs.as "headset"] `undefined
    | [@bs.as "headset-mic"] `undefined
    | [@bs.as "healing"] `undefined
    | [@bs.as "hearing"] `undefined
    | [@bs.as "help"] `undefined
    | [@bs.as "help-outline"] `undefined
    | [@bs.as "high-quality"] `undefined
    | [@bs.as "highlight"] `undefined
    | [@bs.as "highlight-off"] `undefined
    | [@bs.as "history"] `undefined
    | [@bs.as "home"] `undefined
    | [@bs.as "hot-tub"] `undefined
    | [@bs.as "hotel"] `undefined
    | [@bs.as "hourglass-empty"] `undefined
    | [@bs.as "hourglass-full"] `undefined
    | [@bs.as "http"] `undefined
    | [@bs.as "https"] `undefined
    | [@bs.as "image"] `undefined
    | [@bs.as "image-aspect-ratio"] `undefined
    | [@bs.as "import-contacts"] `undefined
    | [@bs.as "import-export"] `undefined
    | [@bs.as "important-devices"] `undefined
    | [@bs.as "inbox"] `undefined
    | [@bs.as "indeterminate-check-box"] `undefined
    | [@bs.as "info"] `undefined
    | [@bs.as "info-outline"] `undefined
    | [@bs.as "input"] `undefined
    | [@bs.as "insert-chart"] `undefined
    | [@bs.as "insert-comment"] `undefined
    | [@bs.as "insert-drive-file"] `undefined
    | [@bs.as "insert-emoticon"] `undefined
    | [@bs.as "insert-invitation"] `undefined
    | [@bs.as "insert-link"] `undefined
    | [@bs.as "insert-photo"] `undefined
    | [@bs.as "invert-colors"] `undefined
    | [@bs.as "invert-colors-off"] `undefined
    | [@bs.as "iso"] `undefined
    | [@bs.as "keyboard"] `undefined
    | [@bs.as "keyboard-arrow-down"] `undefined
    | [@bs.as "keyboard-arrow-left"] `undefined
    | [@bs.as "keyboard-arrow-right"] `undefined
    | [@bs.as "keyboard-arrow-up"] `undefined
    | [@bs.as "keyboard-backspace"] `undefined
    | [@bs.as "keyboard-capslock"] `undefined
    | [@bs.as "keyboard-hide"] `undefined
    | [@bs.as "keyboard-return"] `undefined
    | [@bs.as "keyboard-tab"] `undefined
    | [@bs.as "keyboard-voice"] `undefined
    | [@bs.as "kitchen"] `undefined
    | [@bs.as "label"] `undefined
    | [@bs.as "label-outline"] `undefined
    | [@bs.as "landscape"] `undefined
    | [@bs.as "language"] `undefined
    | [@bs.as "laptop"] `undefined
    | [@bs.as "laptop-chromebook"] `undefined
    | [@bs.as "laptop-mac"] `undefined
    | [@bs.as "laptop-windows"] `undefined
    | [@bs.as "last-page"] `undefined
    | [@bs.as "launch"] `undefined
    | [@bs.as "layers"] `undefined
    | [@bs.as "layers-clear"] `undefined
    | [@bs.as "leak-add"] `undefined
    | [@bs.as "leak-remove"] `undefined
    | [@bs.as "lens"] `undefined
    | [@bs.as "library-add"] `undefined
    | [@bs.as "library-books"] `undefined
    | [@bs.as "library-music"] `undefined
    | [@bs.as "lightbulb-outline"] `undefined
    | [@bs.as "line-style"] `undefined
    | [@bs.as "line-weight"] `undefined
    | [@bs.as "linear-scale"] `undefined
    | [@bs.as "link"] `undefined
    | [@bs.as "linked-camera"] `undefined
    | [@bs.as "list"] `undefined
    | [@bs.as "live-help"] `undefined
    | [@bs.as "live-tv"] `undefined
    | [@bs.as "local-activity"] `undefined
    | [@bs.as "local-airport"] `undefined
    | [@bs.as "local-atm"] `undefined
    | [@bs.as "local-bar"] `undefined
    | [@bs.as "local-cafe"] `undefined
    | [@bs.as "local-car-wash"] `undefined
    | [@bs.as "local-convenience-store"] `undefined
    | [@bs.as "local-dining"] `undefined
    | [@bs.as "local-drink"] `undefined
    | [@bs.as "local-florist"] `undefined
    | [@bs.as "local-gas-station"] `undefined
    | [@bs.as "local-grocery-store"] `undefined
    | [@bs.as "local-hospital"] `undefined
    | [@bs.as "local-hotel"] `undefined
    | [@bs.as "local-laundry-service"] `undefined
    | [@bs.as "local-library"] `undefined
    | [@bs.as "local-mall"] `undefined
    | [@bs.as "local-movies"] `undefined
    | [@bs.as "local-offer"] `undefined
    | [@bs.as "local-parking"] `undefined
    | [@bs.as "local-pharmacy"] `undefined
    | [@bs.as "local-phone"] `undefined
    | [@bs.as "local-pizza"] `undefined
    | [@bs.as "local-play"] `undefined
    | [@bs.as "local-post-office"] `undefined
    | [@bs.as "local-printshop"] `undefined
    | [@bs.as "local-see"] `undefined
    | [@bs.as "local-shipping"] `undefined
    | [@bs.as "local-taxi"] `undefined
    | [@bs.as "location-city"] `undefined
    | [@bs.as "location-disabled"] `undefined
    | [@bs.as "location-off"] `undefined
    | [@bs.as "location-on"] `undefined
    | [@bs.as "location-searching"] `undefined
    | [@bs.as "lock"] `undefined
    | [@bs.as "lock-open"] `undefined
    | [@bs.as "lock-outline"] `undefined
    | [@bs.as "looks"] `undefined
    | [@bs.as "looks-3"] `undefined
    | [@bs.as "looks-4"] `undefined
    | [@bs.as "looks-5"] `undefined
    | [@bs.as "looks-6"] `undefined
    | [@bs.as "looks-one"] `undefined
    | [@bs.as "looks-two"] `undefined
    | [@bs.as "loop"] `undefined
    | [@bs.as "loupe"] `undefined
    | [@bs.as "low-priority"] `undefined
    | [@bs.as "loyalty"] `undefined
    | [@bs.as "mail"] `undefined
    | [@bs.as "mail-outline"] `undefined
    | [@bs.as "map"] `undefined
    | [@bs.as "markunread"] `undefined
    | [@bs.as "markunread-mailbox"] `undefined
    | [@bs.as "memory"] `undefined
    | [@bs.as "menu"] `undefined
    | [@bs.as "merge-type"] `undefined
    | [@bs.as "message"] `undefined
    | [@bs.as "mic"] `undefined
    | [@bs.as "mic-none"] `undefined
    | [@bs.as "mic-off"] `undefined
    | [@bs.as "mms"] `undefined
    | [@bs.as "mode-comment"] `undefined
    | [@bs.as "mode-edit"] `undefined
    | [@bs.as "monetization-on"] `undefined
    | [@bs.as "money-off"] `undefined
    | [@bs.as "monochrome-photos"] `undefined
    | [@bs.as "mood"] `undefined
    | [@bs.as "mood-bad"] `undefined
    | [@bs.as "more"] `undefined
    | [@bs.as "more-horiz"] `undefined
    | [@bs.as "more-vert"] `undefined
    | [@bs.as "motorcycle"] `undefined
    | [@bs.as "mouse"] `undefined
    | [@bs.as "move-to-inbox"] `undefined
    | [@bs.as "movie"] `undefined
    | [@bs.as "movie-creation"] `undefined
    | [@bs.as "movie-filter"] `undefined
    | [@bs.as "multiline-chart"] `undefined
    | [@bs.as "music-note"] `undefined
    | [@bs.as "music-video"] `undefined
    | [@bs.as "my-location"] `undefined
    | [@bs.as "nature"] `undefined
    | [@bs.as "nature-people"] `undefined
    | [@bs.as "navigate-before"] `undefined
    | [@bs.as "navigate-next"] `undefined
    | [@bs.as "navigation"] `undefined
    | [@bs.as "near-me"] `undefined
    | [@bs.as "network-cell"] `undefined
    | [@bs.as "network-check"] `undefined
    | [@bs.as "network-locked"] `undefined
    | [@bs.as "network-wifi"] `undefined
    | [@bs.as "new-releases"] `undefined
    | [@bs.as "next-week"] `undefined
    | [@bs.as "nfc"] `undefined
    | [@bs.as "no-encryption"] `undefined
    | [@bs.as "no-sim"] `undefined
    | [@bs.as "not-interested"] `undefined
    | [@bs.as "note"] `undefined
    | [@bs.as "note-add"] `undefined
    | [@bs.as "notifications"] `undefined
    | [@bs.as "notifications-active"] `undefined
    | [@bs.as "notifications-none"] `undefined
    | [@bs.as "notifications-off"] `undefined
    | [@bs.as "notifications-paused"] `undefined
    | [@bs.as "offline-pin"] `undefined
    | [@bs.as "ondemand-video"] `undefined
    | [@bs.as "opacity"] `undefined
    | [@bs.as "open-in-browser"] `undefined
    | [@bs.as "open-in-new"] `undefined
    | [@bs.as "open-with"] `undefined
    | [@bs.as "pages"] `undefined
    | [@bs.as "pageview"] `undefined
    | [@bs.as "palette"] `undefined
    | [@bs.as "pan-tool"] `undefined
    | [@bs.as "panorama"] `undefined
    | [@bs.as "panorama-fish-eye"] `undefined
    | [@bs.as "panorama-horizontal"] `undefined
    | [@bs.as "panorama-vertical"] `undefined
    | [@bs.as "panorama-wide-angle"] `undefined
    | [@bs.as "party-mode"] `undefined
    | [@bs.as "pause"] `undefined
    | [@bs.as "pause-circle-filled"] `undefined
    | [@bs.as "pause-circle-outline"] `undefined
    | [@bs.as "payment"] `undefined
    | [@bs.as "people"] `undefined
    | [@bs.as "people-outline"] `undefined
    | [@bs.as "perm-camera-mic"] `undefined
    | [@bs.as "perm-contact-calendar"] `undefined
    | [@bs.as "perm-data-setting"] `undefined
    | [@bs.as "perm-device-information"] `undefined
    | [@bs.as "perm-identity"] `undefined
    | [@bs.as "perm-media"] `undefined
    | [@bs.as "perm-phone-msg"] `undefined
    | [@bs.as "perm-scan-wifi"] `undefined
    | [@bs.as "person"] `undefined
    | [@bs.as "person-add"] `undefined
    | [@bs.as "person-outline"] `undefined
    | [@bs.as "person-pin"] `undefined
    | [@bs.as "person-pin-circle"] `undefined
    | [@bs.as "personal-video"] `undefined
    | [@bs.as "pets"] `undefined
    | [@bs.as "phone"] `undefined
    | [@bs.as "phone-android"] `undefined
    | [@bs.as "phone-bluetooth-speaker"] `undefined
    | [@bs.as "phone-forwarded"] `undefined
    | [@bs.as "phone-in-talk"] `undefined
    | [@bs.as "phone-iphone"] `undefined
    | [@bs.as "phone-locked"] `undefined
    | [@bs.as "phone-missed"] `undefined
    | [@bs.as "phone-paused"] `undefined
    | [@bs.as "phonelink"] `undefined
    | [@bs.as "phonelink-erase"] `undefined
    | [@bs.as "phonelink-lock"] `undefined
    | [@bs.as "phonelink-off"] `undefined
    | [@bs.as "phonelink-ring"] `undefined
    | [@bs.as "phonelink-setup"] `undefined
    | [@bs.as "photo"] `undefined
    | [@bs.as "photo-album"] `undefined
    | [@bs.as "photo-camera"] `undefined
    | [@bs.as "photo-filter"] `undefined
    | [@bs.as "photo-library"] `undefined
    | [@bs.as "photo-size-select-actual"] `undefined
    | [@bs.as "photo-size-select-large"] `undefined
    | [@bs.as "photo-size-select-small"] `undefined
    | [@bs.as "picture-as-pdf"] `undefined
    | [@bs.as "picture-in-picture"] `undefined
    | [@bs.as "picture-in-picture-alt"] `undefined
    | [@bs.as "pie-chart"] `undefined
    | [@bs.as "pie-chart-outlined"] `undefined
    | [@bs.as "pin-drop"] `undefined
    | [@bs.as "place"] `undefined
    | [@bs.as "play-arrow"] `undefined
    | [@bs.as "play-circle-filled"] `undefined
    | [@bs.as "play-circle-outline"] `undefined
    | [@bs.as "play-for-work"] `undefined
    | [@bs.as "playlist-add"] `undefined
    | [@bs.as "playlist-add-check"] `undefined
    | [@bs.as "playlist-play"] `undefined
    | [@bs.as "plus-one"] `undefined
    | [@bs.as "poll"] `undefined
    | [@bs.as "polymer"] `undefined
    | [@bs.as "pool"] `undefined
    | [@bs.as "portable-wifi-off"] `undefined
    | [@bs.as "portrait"] `undefined
    | [@bs.as "power"] `undefined
    | [@bs.as "power-input"] `undefined
    | [@bs.as "power-settings-new"] `undefined
    | [@bs.as "pregnant-woman"] `undefined
    | [@bs.as "present-to-all"] `undefined
    | [@bs.as "print"] `undefined
    | [@bs.as "priority-high"] `undefined
    | [@bs.as "public"] `undefined
    | [@bs.as "publish"] `undefined
    | [@bs.as "query-builder"] `undefined
    | [@bs.as "question-answer"] `undefined
    | [@bs.as "queue"] `undefined
    | [@bs.as "queue-music"] `undefined
    | [@bs.as "queue-play-next"] `undefined
    | [@bs.as "radio"] `undefined
    | [@bs.as "radio-button-checked"] `undefined
    | [@bs.as "radio-button-unchecked"] `undefined
    | [@bs.as "rate-review"] `undefined
    | [@bs.as "receipt"] `undefined
    | [@bs.as "recent-actors"] `undefined
    | [@bs.as "record-voice-over"] `undefined
    | [@bs.as "redeem"] `undefined
    | [@bs.as "redo"] `undefined
    | [@bs.as "refresh"] `undefined
    | [@bs.as "remove"] `undefined
    | [@bs.as "remove-circle"] `undefined
    | [@bs.as "remove-circle-outline"] `undefined
    | [@bs.as "remove-from-queue"] `undefined
    | [@bs.as "remove-red-eye"] `undefined
    | [@bs.as "remove-shopping-cart"] `undefined
    | [@bs.as "reorder"] `undefined
    | [@bs.as "repeat"] `undefined
    | [@bs.as "repeat-one"] `undefined
    | [@bs.as "replay"] `undefined
    | [@bs.as "replay-10"] `undefined
    | [@bs.as "replay-30"] `undefined
    | [@bs.as "replay-5"] `undefined
    | [@bs.as "reply"] `undefined
    | [@bs.as "reply-all"] `undefined
    | [@bs.as "report"] `undefined
    | [@bs.as "report-problem"] `undefined
    | [@bs.as "restaurant"] `undefined
    | [@bs.as "restaurant-menu"] `undefined
    | [@bs.as "restore"] `undefined
    | [@bs.as "restore-page"] `undefined
    | [@bs.as "ring-volume"] `undefined
    | [@bs.as "room"] `undefined
    | [@bs.as "room-service"] `undefined
    | [@bs.as "rotate-90-degrees-ccw"] `undefined
    | [@bs.as "rotate-left"] `undefined
    | [@bs.as "rotate-right"] `undefined
    | [@bs.as "rounded-corner"] `undefined
    | [@bs.as "router"] `undefined
    | [@bs.as "rowing"] `undefined
    | [@bs.as "rss-feed"] `undefined
    | [@bs.as "rv-hookup"] `undefined
    | [@bs.as "satellite"] `undefined
    | [@bs.as "save"] `undefined
    | [@bs.as "scanner"] `undefined
    | [@bs.as "schedule"] `undefined
    | [@bs.as "school"] `undefined
    | [@bs.as "screen-lock-landscape"] `undefined
    | [@bs.as "screen-lock-portrait"] `undefined
    | [@bs.as "screen-lock-rotation"] `undefined
    | [@bs.as "screen-rotation"] `undefined
    | [@bs.as "screen-share"] `undefined
    | [@bs.as "sd-card"] `undefined
    | [@bs.as "sd-storage"] `undefined
    | [@bs.as "search"] `undefined
    | [@bs.as "security"] `undefined
    | [@bs.as "select-all"] `undefined
    | [@bs.as "send"] `undefined
    | [@bs.as "sentiment-dissatisfied"] `undefined
    | [@bs.as "sentiment-neutral"] `undefined
    | [@bs.as "sentiment-satisfied"] `undefined
    | [@bs.as "sentiment-very-dissatisfied"] `undefined
    | [@bs.as "sentiment-very-satisfied"] `undefined
    | [@bs.as "settings"] `undefined
    | [@bs.as "settings-applications"] `undefined
    | [@bs.as "settings-backup-restore"] `undefined
    | [@bs.as "settings-bluetooth"] `undefined
    | [@bs.as "settings-brightness"] `undefined
    | [@bs.as "settings-cell"] `undefined
    | [@bs.as "settings-ethernet"] `undefined
    | [@bs.as "settings-input-antenna"] `undefined
    | [@bs.as "settings-input-component"] `undefined
    | [@bs.as "settings-input-composite"] `undefined
    | [@bs.as "settings-input-hdmi"] `undefined
    | [@bs.as "settings-input-svideo"] `undefined
    | [@bs.as "settings-overscan"] `undefined
    | [@bs.as "settings-phone"] `undefined
    | [@bs.as "settings-power"] `undefined
    | [@bs.as "settings-remote"] `undefined
    | [@bs.as "settings-system-daydream"] `undefined
    | [@bs.as "settings-voice"] `undefined
    | [@bs.as "share"] `undefined
    | [@bs.as "shop"] `undefined
    | [@bs.as "shop-two"] `undefined
    | [@bs.as "shopping-basket"] `undefined
    | [@bs.as "shopping-cart"] `undefined
    | [@bs.as "short-text"] `undefined
    | [@bs.as "show-chart"] `undefined
    | [@bs.as "shuffle"] `undefined
    | [@bs.as "signal-cellular-4-bar"] `undefined
    | [@bs.as "signal-cellular-connected-no-internet-4-bar"] `undefined
    | [@bs.as "signal-cellular-no-sim"] `undefined
    | [@bs.as "signal-cellular-null"] `undefined
    | [@bs.as "signal-cellular-off"] `undefined
    | [@bs.as "signal-wifi-4-bar"] `undefined
    | [@bs.as "signal-wifi-4-bar-lock"] `undefined
    | [@bs.as "signal-wifi-off"] `undefined
    | [@bs.as "sim-card"] `undefined
    | [@bs.as "sim-card-alert"] `undefined
    | [@bs.as "skip-next"] `undefined
    | [@bs.as "skip-previous"] `undefined
    | [@bs.as "slideshow"] `undefined
    | [@bs.as "slow-motion-video"] `undefined
    | [@bs.as "smartphone"] `undefined
    | [@bs.as "smoke-free"] `undefined
    | [@bs.as "smoking-rooms"] `undefined
    | [@bs.as "sms"] `undefined
    | [@bs.as "sms-failed"] `undefined
    | [@bs.as "snooze"] `undefined
    | [@bs.as "sort"] `undefined
    | [@bs.as "sort-by-alpha"] `undefined
    | [@bs.as "spa"] `undefined
    | [@bs.as "space-bar"] `undefined
    | [@bs.as "speaker"] `undefined
    | [@bs.as "speaker-group"] `undefined
    | [@bs.as "speaker-notes"] `undefined
    | [@bs.as "speaker-notes-off"] `undefined
    | [@bs.as "speaker-phone"] `undefined
    | [@bs.as "spellcheck"] `undefined
    | [@bs.as "star"] `undefined
    | [@bs.as "star-border"] `undefined
    | [@bs.as "star-half"] `undefined
    | [@bs.as "stars"] `undefined
    | [@bs.as "stay-current-landscape"] `undefined
    | [@bs.as "stay-current-portrait"] `undefined
    | [@bs.as "stay-primary-landscape"] `undefined
    | [@bs.as "stay-primary-portrait"] `undefined
    | [@bs.as "stop"] `undefined
    | [@bs.as "stop-screen-share"] `undefined
    | [@bs.as "storage"] `undefined
    | [@bs.as "store"] `undefined
    | [@bs.as "store-mall-directory"] `undefined
    | [@bs.as "straighten"] `undefined
    | [@bs.as "streetview"] `undefined
    | [@bs.as "strikethrough-s"] `undefined
    | [@bs.as "style"] `undefined
    | [@bs.as "subdirectory-arrow-left"] `undefined
    | [@bs.as "subdirectory-arrow-right"] `undefined
    | [@bs.as "subject"] `undefined
    | [@bs.as "subscriptions"] `undefined
    | [@bs.as "subtitles"] `undefined
    | [@bs.as "subway"] `undefined
    | [@bs.as "supervisor-account"] `undefined
    | [@bs.as "surround-sound"] `undefined
    | [@bs.as "swap-calls"] `undefined
    | [@bs.as "swap-horiz"] `undefined
    | [@bs.as "swap-vert"] `undefined
    | [@bs.as "swap-vertical-circle"] `undefined
    | [@bs.as "switch-camera"] `undefined
    | [@bs.as "switch-video"] `undefined
    | [@bs.as "sync"] `undefined
    | [@bs.as "sync-disabled"] `undefined
    | [@bs.as "sync-problem"] `undefined
    | [@bs.as "system-update"] `undefined
    | [@bs.as "system-update-alt"] `undefined
    | [@bs.as "tab"] `undefined
    | [@bs.as "tab-unselected"] `undefined
    | [@bs.as "tablet"] `undefined
    | [@bs.as "tablet-android"] `undefined
    | [@bs.as "tablet-mac"] `undefined
    | [@bs.as "tag-faces"] `undefined
    | [@bs.as "tap-and-play"] `undefined
    | [@bs.as "terrain"] `undefined
    | [@bs.as "text-fields"] `undefined
    | [@bs.as "text-format"] `undefined
    | [@bs.as "textsms"] `undefined
    | [@bs.as "texture"] `undefined
    | [@bs.as "theaters"] `undefined
    | [@bs.as "thumb-down"] `undefined
    | [@bs.as "thumb-up"] `undefined
    | [@bs.as "thumbs-up-down"] `undefined
    | [@bs.as "time-to-leave"] `undefined
    | [@bs.as "timelapse"] `undefined
    | [@bs.as "timeline"] `undefined
    | [@bs.as "timer"] `undefined
    | [@bs.as "timer-10"] `undefined
    | [@bs.as "timer-3"] `undefined
    | [@bs.as "timer-off"] `undefined
    | [@bs.as "title"] `undefined
    | [@bs.as "toc"] `undefined
    | [@bs.as "today"] `undefined
    | [@bs.as "toll"] `undefined
    | [@bs.as "tonality"] `undefined
    | [@bs.as "touch-app"] `undefined
    | [@bs.as "toys"] `undefined
    | [@bs.as "track-changes"] `undefined
    | [@bs.as "traffic"] `undefined
    | [@bs.as "train"] `undefined
    | [@bs.as "tram"] `undefined
    | [@bs.as "transfer-within-a-station"] `undefined
    | [@bs.as "transform"] `undefined
    | [@bs.as "translate"] `undefined
    | [@bs.as "trending-down"] `undefined
    | [@bs.as "trending-flat"] `undefined
    | [@bs.as "trending-up"] `undefined
    | [@bs.as "tune"] `undefined
    | [@bs.as "turned-in"] `undefined
    | [@bs.as "turned-in-not"] `undefined
    | [@bs.as "tv"] `undefined
    | [@bs.as "unarchive"] `undefined
    | [@bs.as "undo"] `undefined
    | [@bs.as "unfold-less"] `undefined
    | [@bs.as "unfold-more"] `undefined
    | [@bs.as "update"] `undefined
    | [@bs.as "usb"] `undefined
    | [@bs.as "verified-user"] `undefined
    | [@bs.as "vertical-align-bottom"] `undefined
    | [@bs.as "vertical-align-center"] `undefined
    | [@bs.as "vertical-align-top"] `undefined
    | [@bs.as "vibration"] `undefined
    | [@bs.as "video-call"] `undefined
    | [@bs.as "video-label"] `undefined
    | [@bs.as "video-library"] `undefined
    | [@bs.as "videocam"] `undefined
    | [@bs.as "videocam-off"] `undefined
    | [@bs.as "videogame-asset"] `undefined
    | [@bs.as "view-agenda"] `undefined
    | [@bs.as "view-array"] `undefined
    | [@bs.as "view-carousel"] `undefined
    | [@bs.as "view-column"] `undefined
    | [@bs.as "view-comfy"] `undefined
    | [@bs.as "view-compact"] `undefined
    | [@bs.as "view-day"] `undefined
    | [@bs.as "view-headline"] `undefined
    | [@bs.as "view-list"] `undefined
    | [@bs.as "view-module"] `undefined
    | [@bs.as "view-quilt"] `undefined
    | [@bs.as "view-stream"] `undefined
    | [@bs.as "view-week"] `undefined
    | [@bs.as "vignette"] `undefined
    | [@bs.as "visibility"] `undefined
    | [@bs.as "visibility-off"] `undefined
    | [@bs.as "voice-chat"] `undefined
    | [@bs.as "voicemail"] `undefined
    | [@bs.as "volume-down"] `undefined
    | [@bs.as "volume-mute"] `undefined
    | [@bs.as "volume-off"] `undefined
    | [@bs.as "volume-up"] `undefined
    | [@bs.as "vpn-key"] `undefined
    | [@bs.as "vpn-lock"] `undefined
    | [@bs.as "wallpaper"] `undefined
    | [@bs.as "warning"] `undefined
    | [@bs.as "watch"] `undefined
    | [@bs.as "watch-later"] `undefined
    | [@bs.as "wb-auto"] `undefined
    | [@bs.as "wb-cloudy"] `undefined
    | [@bs.as "wb-incandescent"] `undefined
    | [@bs.as "wb-iridescent"] `undefined
    | [@bs.as "wb-sunny"] `undefined
    | [@bs.as "wc"] `undefined
    | [@bs.as "web"] `undefined
    | [@bs.as "web-asset"] `undefined
    | [@bs.as "weekend"] `undefined
    | [@bs.as "whatshot"] `undefined
    | [@bs.as "widgets"] `undefined
    | [@bs.as "wifi"] `undefined
    | [@bs.as "wifi-lock"] `undefined
    | [@bs.as "wifi-tethering"] `undefined
    | [@bs.as "work"] `undefined
    | [@bs.as "wrap-text"] `undefined
    | [@bs.as "youtube-searched-for"] `undefined
    | [@bs.as "zoom-in"] `undefined
    | [@bs.as "zoom-out"] `undefined
    | [@bs.as "zoom-out-map"] `undefined
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