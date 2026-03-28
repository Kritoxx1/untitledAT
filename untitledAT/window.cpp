#include "window.hpp"
Window::Window(const char* name, int width, int height) {
	m_name = name;
	m_height = height;
	m_width = width;


	/* Initialize the library */
	glfwInit();
		
	/* Create a windowed mode window and its OpenGL context */
	m_window = glfwCreateWindow(800, 800, "Hello World", NULL, NULL);
	if (!m_window)
	{
		glfwTerminate();
		
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(m_window);
	
	gladLoadGL();
};
