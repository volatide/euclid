#include "render.hpp"

namespace euclid::render {
	using namespace glm;

	void draw(std::vector<Point> points) {
		uint8_t numPoints = points.size();
		switch (numPoints) {
		case 2: // line
			glBegin(GL_LINES);
			break;

		case 3: // triangle
			glBegin(GL_TRIANGLES);
			break;

		case 4: // quad
			glBegin(GL_QUADS);
			break;

		default: // polygon
			glBegin(GL_POLYGON);
			break;
		}

		for (Point const& p : points) {
			glColor3ub(p.color.red, p.color.green, p.color.blue);
			glVertex2f(p.x, p.y);
		}

		glEnd();
	}
} // namespace euclid::render
