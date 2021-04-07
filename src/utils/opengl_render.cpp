#include "render.hpp"

namespace euclid::render {
	using namespace glm;

	void draw(std::vector<Point> points) {}

	struct Color {
		uint8_t red, green, blue, alpha;

		Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
			red = r;
			green = g;
			blue = b;
			alpha = a;
		}

		Color(uint8_t r, uint8_t g, uint8_t b) {
			red = r;
			green = g;
			blue = b;
			alpha = 255;
		}

		Color fromHSV(uint8_t h, uint8_t s, uint8_t v, uint8_t a) {
			unsigned char region, remainder, p, q, t;

			if (s == 0)
				return Color(v, v, v, a);

			region = h / 43;
			remainder = (h - (region * 43)) * 6;

			p = (v * (255 - s)) >> 8;
			q = (v * (255 - ((s * remainder) >> 8))) >> 8;
			t = (v * (255 - ((s * (255 - remainder)) >> 8))) >> 8;

			Color* color = nullptr;
			switch (region) {
			case 0:
				color = &Color(v, t, p, a);
				break;
			case 1:
				color = &Color(q, v, p, a);
				break;
			case 2:
				color = &Color(p, v, t, a);
				break;
			case 3:
				color = &Color(p, q, v, a);
				break;
			case 4:
				color = &Color(t, p, v, a);
				break;
			default:
				color = &Color(v, p, q, a);
				break;
			}

			return *color;
		}

		Color fromHSV(uint8_t h, uint8_t s, uint8_t v) {
			return Color::fromHSV(h, s, v, 255);
		}

		Color fromHEX(std::string hex) {
			// TODO: Implement this
			return Color(0, 0, 0, 0);
		}
	};

} // namespace euclid::render
