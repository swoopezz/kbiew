#pragma once

#include <vector>
#include "Key.hpp"

namespace kbiew::config {

static const std::vector<std::vector<key::Any>> LAYOUT = {
    { key::Esc{}, key::Num1{}, key::Num2{}, key::Num3{}, key::Num4{}, key::Num5{}, key::Num6{}, key::Num7{}, key::Num8{}, key::Num9{}, key::Num0{}, key::Minus{}, key::Equals{}, key::BS{} },
	{ key::Tab{}, key::Q{}, key::W{}, key::E{}, key::R{}, key::T{}, key::Y{}, key::U{}, key::I{}, key::O{}, key::P{}, key::BracketL{}, key::BracketR{}, key::Enter{}              		   },
	{ key::CapsLock{}, key::A{}, key::S{}, key::D{}, key::F{}, key::G{}, key::H{}, key::J{}, key::K{}, key::L{}, key::Semicolon{}, key::Apostrophe{}, key::Backslash{} 							   },
	{ key::LShift{}, key::Z{}, key::X{}, key::C{}, key::V{}, key::B{}, key::N{}, key::M{}, key::Comma{}, key::Period{}, key::Slash{}, key::RShift{}           							   },
	{ key::LCtrl{}, key::Super{}, key::LAlt{},                           key::Space{},                                             key::RAlt{}, key::Empty{}, key::RCtrl{}, 			   }
};


//read https://gist.github.com/ConnerWill/d4b6c776b509add763e17f9f113fd25b
// 0 to clear
static constexpr int TERM_COLOR = 7;
}
