#include <iostream>

#define LOG(m)	std::cout.width(5); std::cout.fill('0'); std::cout << m << "   "

int main()
{
	LOG("preincremento \n");
	for (int i = 0; i < 10; ++i)
	{ 
		LOG(i);
	}
	LOG("\npostincremento \n");
	for (int i = 0; i < 10; i++)
	{
		LOG(i);
	}
	
	std::cout << "\n\n   ";
	int a = 8;
	LOG(a);
	LOG(++a);
	LOG(a++);
	LOG(a);
	std::cout << "\n\n";
	
	std::cin.get();
	return 0;
}