#include <iostream>
#include <stdio.h>
#include <cmath>

#define PI 3.14159265359

using namespace std;


void run()
{
	double		R;
	int			n;
	double		result;

	cin >> R >> n;
	result = (R / ((1 / sin(PI / n)) + 1));
	printf("%.3f\n\n", result);
}

int main()
{
	int count;
	int i;
	
	i = 1;
	cin >> count;
	while (i <= count)
	{
		cout << "Scenario #" << i << ":" << endl;
		run();
		i++;
	}
	return (0);
}

