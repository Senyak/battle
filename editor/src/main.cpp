#include <iostream>
#include <memory>
#include "core/application.hpp"

class My_app : public Engine::Application
{
	virtual void on_update() override
	{
		std::cout << "Update frame: " << frame++ << std::endl;
	}
	int frame = 0;


};


int main()
{
	auto my_app = std::make_unique<My_app>();

	int return_code = my_app->start(400, 600, "huh");

	std::cin.get();

	return return_code;
}