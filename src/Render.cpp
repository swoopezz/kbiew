#include "Render.hpp"
#include "Keyboard.hpp"
#include <iostream>
#include <string>
#include <variant>

namespace kbiew {
	void render(const Keyboard& kb) {
		const KbLayout layout = kb.kbLayout();

		for (int i = 0; i < layout.size(); i++) {
			std::string upline = ",";
			std::string line = "| ";
			std::string downline = "'";
			for (int j = 0; j < layout[i].size(); j++) {
				std::visit([&](const auto& arg) {
					for(int n = 0; n < arg.view.size()+2; n++) {
						upline+="-";
						downline+="-";
					}
					line += std::string(arg.view) + " | ";
					upline+=",";
					downline+="'";				
				}, layout[i][j]);
			}
			if (i == 0)
				std::cout << upline << "\n";
			std::cout << line << "\n";
			std::cout << downline << "\n";
		}

	}
}
