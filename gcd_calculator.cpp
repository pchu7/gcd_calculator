#include <iostream>

using namespace std;

int main()
{		
	int x, y;

	printf("Enter any two integers: ");
	scanf("%d %d", &x, &y);
	
	while (x != y)
	{
		if (x > y) x -= y;
		else y -= x;
	}

	printf("GCD = %d\n", x);
	return 0;
}
