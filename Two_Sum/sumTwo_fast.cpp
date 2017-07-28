#include<iostream>
#include<stdlib.h>
#include<unordered_map>

int main()
{
int target = 12;
int array[5] = {3,7,9,10,13};

std::unordered_map<int, int> map;
int result[2] = {-1,-1};
for(int i = 0; i < 5; i++)
{
	int findme = target - array[i];
	if(map.find(findme) != map.end())
	{
		result[0] = (map[findme]+1);
		result[1] = (i+1);
	}
map[array[i]] = i;
}

std::cout << "Result: " << result[0] << " " << result[1] << std::endl;

return 0;

}
