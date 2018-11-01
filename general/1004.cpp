#include <iostream>
#include <stdio.h>
using namespace std;


int run()
{
	cout << "running";
	double a;
	double b;
	cin >> a >> b;
	cout << a << b << endl;
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

