#include <iostream>

using namespace std;

int main()
{
	int my_money; 
	cin >> my_money; 
	int item; 
	cin >> item;

	int m_item, s_item;
	int total_money = 0;


	for (int i = 0; i < item; i++)
	{
		cin >> m_item;
		cin >> s_item;
		total_money += m_item * s_item;
	}

	if (my_money == total_money)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}


	return 0;
}
