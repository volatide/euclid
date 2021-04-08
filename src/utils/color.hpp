#pragma once
#include <string>

namespace euclid {
	class Color {
	  public:
		uint8_t red, green, blue, alpha;

		Color(uint8_t r, uint8_t g, uint8_t b);
		Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a);

		static Color fromHSV(uint8_t h, uint8_t s, uint8_t v);
		static Color fromHSV(uint8_t h, uint8_t s, uint8_t v, uint8_t a);
		static Color fromRGBNumber(uint32_t num);
		uint32_t toRGBNumber();
	};
} // namespace euclid