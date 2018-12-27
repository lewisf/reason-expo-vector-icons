open BsReactNative;
open ReasonExpoVectorIcons;

let component = ReasonReact.statelessComponent("App");

module Styles = {
  open Style;
  let container =
    style([flex(1.), alignItems(Center), justifyContent(Center)]);
  let profileContainer =
    style([backgroundColor(String("rgb(76, 217, 100)"))]);
  let infoContainer = style([backgroundColor(String("rgb(90, 200, 250)"))]);
  let settingsContainer =
    style([backgroundColor(String("rgb(255, 149, 0)"))]);

  let title = style([fontSize(Float(30.))]);
};

let make = _children => {
  ...component,
  render: _self =>
    <SafeAreaView
      style={StyleSheet.flatten([Styles.container, Styles.profileContainer])}>
      <View>
        <Text style=Styles.title> {ReasonReact.string("Profile")} </Text>
        <Ionicons name=`iosAddCircle size=12 />
      </View>
    </SafeAreaView>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));