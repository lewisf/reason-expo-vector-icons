module AntDesign = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "AntDesign";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "stepforward"] `undefined
    | [@bs.as "stepbackward"] `undefined
    | [@bs.as "forward"] `undefined
    | [@bs.as "banckward"] `undefined
    | [@bs.as "caretright"] `undefined
    | [@bs.as "caretleft"] `undefined
    | [@bs.as "caretdown"] `undefined
    | [@bs.as "caretup"] `undefined
    | [@bs.as "rightcircle"] `undefined
    | [@bs.as "leftcircle"] `undefined
    | [@bs.as "upcircle"] `undefined
    | [@bs.as "downcircle"] `undefined
    | [@bs.as "rightcircleo"] `undefined
    | [@bs.as "leftcircleo"] `undefined
    | [@bs.as "upcircleo"] `undefined
    | [@bs.as "downcircleo"] `undefined
    | [@bs.as "verticleleft"] `undefined
    | [@bs.as "verticleright"] `undefined
    | [@bs.as "back"] `undefined
    | [@bs.as "retweet"] `undefined
    | [@bs.as "shrink"] `undefined
    | [@bs.as "arrowsalt"] `undefined
    | [@bs.as "doubleright"] `undefined
    | [@bs.as "doubleleft"] `undefined
    | [@bs.as "arrowdown"] `undefined
    | [@bs.as "arrowup"] `undefined
    | [@bs.as "arrowright"] `undefined
    | [@bs.as "arrowleft"] `undefined
    | [@bs.as "down"] `undefined
    | [@bs.as "up"] `undefined
    | [@bs.as "right"] `undefined
    | [@bs.as "left"] `undefined
    | [@bs.as "minussquareo"] `undefined
    | [@bs.as "minuscircle"] `undefined
    | [@bs.as "minuscircleo"] `undefined
    | [@bs.as "minus"] `undefined
    | [@bs.as "pluscircleo"] `undefined
    | [@bs.as "pluscircle"] `undefined
    | [@bs.as "plus"] `undefined
    | [@bs.as "infocirlce"] `undefined
    | [@bs.as "infocirlceo"] `undefined
    | [@bs.as "info"] `undefined
    | [@bs.as "exclamation"] `undefined
    | [@bs.as "exclamationcircle"] `undefined
    | [@bs.as "exclamationcircleo"] `undefined
    | [@bs.as "closecircle"] `undefined
    | [@bs.as "closecircleo"] `undefined
    | [@bs.as "checkcircle"] `undefined
    | [@bs.as "checkcircleo"] `undefined
    | [@bs.as "check"] `undefined
    | [@bs.as "close"] `undefined
    | [@bs.as "customerservice"] `undefined
    | [@bs.as "creditcard"] `undefined
    | [@bs.as "codesquareo"] `undefined
    | [@bs.as "book"] `undefined
    | [@bs.as "barschart"] `undefined
    | [@bs.as "bars"] `undefined
    | [@bs.as "question"] `undefined
    | [@bs.as "questioncircle"] `undefined
    | [@bs.as "questioncircleo"] `undefined
    | [@bs.as "pause"] `undefined
    | [@bs.as "pausecircle"] `undefined
    | [@bs.as "pausecircleo"] `undefined
    | [@bs.as "clockcircle"] `undefined
    | [@bs.as "clockcircleo"] `undefined
    | [@bs.as "swap"] `undefined
    | [@bs.as "swapleft"] `undefined
    | [@bs.as "swapright"] `undefined
    | [@bs.as "plussquareo"] `undefined
    | [@bs.as "frown"] `undefined
    | [@bs.as "menufold"] `undefined
    | [@bs.as "mail"] `undefined
    | [@bs.as "link"] `undefined
    | [@bs.as "areachart"] `undefined
    | [@bs.as "linechart"] `undefined
    | [@bs.as "home"] `undefined
    | [@bs.as "laptop"] `undefined
    | [@bs.as "star"] `undefined
    | [@bs.as "staro"] `undefined
    | [@bs.as "filter"] `undefined
    | [@bs.as "meho"] `undefined
    | [@bs.as "meh"] `undefined
    | [@bs.as "shoppingcart"] `undefined
    | [@bs.as "save"] `undefined
    | [@bs.as "user"] `undefined
    | [@bs.as "videocamera"] `undefined
    | [@bs.as "totop"] `undefined
    | [@bs.as "team"] `undefined
    | [@bs.as "sharealt"] `undefined
    | [@bs.as "setting"] `undefined
    | [@bs.as "picture"] `undefined
    | [@bs.as "phone"] `undefined
    | [@bs.as "paperclip"] `undefined
    | [@bs.as "notification"] `undefined
    | [@bs.as "menuunfold"] `undefined
    | [@bs.as "inbox"] `undefined
    | [@bs.as "lock"] `undefined
    | [@bs.as "qrcode"] `undefined
    | [@bs.as "tags"] `undefined
    | [@bs.as "tagso"] `undefined
    | [@bs.as "cloudo"] `undefined
    | [@bs.as "cloud"] `undefined
    | [@bs.as "cloudupload"] `undefined
    | [@bs.as "clouddownload"] `undefined
    | [@bs.as "clouddownloado"] `undefined
    | [@bs.as "clouduploado"] `undefined
    | [@bs.as "enviroment"] `undefined
    | [@bs.as "enviromento"] `undefined
    | [@bs.as "eye"] `undefined
    | [@bs.as "eyeo"] `undefined
    | [@bs.as "camera"] `undefined
    | [@bs.as "camerao"] `undefined
    | [@bs.as "windows"] `undefined
    | [@bs.as "export2"] `undefined
    | [@bs.as "export"] `undefined
    | [@bs.as "circledowno"] `undefined
    | [@bs.as "circledown"] `undefined
    | [@bs.as "hdd"] `undefined
    | [@bs.as "ie"] `undefined
    | [@bs.as "delete"] `undefined
    | [@bs.as "enter"] `undefined
    | [@bs.as "pushpino"] `undefined
    | [@bs.as "pushpin"] `undefined
    | [@bs.as "heart"] `undefined
    | [@bs.as "hearto"] `undefined
    | [@bs.as "smile-circle"] `undefined
    | [@bs.as "smileo"] `undefined
    | [@bs.as "frowno"] `undefined
    | [@bs.as "calculator"] `undefined
    | [@bs.as "chrome"] `undefined
    | [@bs.as "github"] `undefined
    | [@bs.as "iconfontdesktop"] `undefined
    | [@bs.as "caretcircleoup"] `undefined
    | [@bs.as "upload"] `undefined
    | [@bs.as "download"] `undefined
    | [@bs.as "piechart"] `undefined
    | [@bs.as "lock1"] `undefined
    | [@bs.as "unlock"] `undefined
    | [@bs.as "windowso"] `undefined
    | [@bs.as "dotchart"] `undefined
    | [@bs.as "barchart"] `undefined
    | [@bs.as "codesquare"] `undefined
    | [@bs.as "plussquare"] `undefined
    | [@bs.as "minussquare"] `undefined
    | [@bs.as "closesquare"] `undefined
    | [@bs.as "closesquareo"] `undefined
    | [@bs.as "checksquare"] `undefined
    | [@bs.as "checksquareo"] `undefined
    | [@bs.as "fastbackward"] `undefined
    | [@bs.as "fastforward"] `undefined
    | [@bs.as "upsquare"] `undefined
    | [@bs.as "downsquare"] `undefined
    | [@bs.as "leftsquare"] `undefined
    | [@bs.as "rightsquare"] `undefined
    | [@bs.as "rightsquareo"] `undefined
    | [@bs.as "leftsquareo"] `undefined
    | [@bs.as "down-square-o"] `undefined
    | [@bs.as "up-square-o"] `undefined
    | [@bs.as "play"] `undefined
    | [@bs.as "playcircleo"] `undefined
    | [@bs.as "tag"] `undefined
    | [@bs.as "tago"] `undefined
    | [@bs.as "addfile"] `undefined
    | [@bs.as "folder1"] `undefined
    | [@bs.as "file1"] `undefined
    | [@bs.as "switcher"] `undefined
    | [@bs.as "addfolder"] `undefined
    | [@bs.as "folderopen"] `undefined
    | [@bs.as "search1"] `undefined
    | [@bs.as "ellipsis1"] `undefined
    | [@bs.as "calendar"] `undefined
    | [@bs.as "filetext1"] `undefined
    | [@bs.as "copy1"] `undefined
    | [@bs.as "jpgfile1"] `undefined
    | [@bs.as "pdffile1"] `undefined
    | [@bs.as "exclefile1"] `undefined
    | [@bs.as "pptfile1"] `undefined
    | [@bs.as "unknowfile1"] `undefined
    | [@bs.as "wordfile1"] `undefined
    | [@bs.as "dingding"] `undefined
    | [@bs.as "dingding-o"] `undefined
    | [@bs.as "mobile1"] `undefined
    | [@bs.as "tablet1"] `undefined
    | [@bs.as "bells"] `undefined
    | [@bs.as "disconnect"] `undefined
    | [@bs.as "database"] `undefined
    | [@bs.as "barcode"] `undefined
    | [@bs.as "hourglass"] `undefined
    | [@bs.as "key"] `undefined
    | [@bs.as "flag"] `undefined
    | [@bs.as "layout"] `undefined
    | [@bs.as "printer"] `undefined
    | [@bs.as "USB"] `undefined
    | [@bs.as "skin"] `undefined
    | [@bs.as "tool"] `undefined
    | [@bs.as "car"] `undefined
    | [@bs.as "addusergroup"] `undefined
    | [@bs.as "carryout"] `undefined
    | [@bs.as "deleteuser"] `undefined
    | [@bs.as "deleteusergroup"] `undefined
    | [@bs.as "man"] `undefined
    | [@bs.as "isv"] `undefined
    | [@bs.as "gift"] `undefined
    | [@bs.as "idcard"] `undefined
    | [@bs.as "medicinebox"] `undefined
    | [@bs.as "redenvelopes"] `undefined
    | [@bs.as "rest"] `undefined
    | [@bs.as "Safety"] `undefined
    | [@bs.as "wallet"] `undefined
    | [@bs.as "woman"] `undefined
    | [@bs.as "adduser"] `undefined
    | [@bs.as "bank"] `undefined
    | [@bs.as "Trophy"] `undefined
    | [@bs.as "loading1"] `undefined
    | [@bs.as "loading2"] `undefined
    | [@bs.as "like2"] `undefined
    | [@bs.as "dislike2"] `undefined
    | [@bs.as "like1"] `undefined
    | [@bs.as "dislike1"] `undefined
    | [@bs.as "bulb1"] `undefined
    | [@bs.as "rocket1"] `undefined
    | [@bs.as "select1"] `undefined
    | [@bs.as "apple1"] `undefined
    | [@bs.as "apple-o"] `undefined
    | [@bs.as "android1"] `undefined
    | [@bs.as "android"] `undefined
    | [@bs.as "aliwangwang-o1"] `undefined
    | [@bs.as "aliwangwang"] `undefined
    | [@bs.as "pay-circle1"] `undefined
    | [@bs.as "pay-circle-o1"] `undefined
    | [@bs.as "poweroff"] `undefined
    | [@bs.as "trademark"] `undefined
    | [@bs.as "find"] `undefined
    | [@bs.as "copyright"] `undefined
    | [@bs.as "sound"] `undefined
    | [@bs.as "earth"] `undefined
    | [@bs.as "wifi"] `undefined
    | [@bs.as "sync"] `undefined
    | [@bs.as "login"] `undefined
    | [@bs.as "logout"] `undefined
    | [@bs.as "reload1"] `undefined
    | [@bs.as "message1"] `undefined
    | [@bs.as "shake"] `undefined
    | [@bs.as "API"] `undefined
    | [@bs.as "appstore-o"] `undefined
    | [@bs.as "appstore1"] `undefined
    | [@bs.as "scan1"] `undefined
    | [@bs.as "exception1"] `undefined
    | [@bs.as "contacts"] `undefined
    | [@bs.as "solution1"] `undefined
    | [@bs.as "fork"] `undefined
    | [@bs.as "edit"] `undefined
    | [@bs.as "form"] `undefined
    | [@bs.as "warning"] `undefined
    | [@bs.as "table"] `undefined
    | [@bs.as "profile"] `undefined
    | [@bs.as "dashboard"] `undefined
    | [@bs.as "indent-left"] `undefined
    | [@bs.as "indent-right"] `undefined
    | [@bs.as "menu-unfold"] `undefined
    | [@bs.as "menu-fold"] `undefined
    | [@bs.as "antdesign"] `undefined
    | [@bs.as "alipay-square"] `undefined
    | [@bs.as "codepen-circle"] `undefined
    | [@bs.as "google"] `undefined
    | [@bs.as "amazon"] `undefined
    | [@bs.as "codepen"] `undefined
    | [@bs.as "facebook-square"] `undefined
    | [@bs.as "dropbox"] `undefined
    | [@bs.as "googleplus"] `undefined
    | [@bs.as "linkedin-square"] `undefined
    | [@bs.as "medium-monogram"] `undefined
    | [@bs.as "gitlab"] `undefined
    | [@bs.as "medium-wordmark"] `undefined
    | [@bs.as "QQ"] `undefined
    | [@bs.as "skype"] `undefined
    | [@bs.as "taobao-square"] `undefined
    | [@bs.as "alipay-circle"] `undefined
    | [@bs.as "youtube"] `undefined
    | [@bs.as "wechat"] `undefined
    | [@bs.as "twitter"] `undefined
    | [@bs.as "weibo"] `undefined
    | [@bs.as "HTML"] `undefined
    | [@bs.as "taobao-circle"] `undefined
    | [@bs.as "weibo-circle"] `undefined
    | [@bs.as "weibo-square"] `undefined
    | [@bs.as "CodeSandbox"] `undefined
    | [@bs.as "aliyun"] `undefined
    | [@bs.as "zhihu"] `undefined
    | [@bs.as "behance"] `undefined
    | [@bs.as "dribbble"] `undefined
    | [@bs.as "dribbble-square"] `undefined
    | [@bs.as "behance-square"] `undefined
    | [@bs.as "file-markdown"] `undefined
    | [@bs.as "instagram"] `undefined
    | [@bs.as "yuque"] `undefined
    | [@bs.as "slack"] `undefined
    | [@bs.as "slack-square"] `undefined
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