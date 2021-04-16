// Headers
#include <iostream>

// OpenGL headers
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

// Euclid
#include "euclid.hpp"

void resizeWindowHandle(GLFWwindow* window, int w, int h) {
	glViewport(0, 0, w, h);
}


int main() {
	GLFWwindow* window;

	if (!glfwInit())
		return 1;

	window = glfwCreateWindow(640, 480, "euclid", NULL, NULL);
	glfwSetWindowTitle(window, "Euclid Engine");
	if (!window) {
		glfwTerminate();
		return 1;
	}

	euclid::Color color = euclid::Color(0, 255, 0);
	euclid::Color color2 = euclid::Color::fromRGBNumber(0x00ff00);
	std::cout << (int)color.green << std::endl;
	std::cout << (int)color2.green << std::endl;

	// Log test
	euclid::log::debug(euclid::log::Scope::APP, "THIS IS A DEBUG TEST");

	// int color = 0;
	// double val = 0;

	glfwMakeContextCurrent(window);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	// int w, h;

	glfwSetWindowSizeCallback(window, &resizeWindowHandle);

	// RENDER TEST
	euclid::Color red_clr(255, 25, 25);

	std::vector<euclid::render::Point> cube_test;

	// TOP LEFT
	euclid::render::Point point1(-1.0f, 1.0f, red_clr);
	cube_test.push_back(point1);
	
	// TOP RIGHT
	euclid::render::Point point2(1.0f, 1.0f, red_clr);
	cube_test.push_back(point2);

	// BOTTOM LEFT
	euclid::render::Point point3(-1.0f, -1.0f, red_clr);
	cube_test.push_back(point3);
	
	// BOTTOM RIGHT
	euclid::render::Point point4(1.0f, -1.0f, red_clr);
	cube_test.push_back(point4);


	while (!glfwWindowShouldClose(window)) {
		glClear(GL_COLOR_BUFFER_BIT);
		// glfwGetFramebufferSize(window, &w, &h);
		// glViewport(0, 0, w, h);

		euclid::render::draw(cube_test);

		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}
