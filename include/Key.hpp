#pragma once

#include <string_view>
#include <variant>

namespace kbiew::key {
	struct A { const std::string_view view = "a"; const char ascii = 'a'; };
	struct B { const std::string_view view = "b"; const char ascii = 'b'; };
	struct C { const std::string_view view = "c"; const char ascii = 'c'; };
	struct D { const std::string_view view = "d"; const char ascii = 'd'; };
	struct E { const std::string_view view = "e"; const char ascii = 'e'; };
	struct F { const std::string_view view = "f"; const char ascii = 'f'; };
	struct G { const std::string_view view = "g"; const char ascii = 'g'; };
	struct H { const std::string_view view = "h"; const char ascii = 'h'; };
	struct I { const std::string_view view = "i"; const char ascii = 'i'; };
	struct J { const std::string_view view = "j"; const char ascii = 'j'; };
	struct K { const std::string_view view = "k"; const char ascii = 'k'; };
	struct L { const std::string_view view = "l"; const char ascii = 'l'; };
	struct M { const std::string_view view = "m"; const char ascii = 'm'; };
	struct N { const std::string_view view = "n"; const char ascii = 'n'; };
	struct O { const std::string_view view = "o"; const char ascii = 'o'; };
	struct P { const std::string_view view = "p"; const char ascii = 'p'; };
	struct Q { const std::string_view view = "q"; const char ascii = 'q'; };
	struct R { const std::string_view view = "r"; const char ascii = 'r'; };
	struct S { const std::string_view view = "s"; const char ascii = 's'; };
	struct T { const std::string_view view = "t"; const char ascii = 't'; };
	struct U { const std::string_view view = "u"; const char ascii = 'u'; };
	struct V { const std::string_view view = "v"; const char ascii = 'v'; };
	struct W { const std::string_view view = "w"; const char ascii = 'w'; }; // fixed view from "v" to "w"
	struct X { const std::string_view view = "x"; const char ascii = 'x'; };
	struct Y { const std::string_view view = "y"; const char ascii = 'y'; };
	struct Z { const std::string_view view = "z"; const char ascii = 'z'; };

	struct Equals   { const std::string_view view = "="; const char ascii = '='; };
	struct BracketL { const std::string_view view = "["; const char ascii = '['; };
	struct BracketR { const std::string_view view = "]"; const char ascii = ']'; };
	struct Backslash{ const std::string_view view = "  \\  "; const char ascii = '\\'; };
	struct Semicolon{ const std::string_view view = ";"; const char ascii = ';'; };
	struct Apostrophe{ const std::string_view view = "'"; const char ascii = '\''; };
	struct Comma    { const std::string_view view = ","; const char ascii = ','; };
	struct Period   { const std::string_view view = "."; const char ascii = '.'; };
	struct Slash    { const std::string_view view = "  /  "; const char ascii = '/'; };
	struct Grave    { const std::string_view view = "`"; const char ascii = '`'; };
	struct Tilde    { const std::string_view view = "~"; const char ascii = '~'; };

	struct RShift { const std::string_view view = "Shift"; const char ascii = '\0'; };
	struct RCtrl  { const std::string_view view = "Ctrl"; const char ascii = '\0'; };
	struct LAlt   { const std::string_view view = "Alt"; const char ascii = '\0'; };
	struct RAlt   { const std::string_view view = "Alt"; const char ascii = '\0'; };
	struct Menu   { const std::string_view view = "Menu"; const char ascii = '\0'; };
	struct Up     { const std::string_view view = "↑"; const char ascii = '\0'; };
	struct Down   { const std::string_view view = "↓"; const char ascii = '\0'; };
	struct Left   { const std::string_view view = "←"; const char ascii = '\0'; };
	struct Right  { const std::string_view view = "→"; const char ascii = '\0'; };
	struct Home   { const std::string_view view = "Home"; const char ascii = '\0'; };
	struct End    { const std::string_view view = "End"; const char ascii = '\0'; };
	struct PgUp   { const std::string_view view = "PgUp"; const char ascii = '\0'; };
	struct PgDn   { const std::string_view view = "PgDn"; const char ascii = '\0'; };
	struct Insert { const std::string_view view = "Ins"; const char ascii = '\0'; };
	struct Delete { const std::string_view view = "Del"; const char ascii = 127; }; // ASCII DEL

