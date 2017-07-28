#include<iostream>

int main()
{
int target = 6;
int array[5] = {3,5,7,9,10};

int pos1 = -1;
int pos2 = -1;
bool found = false;

for(int i = 0; i < 5; i++)
{
	for(int j = 5-1; j > i; j--)
	{
		if(array[i]+array[j]==target)
		{
			pos1=i;
			pos2=j;
			found=true;
		}
	}
}

if(found) std::cout << "Array entires: " << pos1 << " " << pos2 << std::endl;
else std::cout << "Not found" << std::endl;

return 0;

}
