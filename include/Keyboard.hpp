#pragma once

#include "Key.hpp"
#include <vector>

namespace kbiew {
using KbLayout = std::vector<std::vector<key::Any>>;

class Keyboard {
   public:
    Keyboard(KbLayout kbLayout) noexcept:
		mKbLayout(std::move(kbLayout)) {};
	
	const KbLayout& kbLayout() const noexcept;
   private:
    KbLayout mKbLayout;
};
}  // namespace kbiew
