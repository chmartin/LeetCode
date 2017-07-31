#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>

int main()
{
	std::vector<std::string> strs;
	strs.push_back("a");
	strs.push_back("a");
	strs.push_back("");
	strs.push_back("leeds");

	//get the first string
	if(strs.size() == 0)
        {
            std::cout << "Common string is empty." << std::endl;
	    return 0;
        }
	std::string first = strs.at(0);
	//std::cout << first << std::endl;
	if(first.size() == 0)
	{
	    std::cout << "Common string is empty." << std::endl;
            return 0;
        }	
	
	for(int i = 0; i < first.size() ; i++)
	{
	    //std::cout << first.at(i) << std::endl;
	    for(int j = 1; j < strs.size(); j++)
	    {
		//std::cout << first.substr(0,i+1) << std::endl;
		//std::cout << strs.at(j).substr(0,i+1) << std::endl;
	    	std::cout << first.compare(0,i+1,strs.at(j),0,i+1) << std::endl;
		if(first.compare(0,i+1,strs.at(j),0,i+1) != 0)
		{
		    if(i == 0)
		    {
			std::cout << "Common string is empty." << std::endl;
			return 0;
		    }
		    std::cout << "Longest String is: " << first.substr(0,i) << std::endl;
		    return 0;
		}
	    }
	}
	std::cout << "Longest String is the first string: " << first << std::endl;	
	return 0;
}
