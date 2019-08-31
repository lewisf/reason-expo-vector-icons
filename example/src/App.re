open ReactNative;
open Expo;

// open Ionicons;
open ReasonExpoVectorIcons;
let styles =
  Style.(
    StyleSheet.create({
      "container":
        style(
          ~flex=1.,
          ~justifyContent=`center,
          ~alignItems=`center,
          ~backgroundColor="#F5FCFF",
          (),
        ),
      "instructions": style(~textAlign=`center, ~color="#ffffff", ()),
    })
  );

[@react.component]
let app = () => {
  <View style=styles##container>
    <LinearGradient
      colors=[|"#DD4B39", "#C62C19"|]
      start=[|0.0, 0.0|]
      _end=[|1.0, 1.0|]
      style=Style.(style(~padding=dp(12.), ~borderRadius=12., ()))>
      <Text style=styles##instructions>
        {React.string("To get started, edit App.re")}
      </Text>
      <FontAwesome name=`map size=20 color="#fafafa" />
      <Ionicons name=`iosAddCircle size=32 color="magenta" />
      <Ionicons name=`iosAdd size=32 color="green" />
      <AntDesign name=`stepforward size=32 color="red" />
      <Feather name=`airplay size=32 color="yellow" />
      <Foundation name=`dieThree size=32 color="yellow" />
      <Octicons name=`flame size=32 color="orange" />
      <SimpleLineIcons name=`eyeglass size=32 color="aqua" />
      <Zocial name=`twitter size=32 color="lightblue" />
      <Ionicons name=`iosAddCircle size=32 color="magenta" />
    </LinearGradient>
  </View>;
};