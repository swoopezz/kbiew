#include "Keyboard.hpp"

namespace kbiew {
	const KbLayout& Keyboard::kbLayout() const noexcept {
		return mKbLayout;
	}
}
