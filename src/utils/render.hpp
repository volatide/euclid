#include <glm/vec2.hpp> // glm::vec2
#include <string>
#include <vector>

namespace euclid::render {

	struct Color {
		uint8_t red, green, blue, alpha;

		Color(uint8_t r, uint8_t g, uint8_t b);
		Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a);

		Color fromHSV(uint8_t h, uint8_t s, uint8_t v);
		Color fromHSV(uint8_t h, uint8_t s, uint8_t v, uint8_t a);
		Color fromHEX(std::string hex);
	};

	struct Point {
		int x, y;
		Color color;
	};

	using namespace glm;
	void draw(std::vector<Point> points);
} // namespace euclid::render
