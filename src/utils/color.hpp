#pragma once
#include <string>

namespace euclid {
	class Color {
	  public:
		uint8_t red, green, blue, alpha;

		Color(uint8_t r, uint8_t g, uint8_t b);
		Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a);

		Color fromHSV(uint8_t h, uint8_t s, uint8_t v);
		Color fromHSV(uint8_t h, uint8_t s, uint8_t v, uint8_t a);
		Color fromHEX(std::string hex);
		uint32_t toNumberRGBA();
		uint32_t toNumberRGB();
	};
} // namespace euclid