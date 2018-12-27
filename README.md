# Reason @expo/vector-icons

This library is the bindings for @expo/vector-icons which is a compatibility layer around @oblador/react-native-vector-icons to work with the Expo asset system. If you're using Javascript/Typescript, you have no need for this library -- carry on! (or maybe check out [@expo/vector-icons](https://github.com/expo/vector-icons)).

# Usage

```reasonml
let component = ReasonReact.statelessComponent("IconExample");
let make = (_children) => {
  ...component,
  render: (_self) => {
    <Ionicons name="md-checkmark-circle" size=32 color="green" />
  }
}
```
