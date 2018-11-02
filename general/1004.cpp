//Financial Management
#include <iostream>
#include <stdio.h>

using namespace std;

int		main(void)
{
	double	next;
	double	sum;
	int		i;

	i = 0;
	while(i < 12)
	{
		cin >> next;
		sum+=next;
		i++;
	}
	printf("$%.2f\n",(sum / 12));
	return (0);
}
