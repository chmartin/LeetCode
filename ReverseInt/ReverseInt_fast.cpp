#include<iostream>

int main()
{
	int x = -123;
	int ans = 0;
	while(x)
	{
		int temp = ans * 10 + x % 10;
		if(temp / 10 != ans)
		{
			return 0;
		}
		ans = temp;
		x /= 10;
	}
	std::cout << ans << std::endl;
	return 0;
}
