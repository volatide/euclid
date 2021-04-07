#include "color.hpp"
#include <glm/vec2.hpp> // glm::vec2
#include <vector>

namespace euclid::render {

struct Point {
	int x, y;
	Color color;
};

using namespace glm;
void draw(std::vector<Point> points);
} // namespace euclid::render