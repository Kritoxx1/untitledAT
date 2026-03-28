#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vector>

#include "window.hpp"

std::vector<GLfloat> triangle = {
	//  X     Y     Z					  R    G		 B
		-0.5f, 0.0f, 0.0f,			1.0f, 0.0f, 0.0f,
		 0.5f, 0.0f, 0.0f,			0.0f, 1.0f, 0.0f,
		 0.0f, 0.5f, 0.0f,			0.0f, 0.0f, 1.0f
};

std::vector<GLuint> indices = {
	0, 1, 2
};

int main() {
	Window window("UntitledAT", 800, 800);

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window.m_window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/* Swap front and back buffers */
		glfwSwapBuffers(window.m_window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}