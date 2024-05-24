
#include <iostream>

using namespace std;

int main()
{
	int total; //합계금액
	cin >> total; 

	int number; //물건 종류의 수
	cin >> number; 

	int sum = 0; 

	int price, quantity; //물건 가격 수량 

	for (int i = 0; i < number; i++)
	{
		
		cin >> price >> quantity;
		sum += (price * quantity);
	}

	if (sum == total)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
