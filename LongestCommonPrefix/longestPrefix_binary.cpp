#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<algorithm>

bool Compare(std::vector<std::string>& strs, int length)
{
	std::string str = strs.at(0).substr(0,length);
	for(int i = 1; i < strs.size(); i++)
	{
	    if(str != strs.at(i).substr(0,length))
	    {
		return false;
	    }
	}
	return true;
}

int main()
{
	std::vector<std::string> strs;
	strs.push_back("leetcode");
	strs.push_back("leets");
	strs.push_back("leet");
	strs.push_back("ia");

	//get the first string
	if(strs.size() == 0)
        {
            std::cout << "Common string is empty." << std::endl;
	    return 0;
        }
	int min_length = strs.at(0).size();
	for(int i = 1; i < strs.size() ; i++)
	{
	    min_length = std::min(min_length, static_cast<int>(strs.at(i).size()));
	}
	int low = 1;
	int high = min_length;
	while (low <= high)
	{
	    int middle = (high + low)/2;
	    if (Compare(strs,middle))
	    {
		low = middle + 1;
	    }
	    else
	    {
		high = middle - 1;
	    }
	}
	std::string solution = strs.at(0).substr(0,((low + high)/2));
	std::cout << "Solution: " << solution << std::endl;
	return 0;
}
