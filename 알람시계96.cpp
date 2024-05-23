//#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>
#include <map>
#include <set>
#include <vector>

using namespace std;


int main()
{

	int hour;
	int min;

	cin >> hour >> min;
	int aftre_min = min - 45;
	if (aftre_min < 0)
	{
		aftre_min =  60 + aftre_min ;
		hour = hour - 1;
		if (hour < 0)
		{
			hour = 24 + hour;
		}
	}

	cout << hour << " " << aftre_min << endl;
	


	return 0;
}