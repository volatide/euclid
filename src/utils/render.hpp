#include "color.hpp"
#include <GL/glew.h>
#include <glm/vec2.hpp> // glm::vec2
#include <string>
#include <vector>

namespace euclid::render {
	struct Point {
		int x, y;
		Color color;
		Point(int X, int Y, Color clr);
	};

	using namespace glm;
	void draw(std::vector<Point> points);

} // namespace euclid::render
