
#include "Config.hpp"
#include "Render.hpp"

using namespace kbiew;
int main() {
	Keyboard kb{config::LAYOUT};
	render(kb.kbLayout());
	
	return 0;
}
