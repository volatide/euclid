#include <glm/vec2.hpp> // glm::vec2
#include <vector>

namespace euclid::render {

	struct Color {
		uint8_t red, green, blue, alpha;

		Color(uint8_t red, uint8_t green, uint8_t blue);
		Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

		Color fromHSV(uint8_t hue, uint8_t saturation, uint8_t value);
		Color fromHSV(uint8_t hue, uint8_t saturation, uint8_t value,
					  uint8_t alpha);
	};

	struct Point {
		int x, y;
		Color color;
	};

	using namespace glm;
	void draw(std::vector<Point> points);
} // namespace euclid::render
