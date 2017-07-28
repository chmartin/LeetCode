#include <iostream>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x = 123;
	std::string new_number;
	if(x<0)
	{
		std::string number = std::to_string(-x);
		new_number = number;
		std::reverse(new_number.begin(),new_number.end());
	}
	else
	{
		std::string number = std::to_string(x);
		new_number = number;
		std::reverse(new_number.begin(),new_number.end());
	}
	long int num_unsigned = std::atoi(new_number.c_str());
	int solution = 0;
	//std::cout << num_unsigned << " " << (pow(2.,31.) - 1) << std::endl;
	if(num_unsigned > (pow(2.,31.) - 1))
	{
		std::cout << "got here" << std::endl;
		solution = 0;
	}
	else if (x < 0)
	{
		solution = -(static_cast<int>(num_unsigned));
	}
	else
	{
		solution = (static_cast<int>(num_unsigned));
	}
	std::cout << solution << std::endl;
	return 0;
}
