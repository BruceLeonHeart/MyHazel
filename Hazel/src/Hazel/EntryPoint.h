#pragma once
#include <iostream>
// extern Hazel::Application* Hazel::createApplication();
#include "Application.h"
#ifdef HZ_PLATFORM_WINDOWS
int main()
{
	std::cout << "Start Run ... \n";
	auto sbx = Hazel::createApplication();
	sbx->run();
	delete sbx;
	return 0;
}

#endif