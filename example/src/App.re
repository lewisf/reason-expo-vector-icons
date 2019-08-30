open ReactNative;
open ReasonExpoVectorIcons;
module Icons = ReasonExpoVectorIcons;

let component = ReasonReact.statelessComponent("App");

module Styles = {
  open Style;
  let container =
    style(~flex=1., ~alignItems=`center, ~justifyContent=`center, ());
  let profileContainer = style(~backgroundColor="rgb(76, 217, 100)", ());
};
[@react.component]
let make = () => {
    <SafeAreaView
      style={StyleSheet.flatten([|
        Styles.container,
        Styles.profileContainer,
      |])}>
      <View>
        <FontAwesomeUpdated name=`map size=20 color="#fafafa" />
        // <Icons.Ionicons name=`iosAddCircle size=32 color="magenta" />
        // <Icons.Ionicons name=`iosAdd size=32 color="green" />
        // <Icons.AntDesign name=`stepforward size=32 color="red" />
        // <Icons.Feather name=`airplay size=32 color="yellow" />
        // <Icons.Foundation name=`dieThree size=32 color="yellow" />
        // <Icons.Octicons name=`flame size=32 color="orange" />
        // <Icons.SimpleLineIcons name=`eyeglass size=32 color="aqua" />
        // <Icons.Zocial name=`twitter size=32 color="lightblue" />
      </View>
    </SafeAreaView>;
};

let default = make;