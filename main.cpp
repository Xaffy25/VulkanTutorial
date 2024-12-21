#include "Application.h"
#include <iostream>

Application* app;

int main()
{
	app = new Application();
	try {
		app->run();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;

}