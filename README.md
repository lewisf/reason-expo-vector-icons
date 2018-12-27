# Reason @expo/vector-icons

This library is the bindings for @expo/vector-icons which is a compatibility layer around @oblador/react-native-vector-icons to work with the Expo asset system. If you're using Javascript/Typescript, you have no need for this library -- carry on! (or maybe check out [@expo/vector-icons](https://github.com/expo/vector-icons)).

If you're not using Expo, then check out [Astrocoders/bs-react-native-vector-icons](https://github.com/Astrocoders/bs-react-native-vector-icons) instead.

## Resources

- [@expo/vector-icons directory](https://expo.github.io/vector-icons/) - a searchable list of all included icons.
  ![Screenshot of website](https://raw.githubusercontent.com/expo/vector-icons/master/website-screenshot.png)
- [Expo documentation](https://docs.expo.io/)

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

# Credits

Thanks to [Astrocoders/bs-react-native-vector-icons](https://github.com/Astrocoders/bs-react-native-vector-icons) for
providing an example of how to generate this from glyphmap files.

Thanks to [oblador/react-native-vector-icons](https://github.com/oblador/react-native-vector-icons) for the icons.

Thanks to [@expo/vector-icons](https://github.com/expo/vector-icons) for expo.
