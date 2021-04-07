// Headers
#include <iostream>

// OpenGL headers
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

int main() {
	GLFWwindow* window;
	
	if(!glfwInit()) { return 1; } // if it fails to init then exit 1

	window = glfwCreateWindow(640, 480, "Euclid Engine", NULL, NULL);
	if(!window) {
		glfwTerminate();
		return 1;
	}

	glfwMakeContextCurrent(window); // make window current context

	while(!glfwWindowShouldClose(window)) {
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}
