#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<algorithm>

std::string mydivide(std::vector<std::string>& strs, int left, int right)
{
	if(left == right)
	{
	    return strs.at(left);
	}
	else
	{
	    int middle = (left + right)/2;
	    std::string strleft = mydivide(strs, left, middle);
	    std::string strright = mydivide(strs, middle+1, right);
	    int shorter = std::min(strleft.size(), strright.size());
	    for(int i = 0; i < shorter; i++)
	    {
		if(strleft.at(i) != strright.at(i))
		{
		    return strleft.substr(0,i);
		}
	    }
	    return strleft.substr(0,shorter);
	}	
}

int main()
{
	std::vector<std::string> strs;
	strs.push_back("leetcode");
	strs.push_back("leets");
	strs.push_back("leet");
	strs.push_back("leeds");

	//get the first string
	if(strs.size() == 0)
        {
            std::cout << "Common string is empty." << std::endl;
	    return 0;
        }
	else if(strs.at(0).size() == 0)
	{
	    std::cout << "Common string is empty." << std::endl;
	    return 0;
	}
	
	std::string solution = mydivide(strs, 0, strs.size()-1);
	
	std::cout << "Solution: " << solution << std::endl;
	return 0;
}
