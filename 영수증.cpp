//#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int total;
	cin >> total;
	int m;
	cin >> m;
	int a;
	int b; 
	vector<int> c(m);
	for (int i = 0; i < m; i++)
	{
		
		cin >> a >> b;
		c[i] = a * b;
	}
	int d=0;
	for (auto& hi : c)
	{
		d += hi;
	}
	if (d == total)
	{
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}