	struct F1  { const std::string_view view = "F1";  const char ascii = '\0'; };
	struct F2  { const std::string_view view = "F2";  const char ascii = '\0'; };
	struct F3  { const std::string_view view = "F3";  const char ascii = '\0'; };
	struct F4  { const std::string_view view = "F4";  const char ascii = '\0'; };
	struct F5  { const std::string_view view = "F5";  const char ascii = '\0'; };
	struct F6  { const std::string_view view = "F6";  const char ascii = '\0'; };
	struct F7  { const std::string_view view = "F7";  const char ascii = '\0'; };
	struct F8  { const std::string_view view = "F8";  const char ascii = '\0'; };
	struct F9  { const std::string_view view = "F9";  const char ascii = '\0'; };
	struct F10 { const std::string_view view = "F10"; const char ascii = '\0'; };
	struct F11 { const std::string_view view = "F11"; const char ascii = '\0'; };
	struct F12 { const std::string_view view = "F12"; const char ascii = '\0'; };

	struct PrintScreen { const std::string_view view = "PrtSc"; const char ascii = '\0'; };
	struct ScrollLock  { const std::string_view view = "ScrLk"; const char ascii = '\0'; };
	struct Pause       { const std::string_view view = "Pause"; const char ascii = '\0'; };
	struct Break       { const std::string_view view = "Break"; const char ascii = '\0'; };
	struct NumLock     { const std::string_view view = "NumLk"; const char ascii = '\0'; };
	
	struct Numpad0        { const std::string_view view = "0"; const char ascii = '0'; };
	struct Numpad1        { const std::string_view view = "1"; const char ascii = '1'; };
	struct Numpad2        { const std::string_view view = "2"; const char ascii = '2'; };
	struct Numpad3        { const std::string_view view = "3"; const char ascii = '3'; };
	struct Numpad4        { const std::string_view view = "4"; const char ascii = '4'; };
	struct Numpad5        { const std::string_view view = "5"; const char ascii = '5'; };
	struct Numpad6        { const std::string_view view = "6"; const char ascii = '6'; };
	struct Numpad7        { const std::string_view view = "7"; const char ascii = '7'; };
	struct Numpad8        { const std::string_view view = "8"; const char ascii = '8'; };
	struct Numpad9        { const std::string_view view = "9"; const char ascii = '9'; };
	struct NumpadAdd      { const std::string_view view = "+"; const char ascii = '+'; };
	struct NumpadSubtract { const std::string_view view = "-"; const char ascii = '-'; };
	struct NumpadMultiply { const std::string_view view = "*"; const char ascii = '*'; };
	struct NumpadDivide   { const std::string_view view = "/"; const char ascii = '/'; };
	struct NumpadDecimal  { const std::string_view view = "."; const char ascii = '.'; };
	struct NumpadEnter    { const std::string_view view = "Etr"; const char ascii = '\n'; }; // newline
	struct NumpadEqual    { const std::string_view view = "="; const char ascii = '='; };
	
	struct Space  { const std::string_view view = "                   "; const char ascii = ' '; };
	struct Enter  { const std::string_view view = "Etr"; const char ascii = '\n'; };
	struct Esc    { const std::string_view view = "ESC"; const char ascii = '`'; }; // ESC
	struct BS 	  { const std::string_view view = "<--"; const char ascii = '\b'; };
	struct Tab 	  { const std::string_view view = "Tab"; const char ascii = '\t'; };

	struct CapsLock { const std::string_view view = "CLock"; const char ascii = '\0'; };
	struct LShift { const std::string_view view = "Shift"; const char ascii = '\0'; };
	struct LCtrl { const std::string_view view = "Ctrl"; const char ascii = '\0'; };
	struct Super { const std::string_view view = "Super"; const char ascii = '\0'; };

	struct Num0 { const std::string_view view = "0"; const char ascii = '0'; };
	struct Num1 { const std::string_view view = "1"; const char ascii = '1'; };
	struct Num2 { const std::string_view view = "2"; const char ascii = '2'; };
	struct Num3 { const std::string_view view = "3"; const char ascii = '3'; };
	struct Num4 { const std::string_view view = "4"; const char ascii = '4'; };
	struct Num5 { const std::string_view view = "5"; const char ascii = '5'; };	
	struct Num6 { const std::string_view view = "6"; const char ascii = '6'; };
	struct Num7 { const std::string_view view = "7"; const char ascii = '7'; };
	struct Num8 { const std::string_view view = "8"; const char ascii = '8'; };
	struct Num9 { const std::string_view view = "9"; const char ascii = '9'; };
	struct Plus { const std::string_view view = "+"; const char ascii = '+'; };
	struct Minus{ const std::string_view view = "-"; const char ascii = '-'; };
	
	struct Empty{ const std::string_view view = " "; const char ascii = '\0'; };

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

    	Space, Enter,
		Empty
	>;
}
