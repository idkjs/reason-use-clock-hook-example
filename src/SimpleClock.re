open ReasonUseClockHook;
[@react.component]
let make = () => {

  let date = UseClock.useClock();
  <div>
    <h1> "Hello, world!"->React.string </h1>
    <h2>
      {"It is "
       ++ date->Js.Date.fromFloat->Js.Date.toLocaleTimeString
       ++ "."
       |> React.string}
    </h2>
  </div>;
};