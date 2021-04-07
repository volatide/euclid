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

	// int color = 0;
	// double val = 0;

	glfwMakeContextCurrent(window);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	// int w, h;

	glfwSetWindowSizeCallback(window, &resizeWindowHandle);

	while (!glfwWindowShouldClose(window)) {
		glClear(GL_COLOR_BUFFER_BIT);
		// glfwGetFramebufferSize(window, &w, &h);
		// glViewport(0, 0, w, h);

		// euclid::render::draw();

		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}
