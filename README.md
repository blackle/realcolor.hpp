# realcolor.hpp

A header-only c++ library for colouring output streams on linux with 24-bit truecolor.

```cpp
std::cout
	<< realcolor::bg(0xBC4598)
	<< realcolor::fg(0xE7E6B4)
	<< "Color using hex codes!"
	<< realcolor::reset
	<< std::endl;

std::cout
	<< realcolor::bg(188, 69, 152)
	<< realcolor::fg(231, 230, 180)
	<< "Color using individual rgb values!"
	<< realcolor::reset
	<< std::endl;

std::cout
	<< realcolor::bg(0.74, 0.27, 0.60)
	<< realcolor::fg(0.91, 0.90, 0.71)
	<< "Color using individual floating point rgb values!"
	<< realcolor::reset
	<< std::endl;
```