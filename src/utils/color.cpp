#include "color.hpp"

namespace euclid {

	Color::Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
		red = r;
		green = g;
		blue = b;
		alpha = a;
	}

	Color::Color(uint8_t r, uint8_t g, uint8_t b) : Color(r, g, b, 255) {}

	Color Color::fromHSV(uint8_t h, uint8_t s, uint8_t v, uint8_t a) {
		unsigned char region, remainder, p, q, t;

		if (s == 0)
			return Color(v, v, v, a);

		region = h / 43;
		remainder = (h - (region * 43)) * 6;

		p = (v * (255 - s)) >> 8;
		q = (v * (255 - ((s * remainder) >> 8))) >> 8;
		t = (v * (255 - ((s * (255 - remainder)) >> 8))) >> 8;

		Color color = {0, 0, 0, 0};

		switch (region) {
		case 0:
			color = {v, t, p, a};
			break;
		case 1:
			color = {q, v, p, a};
			break;
		case 2:
			color = {p, v, t, a};
			break;
		case 3:
			color = {p, q, v, a};
			break;
		case 4:
			color = {t, p, v, a};
			break;
		default:
			color = {v, p, q, a};
			break;
		}

		return color;
	}

	Color Color::fromHSV(uint8_t h, uint8_t s, uint8_t v) {
		return Color::fromHSV(h, s, v, 255);
	}

	Color Color::fromRGBNumber(uint32_t num) {
		uint8_t red = (num & 0xff0000) >> 16;
		uint8_t green = (num & 0x00ff00) >> 8;
		uint8_t blue = num & 0x0000ff;
		return Color(red, green, blue);
	}

	uint32_t Color::toRGBNumber() {
		return 0x10000 * red + 0x100 * green + blue;
	}
} // namespace euclid