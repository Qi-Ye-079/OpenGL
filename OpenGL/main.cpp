#include "sb7.h"
#include <iostream>
#include <math.h>
#include <GLFW/glfw3.h>

class my_application : public sb7::application
{
public:
	// Our first rendering system
	void render(double currentTime) override
	{
		// Clear the window with red
		const GLfloat colors[] = { (GLfloat)sin(currentTime) * 0.5f + 0.5f,
							       (GLfloat)cos(currentTime) * 0.5f + 0.5f, 0.f, 1.f };
		glClearBufferfv(GL_COLOR, 0, colors);
	}
};

// One and only instance of DECLARE_MAIN
DECLARE_MAIN(my_application);