module Octicons = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "Octicons";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "alert"] `undefined
    | [@bs.as "archive"] `undefined
    | [@bs.as "arrow-down"] `undefined
    | [@bs.as "arrow-left"] `undefined
    | [@bs.as "arrow-right"] `undefined
    | [@bs.as "arrow-small-down"] `undefined
    | [@bs.as "arrow-small-left"] `undefined
    | [@bs.as "arrow-small-right"] `undefined
    | [@bs.as "arrow-small-up"] `undefined
    | [@bs.as "arrow-up"] `undefined
    | [@bs.as "beaker"] `undefined
    | [@bs.as "bell"] `undefined
    | [@bs.as "bold"] `undefined
    | [@bs.as "book"] `undefined
    | [@bs.as "bookmark"] `undefined
    | [@bs.as "briefcase"] `undefined
    | [@bs.as "broadcast"] `undefined
    | [@bs.as "browser"] `undefined
    | [@bs.as "bug"] `undefined
    | [@bs.as "calendar"] `undefined
    | [@bs.as "check"] `undefined
    | [@bs.as "checklist"] `undefined
    | [@bs.as "chevron-down"] `undefined
    | [@bs.as "chevron-left"] `undefined
    | [@bs.as "chevron-right"] `undefined
    | [@bs.as "chevron-up"] `undefined
    | [@bs.as "circle-slash"] `undefined
    | [@bs.as "circuit-board"] `undefined
    | [@bs.as "clippy"] `undefined
    | [@bs.as "clock"] `undefined
    | [@bs.as "cloud-download"] `undefined
    | [@bs.as "cloud-upload"] `undefined
    | [@bs.as "code"] `undefined
    | [@bs.as "comment"] `undefined
    | [@bs.as "comment-discussion"] `undefined
    | [@bs.as "credit-card"] `undefined
    | [@bs.as "dash"] `undefined
    | [@bs.as "dashboard"] `undefined
    | [@bs.as "database"] `undefined
    | [@bs.as "desktop-download"] `undefined
    | [@bs.as "device-camera"] `undefined
    | [@bs.as "device-camera-video"] `undefined
    | [@bs.as "device-desktop"] `undefined
    | [@bs.as "device-mobile"] `undefined
    | [@bs.as "diff"] `undefined
    | [@bs.as "diff-added"] `undefined
    | [@bs.as "diff-ignored"] `undefined
    | [@bs.as "diff-modified"] `undefined
    | [@bs.as "diff-removed"] `undefined
    | [@bs.as "diff-renamed"] `undefined
    | [@bs.as "ellipsis"] `undefined
    | [@bs.as "eye"] `undefined
    | [@bs.as "file"] `undefined
    | [@bs.as "file-binary"] `undefined
    | [@bs.as "file-code"] `undefined
    | [@bs.as "file-directory"] `undefined
    | [@bs.as "file-media"] `undefined
    | [@bs.as "file-pdf"] `undefined
    | [@bs.as "file-submodule"] `undefined
    | [@bs.as "file-symlink-directory"] `undefined
    | [@bs.as "file-symlink-file"] `undefined
    | [@bs.as "file-zip"] `undefined
    | [@bs.as "flame"] `undefined
    | [@bs.as "fold"] `undefined
    | [@bs.as "gear"] `undefined
    | [@bs.as "gift"] `undefined
    | [@bs.as "gist"] `undefined
    | [@bs.as "gist-secret"] `undefined
    | [@bs.as "git-branch"] `undefined
    | [@bs.as "git-commit"] `undefined
    | [@bs.as "git-compare"] `undefined
    | [@bs.as "git-merge"] `undefined
    | [@bs.as "git-pull-request"] `undefined
    | [@bs.as "globe"] `undefined
    | [@bs.as "grabber"] `undefined
    | [@bs.as "graph"] `undefined
    | [@bs.as "heart"] `undefined
    | [@bs.as "history"] `undefined
    | [@bs.as "home"] `undefined
    | [@bs.as "horizontal-rule"] `undefined
    | [@bs.as "hubot"] `undefined
    | [@bs.as "inbox"] `undefined
    | [@bs.as "info"] `undefined
    | [@bs.as "issue-closed"] `undefined
    | [@bs.as "issue-opened"] `undefined
    | [@bs.as "issue-reopened"] `undefined
    | [@bs.as "italic"] `undefined
    | [@bs.as "jersey"] `undefined
    | [@bs.as "kebab-horizontal"] `undefined
    | [@bs.as "kebab-vertical"] `undefined
    | [@bs.as "key"] `undefined
    | [@bs.as "keyboard"] `undefined
    | [@bs.as "law"] `undefined
    | [@bs.as "light-bulb"] `undefined
    | [@bs.as "link"] `undefined
    | [@bs.as "link-external"] `undefined
    | [@bs.as "list-ordered"] `undefined
    | [@bs.as "list-unordered"] `undefined
    | [@bs.as "location"] `undefined
    | [@bs.as "lock"] `undefined
    | [@bs.as "logo-gist"] `undefined
    | [@bs.as "logo-github"] `undefined
    | [@bs.as "mail"] `undefined
    | [@bs.as "mail-read"] `undefined
    | [@bs.as "mark-github"] `undefined
    | [@bs.as "markdown"] `undefined
    | [@bs.as "megaphone"] `undefined
    | [@bs.as "mention"] `undefined
    | [@bs.as "milestone"] `undefined
    | [@bs.as "mirror"] `undefined
    | [@bs.as "mortar-board"] `undefined
    | [@bs.as "mute"] `undefined
    | [@bs.as "no-newline"] `undefined
    | [@bs.as "note"] `undefined
    | [@bs.as "octoface"] `undefined
    | [@bs.as "organization"] `undefined
    | [@bs.as "package"] `undefined
    | [@bs.as "paintcan"] `undefined
    | [@bs.as "pencil"] `undefined
    | [@bs.as "person"] `undefined
    | [@bs.as "pin"] `undefined
    | [@bs.as "plug"] `undefined
    | [@bs.as "plus"] `undefined
    | [@bs.as "plus-small"] `undefined
    | [@bs.as "primitive-dot"] `undefined
    | [@bs.as "primitive-square"] `undefined
    | [@bs.as "project"] `undefined
    | [@bs.as "pulse"] `undefined
    | [@bs.as "question"] `undefined
    | [@bs.as "quote"] `undefined
    | [@bs.as "radio-tower"] `undefined
    | [@bs.as "reply"] `undefined
    | [@bs.as "repo"] `undefined
    | [@bs.as "repo-clone"] `undefined
    | [@bs.as "repo-force-push"] `undefined
    | [@bs.as "repo-forked"] `undefined
    | [@bs.as "repo-pull"] `undefined
    | [@bs.as "repo-push"] `undefined
    | [@bs.as "report"] `undefined
    | [@bs.as "rocket"] `undefined
    | [@bs.as "rss"] `undefined
    | [@bs.as "ruby"] `undefined
    | [@bs.as "screen-full"] `undefined
    | [@bs.as "screen-normal"] `undefined
    | [@bs.as "search"] `undefined
    | [@bs.as "server"] `undefined
    | [@bs.as "settings"] `undefined
    | [@bs.as "shield"] `undefined
    | [@bs.as "sign-in"] `undefined
    | [@bs.as "sign-out"] `undefined
    | [@bs.as "smiley"] `undefined
    | [@bs.as "squirrel"] `undefined
    | [@bs.as "star"] `undefined
    | [@bs.as "stop"] `undefined
    | [@bs.as "sync"] `undefined
    | [@bs.as "tag"] `undefined
    | [@bs.as "tasklist"] `undefined
    | [@bs.as "telescope"] `undefined
    | [@bs.as "terminal"] `undefined
    | [@bs.as "text-size"] `undefined
    | [@bs.as "three-bars"] `undefined
    | [@bs.as "thumbsdown"] `undefined
    | [@bs.as "thumbsup"] `undefined
    | [@bs.as "tools"] `undefined
    | [@bs.as "trashcan"] `undefined
    | [@bs.as "triangle-down"] `undefined
    | [@bs.as "triangle-left"] `undefined
    | [@bs.as "triangle-right"] `undefined
    | [@bs.as "triangle-up"] `undefined
    | [@bs.as "unfold"] `undefined
    | [@bs.as "unmute"] `undefined
    | [@bs.as "unverified"] `undefined
    | [@bs.as "verified"] `undefined
    | [@bs.as "versions"] `undefined
    | [@bs.as "watch"] `undefined
    | [@bs.as "x"] `undefined
    | [@bs.as "zap"] `undefined
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