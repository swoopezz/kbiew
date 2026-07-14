
#include "Config.hpp"
#include "Render.hpp"
#include <termios.h>
#include <unistd.h>
#include <iostream>

using namespace kbiew;

char getch();

int main() {
	static_assert((config::TERM_COLOR > 0 && config::TERM_COLOR < 10) ||
			(config::TERM_COLOR > 30 && config::TERM_COLOR <= 49),
			">>>>>>>>>>>>>>>>>INVALIDE TERM_COLOR");

	Keyboard kb{config::LAYOUT};	 
	
	std::cout << "\x1B[?1049h"; // alter buff
	std::cout << "\x1B[?25l";   // hide caret

	char pressed = 0;
	while (true) {
		std::cout << "\x1B[2J";
		render(kb.kbLayout(), pressed);
		pressed = getch();
	}
	std::cout << "\x1B[?1049l";	// exit alter buff
	return 0;
}


char getch() {
        char buf = 0;
		struct termios old = {0};
        
		if (tcgetattr(0, &old) < 0)
            std::cerr << "error: getattr()";
        
		old.c_lflag &= ~ICANON;
        old.c_lflag &= ~ECHO;
        old.c_cc[VMIN] = 1;
        old.c_cc[VTIME] = 0;
        
		if (tcsetattr(0, TCSANOW, &old) < 0)
                std::cerr << "tcsetattr ICANON";
        
		if (read(0, &buf, 1) < 0)
                std::cerr << "read()";
        
		old.c_lflag |= ICANON;
        old.c_lflag |= ECHO;
        
		if (tcsetattr(0, TCSADRAIN, &old) < 0)
                std::cerr << "tcsetattr ~ICANON";

        return (buf);
}
