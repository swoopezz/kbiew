#pragma once

#include <string_view>
#include <variant>

namespace kbiew::key {
	struct A { const std::string_view view = "a"; const int in_bytes = 0; };
	struct B { const std::string_view view = "b"; const int in_bytes = 0; };
	struct C { const std::string_view view = "c"; const int in_bytes = 0; };
	struct D { const std::string_view view = "d"; const int in_bytes = 0; };
	struct E { const std::string_view view = "e"; const int in_bytes = 0; };
	struct F { const std::string_view view = "f"; const int in_bytes = 0; };
	struct G { const std::string_view view = "g"; const int in_bytes = 0; };
	struct H { const std::string_view view = "h"; const int in_bytes = 0; };
	struct I { const std::string_view view = "i"; const int in_bytes = 0; };
	struct J { const std::string_view view = "j"; const int in_bytes = 0; };
	struct K { const std::string_view view = "k"; const int in_bytes = 0; };
	struct L { const std::string_view view = "l"; const int in_bytes = 0; };
	struct M { const std::string_view view = "m"; const int in_bytes = 0; };
	struct N { const std::string_view view = "n"; const int in_bytes = 0; };
	struct O { const std::string_view view = "o"; const int in_bytes = 0; };
	struct P { const std::string_view view = "p"; const int in_bytes = 0; };
	struct Q { const std::string_view view = "q"; const int in_bytes = 0; };
	struct R { const std::string_view view = "r"; const int in_bytes = 0; };
	struct S { const std::string_view view = "s"; const int in_bytes = 0; };
	struct T { const std::string_view view = "t"; const int in_bytes = 0; };
	struct U { const std::string_view view = "u"; const int in_bytes = 0; };
	struct V { const std::string_view view = "v"; const int in_bytes = 0; };
	struct W { const std::string_view view = "v"; const int in_bytes = 0; };
	struct X { const std::string_view view = "x"; const int in_bytes = 0; };
	struct Y { const std::string_view view = "y"; const int in_bytes = 0; };
	struct Z { const std::string_view view = "z"; const int in_bytes = 0; };

	struct Equals   { const std::string_view view = "="; const int in_bytes = 0; };
	struct BracketL { const std::string_view view = "["; const int in_bytes = 0; };
	struct BracketR { const std::string_view view = "]"; const int in_bytes = 0; };
	struct Backslash{ const std::string_view view = "\\"; const int in_bytes = 0; };
	struct Semicolon{ const std::string_view view = ";"; const int in_bytes = 0; };
	struct Apostrophe{ const std::string_view view = "'"; const int in_bytes = 0; };
	struct Comma    { const std::string_view view = ","; const int in_bytes = 0; };
	struct Period   { const std::string_view view = "."; const int in_bytes = 0; };
	struct Slash    { const std::string_view view = "/"; const int in_bytes = 0; };
	struct Grave    { const std::string_view view = "`"; const int in_bytes = 0; };
	struct Tilde    { const std::string_view view = "~"; const int in_bytes = 0; };

	struct RShift { const std::string_view view = "Shift"; const int in_bytes = 0; };
	struct RCtrl  { const std::string_view view = "Ctrl"; const int in_bytes = 0; };
	struct LAlt   { const std::string_view view = "Alt"; const int in_bytes = 0; };
	struct RAlt   { const std::string_view view = "Alt"; const int in_bytes = 0; };
	struct Menu   { const std::string_view view = "Menu"; const int in_bytes = 0; };
	struct Up     { const std::string_view view = "↑"; const int in_bytes = 0; };
	struct Down   { const std::string_view view = "↓"; const int in_bytes = 0; };
	struct Left   { const std::string_view view = "←"; const int in_bytes = 0; };
	struct Right  { const std::string_view view = "→"; const int in_bytes = 0; };
	struct Home   { const std::string_view view = "Home"; const int in_bytes = 0; };
	struct End    { const std::string_view view = "End"; const int in_bytes = 0; };
	struct PgUp   { const std::string_view view = "PgUp"; const int in_bytes = 0; };
	struct PgDn   { const std::string_view view = "PgDn"; const int in_bytes = 0; };
	struct Insert { const std::string_view view = "Ins"; const int in_bytes = 0; };
	struct Delete { const std::string_view view = "Del"; const int in_bytes = 0; };

	struct F1  { const std::string_view view = "F1";  const int in_bytes = 0; };
	struct F2  { const std::string_view view = "F2";  const int in_bytes = 0; };
	struct F3  { const std::string_view view = "F3";  const int in_bytes = 0; };
	struct F4  { const std::string_view view = "F4";  const int in_bytes = 0; };
	struct F5  { const std::string_view view = "F5";  const int in_bytes = 0; };
	struct F6  { const std::string_view view = "F6";  const int in_bytes = 0; };
	struct F7  { const std::string_view view = "F7";  const int in_bytes = 0; };
	struct F8  { const std::string_view view = "F8";  const int in_bytes = 0; };
	struct F9  { const std::string_view view = "F9";  const int in_bytes = 0; };
	struct F10 { const std::string_view view = "F10"; const int in_bytes = 0; };
	struct F11 { const std::string_view view = "F11"; const int in_bytes = 0; };
	struct F12 { const std::string_view view = "F12"; const int in_bytes = 0; };

