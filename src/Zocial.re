module Zocial = {
  [@bs.module ("@expo/vector-icons", "Zocial")] [@react.component]
  external make:
    (
      ~name: [@bs.string] [
               | [@bs.as "acrobat"] `acrobat
               | [@bs.as "amazon"] `amazon
               | [@bs.as "android"] `android
               | [@bs.as "angellist"] `angellist
               | [@bs.as "aol"] `aol
               | [@bs.as "appnet"] `appnet
               | [@bs.as "appstore"] `appstore
               | [@bs.as "bitbucket"] `bitbucket
               | [@bs.as "bitcoin"] `bitcoin
               | [@bs.as "blogger"] `blogger
               | [@bs.as "buffer"] `buffer
               | [@bs.as "cal"] `cal
               | [@bs.as "call"] `call
               | [@bs.as "cart"] `cart
               | [@bs.as "chrome"] `chrome
               | [@bs.as "cloudapp"] `cloudapp
               | [@bs.as "creativecommons"] `creativecommons
               | [@bs.as "delicious"] `delicious
               | [@bs.as "digg"] `digg
               | [@bs.as "disqus"] `disqus
               | [@bs.as "dribbble"] `dribbble
               | [@bs.as "dropbox"] `dropbox
               | [@bs.as "drupal"] `drupal
               | [@bs.as "dwolla"] `dwolla
               | [@bs.as "email"] `email
               | [@bs.as "eventasaurus"] `eventasaurus
               | [@bs.as "eventbrite"] `eventbrite
               | [@bs.as "eventful"] `eventful
               | [@bs.as "evernote"] `evernote
               | [@bs.as "facebook"] `facebook
               | [@bs.as "fivehundredpx"] `fivehundredpx
               | [@bs.as "flattr"] `flattr
               | [@bs.as "flickr"] `flickr
               | [@bs.as "forrst"] `forrst
               | [@bs.as "foursquare"] `foursquare
               | [@bs.as "github"] `github
               | [@bs.as "gmail"] `gmail
               | [@bs.as "google"] `google
               | [@bs.as "googleplay"] `googleplay
               | [@bs.as "googleplus"] `googleplus
               | [@bs.as "gowalla"] `gowalla
               | [@bs.as "grooveshark"] `grooveshark
               | [@bs.as "guest"] `guest
               | [@bs.as "html5"] `html5
               | [@bs.as "ie"] `ie
               | [@bs.as "instagram"] `instagram
               | [@bs.as "instapaper"] `instapaper
               | [@bs.as "intensedebate"] `intensedebate
               | [@bs.as "itunes"] `itunes
               | [@bs.as "klout"] `klout
               | [@bs.as "lanyrd"] `lanyrd
               | [@bs.as "lastfm"] `lastfm
               | [@bs.as "lego"] `lego
               | [@bs.as "linkedin"] `linkedin
               | [@bs.as "lkdto"] `lkdto
               | [@bs.as "logmein"] `logmein
               | [@bs.as "macstore"] `macstore
               | [@bs.as "meetup"] `meetup
               | [@bs.as "myspace"] `myspace
               | [@bs.as "ninetyninedesigns"] `ninetyninedesigns
               | [@bs.as "openid"] `openid
               | [@bs.as "opentable"] `opentable
               | [@bs.as "paypal"] `paypal
               | [@bs.as "persona"] `persona
               | [@bs.as "pinboard"] `pinboard
               | [@bs.as "pinterest"] `pinterest
               | [@bs.as "plancast"] `plancast
               | [@bs.as "plurk"] `plurk
               | [@bs.as "pocket"] `pocket
               | [@bs.as "podcast"] `podcast
               | [@bs.as "posterous"] `posterous
               | [@bs.as "print"] `print
               | [@bs.as "quora"] `quora
               | [@bs.as "reddit"] `reddit
               | [@bs.as "rss"] `rss
               | [@bs.as "scribd"] `scribd
               | [@bs.as "skype"] `skype
               | [@bs.as "smashing"] `smashing
               | [@bs.as "songkick"] `songkick
               | [@bs.as "soundcloud"] `soundcloud
               | [@bs.as "spotify"] `spotify
               | [@bs.as "stackoverflow"] `stackoverflow
               | [@bs.as "statusnet"] `statusnet
               | [@bs.as "steam"] `steam
               | [@bs.as "stripe"] `stripe
               | [@bs.as "stumbleupon"] `stumbleupon
               | [@bs.as "tumblr"] `tumblr
               | [@bs.as "twitter"] `twitter
               | [@bs.as "viadeo"] `viadeo
               | [@bs.as "vimeo"] `vimeo
               | [@bs.as "vk"] `vk
               | [@bs.as "weibo"] `weibo
               | [@bs.as "wikipedia"] `wikipedia
               | [@bs.as "windows"] `windows
               | [@bs.as "wordpress"] `wordpress
               | [@bs.as "xing"] `xing
               | [@bs.as "yahoo"] `yahoo
               | [@bs.as "ycombinator"] `ycombinator
               | [@bs.as "yelp"] `yelp
               | [@bs.as "youtube"] `youtube
             ],
      ~size: int,
      ~color: string,
      ~style: ReactNative.Style.t=?
    ) =>
    React.element =
    "Zocial";
};
