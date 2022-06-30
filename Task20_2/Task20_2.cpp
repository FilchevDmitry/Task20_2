#include <iostream>
#include<fstream>
#include<ctime>

int main()
{
	std::srand(std::time(nullptr));
	int width = 30;
	int height = 30;
	std::cout << "Enter the width : ";
	std::cin >> width;
	std::cout << "Enter the height : ";
	std::cin >> height;
	std::ofstream pic("pic.txt");
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			pic << rand()%2;
		}
		pic << std::endl;
	}
}
