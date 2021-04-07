#include <glm/vec2.hpp> // glm::vec2
#include <GL/glew.h>
#include <string>
#include <vector>
#include "color.hpp"

namespace euclid::render {
	struct Point {
		int x, y;
		Color color;
	};

	using namespace glm;
	void draw(std::vector<Point> points);

} // namespace euclid::render
