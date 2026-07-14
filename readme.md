# KeyBoard Interactive viewER
Kbiew is a minimalist, real‑time keyboard visualizer written in C++. It renders a full keyboard layout using ASCII art directly in your terminal and provides instant visual feedback for every key you press. The layout and highlight colors are fully configurable via a single header file, making it trivial to adapt to any keyboard layout or personal style.

### ✨ Features
1. Live key highlighting – see exactly which key is pressed, with customizable terminal colors.
2. Fully configurable layout – define rows, keys, and special keys (Esc, Tab, Enter, Backspace, etc.) in Config.hpp.
3. No external dependencies – uses only standard C++ and POSIX terminal I/O.
4. Minimal & fast – designed for low latency and small footprint.

### 🖥 Preview
https://github.com/user-attachments/assets/22e1df7b-4bba-4583-9438-c16d51fa5098

### 🛠 Build
```bash
# Build target with cmake
cmake -S . -B build && cmake --build build
# Launch the app
./build/kbiew
```

### ⚙️Configuration
All settings are located in config/Config.hpp. You can customize:
- Keyboard layout – define each row as a vector of keys.
- Highlight color – set the ANSI terminal color code for pressed keys.
```cpp
namespace kbiew::config {

// Define your keyboard layout (rows of keys)
static const std::vector<std::vector<key::Any>> LAYOUT = {
    { key::Esc{}, key::Num1{}, key::Num2{}, /* ... */ key::Num0{}, key::BS{} },
    { key::Tab{}, key::Q{}, key::W{}, /* ... */ key::BracketR{}, key::Enter{} },
    // ... add more rows as needed
};

// Highlight color (ANSI codes e.g., 7 = inverse)
static constexpr int TERM_COLOR = 7;

} // namespace kbiew::config
```


📝 To‑Do
1. Double buffering (to eliminate flickering)
2. Automatic centering of the layout in the terminal
