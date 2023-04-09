#include <iostream>

#include <core/utils/test.hpp>

int main()
{
	std::cout << "Hello editor" << std::endl;

	Engine::chek_glfw();

	std::cin.get();
}