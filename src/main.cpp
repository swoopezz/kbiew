
#include "Config.hpp"
#include "Render.hpp"
#include <iostream>

using namespace kbiew;
int main() {
	static_assert(config::TERM_COLOR == 0 ||
			(config::TERM_COLOR > 30 && config::TERM_COLOR <= 49),
			">>>>>>>>>>>>>>>>>INVALIDE TERM_COLOR");

	Keyboard kb{config::LAYOUT};	 

	char pressed = 0;
	while (true) {
		std::cin >> pressed;
		render(kb.kbLayout(), pressed);
	}
	 
	return 0;
}
