open BsReactNative;
module Icons = ReasonExpoVectorIcons;

let component = ReasonReact.statelessComponent("App");

module Styles = {
  open Style;
  let container =
    style([flex(1.), alignItems(Center), justifyContent(Center)]);
  let profileContainer =
    style([backgroundColor(String("rgb(76, 217, 100)"))]);
};

let make = _children => {
  ...component,
  render: _self =>
    <SafeAreaView
      style={StyleSheet.flatten([Styles.container, Styles.profileContainer])}>
      <View>
        <Icons.Ionicons name=`iosAddCircle size=32 />
        <Icons.Ionicons name=`iosAdd size=32 />
        <Icons.AntDesign name=`stepforward size=32 />
        <Icons.AntDesign name=`stepforward size=32 color="red" />
        <Icons.AntDesign name=`stepforward size=32 color="blue" />
      </View>
    </SafeAreaView>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));