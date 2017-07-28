#include<iostream>
#include<stdlib.h>


int main ()
{

	std::string s = "DCXXI";
	int total = 0;
        int prev = 0;
        for(int i = 0; i < s.size(); i++)
        {
            char num = s.at(i);
            int temp = 0;
            switch (num) {
                case 'I':
                    temp = 1;
                    break;
                case 'V':
                    temp = 5;
                    break;
                case 'X':
                    temp = 10;
                    break;
                case 'L':
                    temp = 50;
                    break;
                case 'C':
                    temp = 100;
                    break;
                case 'D':
                    temp = 500;
                    break;
                case 'M':
                    temp = 1000;
                    break;
            }
            if(prev < temp) 
            {
                total -= prev;
                total += (temp-prev);
            }
            else
            {
                total += temp;
            }
            prev = temp;
            std::cout << total << " " << temp << " " << prev << std::endl;
        }
	std::cout << total << std::endl;
        return 0;
}
