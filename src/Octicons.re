module Octicons = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "Octicons";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "alert"] `alert
    | [@bs.as "archive"] `archive
    | [@bs.as "arrow-down"] `arrowDown
    | [@bs.as "arrow-left"] `arrowLeft
    | [@bs.as "arrow-right"] `arrowRight
    | [@bs.as "arrow-small-down"] `arrowSmallDown
    | [@bs.as "arrow-small-left"] `arrowSmallLeft
    | [@bs.as "arrow-small-right"] `arrowSmallRight
    | [@bs.as "arrow-small-up"] `arrowSmallUp
    | [@bs.as "arrow-up"] `arrowUp
    | [@bs.as "beaker"] `beaker
    | [@bs.as "bell"] `bell
    | [@bs.as "bold"] `bold
    | [@bs.as "book"] `book
    | [@bs.as "bookmark"] `bookmark
    | [@bs.as "briefcase"] `briefcase
    | [@bs.as "broadcast"] `broadcast
    | [@bs.as "browser"] `browser
    | [@bs.as "bug"] `bug
    | [@bs.as "calendar"] `calendar
    | [@bs.as "check"] `check
    | [@bs.as "checklist"] `checklist
    | [@bs.as "chevron-down"] `chevronDown
    | [@bs.as "chevron-left"] `chevronLeft
    | [@bs.as "chevron-right"] `chevronRight
    | [@bs.as "chevron-up"] `chevronUp
    | [@bs.as "circle-slash"] `circleSlash
    | [@bs.as "circuit-board"] `circuitBoard
    | [@bs.as "clippy"] `clippy
    | [@bs.as "clock"] `clock
    | [@bs.as "cloud-download"] `cloudDownload
    | [@bs.as "cloud-upload"] `cloudUpload
    | [@bs.as "code"] `code
    | [@bs.as "comment"] `comment
    | [@bs.as "comment-discussion"] `commentDiscussion
    | [@bs.as "credit-card"] `creditCard
    | [@bs.as "dash"] `dash
    | [@bs.as "dashboard"] `dashboard
    | [@bs.as "database"] `database
    | [@bs.as "desktop-download"] `desktopDownload
    | [@bs.as "device-camera"] `deviceCamera
    | [@bs.as "device-camera-video"] `deviceCameraVideo
    | [@bs.as "device-desktop"] `deviceDesktop
    | [@bs.as "device-mobile"] `deviceMobile
    | [@bs.as "diff"] `diff
    | [@bs.as "diff-added"] `diffAdded
    | [@bs.as "diff-ignored"] `diffIgnored
    | [@bs.as "diff-modified"] `diffModified
    | [@bs.as "diff-removed"] `diffRemoved
    | [@bs.as "diff-renamed"] `diffRenamed
    | [@bs.as "ellipsis"] `ellipsis
    | [@bs.as "eye"] `eye
    | [@bs.as "file"] `file
    | [@bs.as "file-binary"] `fileBinary
    | [@bs.as "file-code"] `fileCode
    | [@bs.as "file-directory"] `fileDirectory
    | [@bs.as "file-media"] `fileMedia
    | [@bs.as "file-pdf"] `filePdf
    | [@bs.as "file-submodule"] `fileSubmodule
    | [@bs.as "file-symlink-directory"] `fileSymlinkDirectory
    | [@bs.as "file-symlink-file"] `fileSymlinkFile
    | [@bs.as "file-zip"] `fileZip
    | [@bs.as "flame"] `flame
    | [@bs.as "fold"] `fold
    | [@bs.as "gear"] `gear
    | [@bs.as "gift"] `gift
    | [@bs.as "gist"] `gist
    | [@bs.as "gist-secret"] `gistSecret
    | [@bs.as "git-branch"] `gitBranch
    | [@bs.as "git-commit"] `gitCommit
    | [@bs.as "git-compare"] `gitCompare
    | [@bs.as "git-merge"] `gitMerge
    | [@bs.as "git-pull-request"] `gitPullRequest
    | [@bs.as "globe"] `globe
    | [@bs.as "grabber"] `grabber
    | [@bs.as "graph"] `graph
    | [@bs.as "heart"] `heart
    | [@bs.as "history"] `history
    | [@bs.as "home"] `home
    | [@bs.as "horizontal-rule"] `horizontalRule
    | [@bs.as "hubot"] `hubot
    | [@bs.as "inbox"] `inbox
    | [@bs.as "info"] `info
    | [@bs.as "issue-closed"] `issueClosed
    | [@bs.as "issue-opened"] `issueOpened
    | [@bs.as "issue-reopened"] `issueReopened
    | [@bs.as "italic"] `italic
    | [@bs.as "jersey"] `jersey
    | [@bs.as "kebab-horizontal"] `kebabHorizontal
    | [@bs.as "kebab-vertical"] `kebabVertical
    | [@bs.as "key"] `key
    | [@bs.as "keyboard"] `keyboard
    | [@bs.as "law"] `law
    | [@bs.as "light-bulb"] `lightBulb
    | [@bs.as "link"] `link
    | [@bs.as "link-external"] `linkExternal
    | [@bs.as "list-ordered"] `listOrdered
    | [@bs.as "list-unordered"] `listUnordered
    | [@bs.as "location"] `location
    | [@bs.as "lock"] `lock
    | [@bs.as "logo-gist"] `logoGist
    | [@bs.as "logo-github"] `logoGithub
    | [@bs.as "mail"] `mail
    | [@bs.as "mail-read"] `mailRead
    | [@bs.as "mark-github"] `markGithub
    | [@bs.as "markdown"] `markdown
    | [@bs.as "megaphone"] `megaphone
    | [@bs.as "mention"] `mention
    | [@bs.as "milestone"] `milestone
    | [@bs.as "mirror"] `mirror
    | [@bs.as "mortar-board"] `mortarBoard
    | [@bs.as "mute"] `mute
    | [@bs.as "no-newline"] `noNewline
    | [@bs.as "note"] `note
    | [@bs.as "octoface"] `octoface
    | [@bs.as "organization"] `organization
    | [@bs.as "package"] `package
    | [@bs.as "paintcan"] `paintcan
    | [@bs.as "pencil"] `pencil
    | [@bs.as "person"] `person
    | [@bs.as "pin"] `pin
    | [@bs.as "plug"] `plug
    | [@bs.as "plus"] `plus
    | [@bs.as "plus-small"] `plusSmall
    | [@bs.as "primitive-dot"] `primitiveDot
    | [@bs.as "primitive-square"] `primitiveSquare
    | [@bs.as "project"] `project
    | [@bs.as "pulse"] `pulse
    | [@bs.as "question"] `question
    | [@bs.as "quote"] `quote
    | [@bs.as "radio-tower"] `radioTower
    | [@bs.as "reply"] `reply
    | [@bs.as "repo"] `repo
    | [@bs.as "repo-clone"] `repoClone
    | [@bs.as "repo-force-push"] `repoForcePush
    | [@bs.as "repo-forked"] `repoForked
    | [@bs.as "repo-pull"] `repoPull
    | [@bs.as "repo-push"] `repoPush
    | [@bs.as "report"] `report
    | [@bs.as "rocket"] `rocket
    | [@bs.as "rss"] `rss
    | [@bs.as "ruby"] `ruby
    | [@bs.as "screen-full"] `screenFull
    | [@bs.as "screen-normal"] `screenNormal
    | [@bs.as "search"] `search
    | [@bs.as "server"] `server
    | [@bs.as "settings"] `settings
    | [@bs.as "shield"] `shield
    | [@bs.as "sign-in"] `signIn
    | [@bs.as "sign-out"] `signOut
    | [@bs.as "smiley"] `smiley
    | [@bs.as "squirrel"] `squirrel
    | [@bs.as "star"] `star
    | [@bs.as "stop"] `stop
    | [@bs.as "sync"] `sync
    | [@bs.as "tag"] `tag
    | [@bs.as "tasklist"] `tasklist
    | [@bs.as "telescope"] `telescope
    | [@bs.as "terminal"] `terminal
    | [@bs.as "text-size"] `textSize
    | [@bs.as "three-bars"] `threeBars
    | [@bs.as "thumbsdown"] `thumbsdown
    | [@bs.as "thumbsup"] `thumbsup
    | [@bs.as "tools"] `tools
    | [@bs.as "trashcan"] `trashcan
    | [@bs.as "triangle-down"] `triangleDown
    | [@bs.as "triangle-left"] `triangleLeft
    | [@bs.as "triangle-right"] `triangleRight
    | [@bs.as "triangle-up"] `triangleUp
    | [@bs.as "unfold"] `unfold
    | [@bs.as "unmute"] `unmute
    | [@bs.as "unverified"] `unverified
    | [@bs.as "verified"] `verified
    | [@bs.as "versions"] `versions
    | [@bs.as "watch"] `watch
    | [@bs.as "x"] `x
    | [@bs.as "zap"] `zap
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
      ~name=`alert,
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