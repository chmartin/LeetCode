#include<iostream>

int main()
{
	int x = 123321;
	bool isPal = false;
	int ans = 0;
	int input = x;
        if(input < 0) isPal = false;
        while (x) {
            int temp = ans * 10 + x % 10;
            if (temp / 10 != ans)
            {
                isPal = false;
		std::cout << "False" << std::endl;
		return 0;
            }
            ans = temp;
            x /= 10;
        }
        if(ans == input) 
	{
		isPal = true;
	}
	if( isPal == true ) std::cout << "True" << std::endl;
	else std::cout << "False" << std::endl;
	return 0;
}
