#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>

int main()
{
	std::vector<std::string> strs;
	strs.push_back("leetcode");
	strs.push_back("a");
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
	
	for(int i = 0; i < strs.at(0).size(); i++)
	{
	    char c = strs.at(0).at(i);
	    for(int j = 1; j < strs.size(); j++)
	    {
	    	if(i == strs.at(j).size() || c != strs.at(j).at(i))
		{
		  std::cout << "Longest string is: " << strs.at(i).substr(0,i) << std::endl;
		  return 0;
		} 
		
	    }
	}
	std::cout << "Longest String is the first string: " << strs.at(0) << std::endl;	
	return 0;
}
