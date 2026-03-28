#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
class Window {
private:
	const char* m_name;
	int m_width;
	int m_height;
	
public:
	GLFWwindow* m_window;
	Window(const char* name, int width, int height);
};
#endif