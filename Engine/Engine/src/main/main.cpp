#include <iostream>

#include "ThreadsManager.h"

void f()
{
	while (true)
		std::cout << "Hello" << std::endl;
}

void f1()
{
	while (true)
		std::cout << "kek";
}

int main()
{
	//initialize window and input handlers
	
	ThreadsManager mg{ f, f1 };

	//main loop with input handler
	while (true) //add main game manager with staste PLAING
	{

	}

	return 0;
}