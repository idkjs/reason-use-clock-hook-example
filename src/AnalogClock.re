// [@bs.val] external requireCSS: string => unit = "require";

// requireCSS("./AnalogClock.css");

open ReasonUseClockHook;
[@react.component]
let make = () => {

  let date = UseClock.useClock();

  // Js.log2("Date", date);
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

  <svg className="analogClock" viewBox="0 0 40 40">
    <circle className="analogClockFace" cx="20" cy="20" r="19" />
    <g className="marks">
      <line x1="15" y1="0" x2="16" y2="0" />
      <line x1="15" y1="0" x2="16" y2="0" />
      <line x1="15" y1="0" x2="16" y2="0" />
      <line x1="15" y1="0" x2="16" y2="0" />
      <line x1="15" y1="0" x2="16" y2="0" />
      <line x1="15" y1="0" x2="16" y2="0" />
      <line x1="15" y1="0" x2="16" y2="0" />
      <line x1="15" y1="0" x2="16" y2="0" />
      <line x1="15" y1="0" x2="16" y2="0" />
      <line x1="15" y1="0" x2="16" y2="0" />
      <line x1="15" y1="0" x2="16" y2="0" />
      <line x1="15" y1="0" x2="16" y2="0" />
    </g>
    <line x1="0" y1="0" x2="9" y2="0" className="hour" style=hourstyle />
    <line x1="0" y1="0" x2="13" y2="0" className="minute" style=minutestyle />
    <line x1="0" y1="0" x2="16" y2="0" className="seconds" style=secondstyle />
    <circle cx="20" cy="20" r="0.7" className="pin" />
  </svg>;
};