	struct PrintScreen { const std::string_view view = "PrtSc"; const int in_bytes = 0; };
	struct ScrollLock  { const std::string_view view = "ScrLk"; const int in_bytes = 0; };
	struct Pause       { const std::string_view view = "Pause"; const int in_bytes = 0; };
	struct Break       { const std::string_view view = "Break"; const int in_bytes = 0; };
	struct NumLock     { const std::string_view view = "NumLk"; const int in_bytes = 0; };
	
	struct Numpad0        { const std::string_view view = "0"; const int in_bytes = 0; };
	struct Numpad1        { const std::string_view view = "1"; const int in_bytes = 0; };
	struct Numpad2        { const std::string_view view = "2"; const int in_bytes = 0; };
	struct Numpad3        { const std::string_view view = "3"; const int in_bytes = 0; };
	struct Numpad4        { const std::string_view view = "4"; const int in_bytes = 0; };
	struct Numpad5        { const std::string_view view = "5"; const int in_bytes = 0; };
	struct Numpad6        { const std::string_view view = "6"; const int in_bytes = 0; };
	struct Numpad7        { const std::string_view view = "7"; const int in_bytes = 0; };
	struct Numpad8        { const std::string_view view = "8"; const int in_bytes = 0; };
	struct Numpad9        { const std::string_view view = "9"; const int in_bytes = 0; };
	struct NumpadAdd      { const std::string_view view = "+"; const int in_bytes = 0; };
	struct NumpadSubtract { const std::string_view view = "-"; const int in_bytes = 0; };
	struct NumpadMultiply { const std::string_view view = "*"; const int in_bytes = 0; };
	struct NumpadDivide   { const std::string_view view = "/"; const int in_bytes = 0; };
	struct NumpadDecimal  { const std::string_view view = "."; const int in_bytes = 0; };
	struct NumpadEnter    { const std::string_view view = "Enter"; const int in_bytes = 0; };
	struct NumpadEqual    { const std::string_view view = "="; const int in_bytes = 0; };
	
	struct Space  { const std::string_view view = "                   "; const int in_bytes = 0; };
	struct Enter  { const std::string_view view = "etr"; const int in_bytes = 0; };
	struct Esc    { const std::string_view view = "ESC"; const int in_bytes = 0; };
	struct BS 	  { const std::string_view view = "<-"; const int in_bytes = 0;	};
	struct Tab 	  { const std::string_view view = "Tab"; const int in_bytes = 0; };

	struct CapsLock { const std::string_view view = "CLck"; const int in_bytes = 0; };
	struct LShift { const std::string_view view = "Shift"; const int in_bytes = 0; };
	struct LCtrl { const std::string_view view = "Ctrl"; const int in_bytes = 0;};
	struct Super { const std::string_view view = "Super"; const int in_bytes = 0;};

	struct Num0 { const std::string_view view = "0"; const int in_bytes = 0; };
	struct Num1 { const std::string_view view = "1"; const int in_bytes = 0; };
	struct Num2 { const std::string_view view = "2"; const int in_bytes = 0; };
	struct Num3 { const std::string_view view = "3"; const int in_bytes = 0; };
	struct Num4 { const std::string_view view = "4"; const int in_bytes = 0; };
	struct Num5 { const std::string_view view = "5"; const int in_bytes = 0; };	
	struct Num6 { const std::string_view view = "6"; const int in_bytes = 0; };
	struct Num7 { const std::string_view view = "7"; const int in_bytes = 0; };
	struct Num8 { const std::string_view view = "8"; const int in_bytes = 0; };
	struct Num9 { const std::string_view view = "9"; const int in_bytes = 0; };
	struct Plus { const std::string_view view = "+"; const int in_bytes = 0; };
	struct Minus{ const std::string_view view = "-"; const int in_bytes = 0; };

	using Any = std::variant<
    	Esc, BS, Tab, CapsLock, LShift, LCtrl, Super,
    	Num0, Num1, Num2, Num3, Num4, Num5, Num6, Num7, Num8, Num9,
    	Minus, Plus,

    	A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, R, S, T, U, V, X, Y, Z, Q, W,

    	Equals, BracketL, BracketR, Backslash, Semicolon, Apostrophe,
    	Comma, Period, Slash, Grave, Tilde,

    	RShift, RCtrl, LAlt, RAlt, Menu,
    	Up, Down, Left, Right, Home, End, PgUp, PgDn, Insert, Delete,
    	F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12,

    	PrintScreen, ScrollLock, Pause, Break, NumLock,

    	Numpad0, Numpad1, Numpad2, Numpad3, Numpad4, Numpad5,
    	Numpad6, Numpad7, Numpad8, Numpad9,
    	NumpadAdd, NumpadSubtract, NumpadMultiply, NumpadDivide,
    	NumpadDecimal, NumpadEnter, NumpadEqual,

    	Space, Enter
	>;
}
