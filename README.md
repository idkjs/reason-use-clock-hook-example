# `unsafeAddProp` and reason-use-clock-hook-example

## Run Project

```sh
yarn install
yarn start
```

## TakeAways

Lets say you want to pass a value to some function in your `css`. One way to do it is to use `ReactDOMRe.Style.unsafeAddProp` as demonstrated below. Most of the `date` part is converting the `date` from `Js.Date.t` to a workable `int` then to the string required by the `css`.

```reason
let secondstyle =
    ReactDOMRe.Style.make()
    ->ReactDOMRe.Style.unsafeAddProp(
        "--current-seconds",
        date->Js.Date.fromFloat->Js.Date.getSeconds->Js.Float.toString,
      );
  let minutestyle =
    ReactDOMRe.Style.make()
    ->ReactDOMRe.Style.unsafeAddProp(
        "--current-minutes",
        date->Js.Date.fromFloat->Js.Date.getMinutes->Js.Float.toString,
      );
  let hourstyle =
    ReactDOMRe.Style.make()
    ->ReactDOMRe.Style.unsafeAddProp(
        "--current-hours",
        date->Js.Date.fromFloat->Js.Date.getHours->Js.Float.toString,
      );
```

This program also demonstrates using an imported hook in `ReasonUseClockHook`.
