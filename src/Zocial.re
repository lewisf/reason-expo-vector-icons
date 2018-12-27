module Zocial = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "Zocial";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "acrobat"] `undefined
    | [@bs.as "amazon"] `undefined
    | [@bs.as "android"] `undefined
    | [@bs.as "angellist"] `undefined
    | [@bs.as "aol"] `undefined
    | [@bs.as "appnet"] `undefined
    | [@bs.as "appstore"] `undefined
    | [@bs.as "bitbucket"] `undefined
    | [@bs.as "bitcoin"] `undefined
    | [@bs.as "blogger"] `undefined
    | [@bs.as "buffer"] `undefined
    | [@bs.as "cal"] `undefined
    | [@bs.as "call"] `undefined
    | [@bs.as "cart"] `undefined
    | [@bs.as "chrome"] `undefined
    | [@bs.as "cloudapp"] `undefined
    | [@bs.as "creativecommons"] `undefined
    | [@bs.as "delicious"] `undefined
    | [@bs.as "digg"] `undefined
    | [@bs.as "disqus"] `undefined
    | [@bs.as "dribbble"] `undefined
    | [@bs.as "dropbox"] `undefined
    | [@bs.as "drupal"] `undefined
    | [@bs.as "dwolla"] `undefined
    | [@bs.as "email"] `undefined
    | [@bs.as "eventasaurus"] `undefined
    | [@bs.as "eventbrite"] `undefined
    | [@bs.as "eventful"] `undefined
    | [@bs.as "evernote"] `undefined
    | [@bs.as "facebook"] `undefined
    | [@bs.as "fivehundredpx"] `undefined
    | [@bs.as "flattr"] `undefined
    | [@bs.as "flickr"] `undefined
    | [@bs.as "forrst"] `undefined
    | [@bs.as "foursquare"] `undefined
    | [@bs.as "github"] `undefined
    | [@bs.as "gmail"] `undefined
    | [@bs.as "google"] `undefined
    | [@bs.as "googleplay"] `undefined
    | [@bs.as "googleplus"] `undefined
    | [@bs.as "gowalla"] `undefined
    | [@bs.as "grooveshark"] `undefined
    | [@bs.as "guest"] `undefined
    | [@bs.as "html5"] `undefined
    | [@bs.as "ie"] `undefined
    | [@bs.as "instagram"] `undefined
    | [@bs.as "instapaper"] `undefined
    | [@bs.as "intensedebate"] `undefined
    | [@bs.as "itunes"] `undefined
    | [@bs.as "klout"] `undefined
    | [@bs.as "lanyrd"] `undefined
    | [@bs.as "lastfm"] `undefined
    | [@bs.as "lego"] `undefined
    | [@bs.as "linkedin"] `undefined
    | [@bs.as "lkdto"] `undefined
    | [@bs.as "logmein"] `undefined
    | [@bs.as "macstore"] `undefined
    | [@bs.as "meetup"] `undefined
    | [@bs.as "myspace"] `undefined
    | [@bs.as "ninetyninedesigns"] `undefined
    | [@bs.as "openid"] `undefined
    | [@bs.as "opentable"] `undefined
    | [@bs.as "paypal"] `undefined
    | [@bs.as "persona"] `undefined
    | [@bs.as "pinboard"] `undefined
    | [@bs.as "pinterest"] `undefined
    | [@bs.as "plancast"] `undefined
    | [@bs.as "plurk"] `undefined
    | [@bs.as "pocket"] `undefined
    | [@bs.as "podcast"] `undefined
    | [@bs.as "posterous"] `undefined
    | [@bs.as "print"] `undefined
    | [@bs.as "quora"] `undefined
    | [@bs.as "reddit"] `undefined
    | [@bs.as "rss"] `undefined
    | [@bs.as "scribd"] `undefined
    | [@bs.as "skype"] `undefined
    | [@bs.as "smashing"] `undefined
    | [@bs.as "songkick"] `undefined
    | [@bs.as "soundcloud"] `undefined
    | [@bs.as "spotify"] `undefined
    | [@bs.as "stackoverflow"] `undefined
    | [@bs.as "statusnet"] `undefined
    | [@bs.as "steam"] `undefined
    | [@bs.as "stripe"] `undefined
    | [@bs.as "stumbleupon"] `undefined
    | [@bs.as "tumblr"] `undefined
    | [@bs.as "twitter"] `undefined
    | [@bs.as "viadeo"] `undefined
    | [@bs.as "vimeo"] `undefined
    | [@bs.as "vk"] `undefined
    | [@bs.as "weibo"] `undefined
    | [@bs.as "wikipedia"] `undefined
    | [@bs.as "windows"] `undefined
    | [@bs.as "wordpress"] `undefined
    | [@bs.as "xing"] `undefined
    | [@bs.as "yahoo"] `undefined
    | [@bs.as "ycombinator"] `undefined
    | [@bs.as "yelp"] `undefined
    | [@bs.as "youtube"] `undefined
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