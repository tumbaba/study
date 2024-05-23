/*
준원이는 저번 주에 살면서 처음으로 코스트코를 가 봤다. 정말 멋졌다. 
그런데, 몇 개 담지도 않았는데 수상하게 높은 금액이 나오는 것이다! 준원이는 영수증을 보면서 정확하게 계산된 것이 맞는지 확인해보려 한다.

영수증에 적힌,

구매한 각 물건의 가격과 개수
구매한 물건들의 총 금액
을 보고, 구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하는지 검사해보자.


입력
첫째 줄에는 영수증에 적힌 총 금액
X가 주어진다.

둘째 줄에는 영수증에 적힌 구매한 물건의 종류의 수
N이 주어진다.

이후
N개의 줄에는 각 물건의 가격
a와 개수
b가 공백을 사이에 두고 주어진다.

출력
구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하면 Yes를 출력한다. 일치하지 않는다면 No를 출력한다.
*/

//구매한 각 물건 : 가격, 개수
//구매한 물건들 : 총금액
//총금액을 보고 영수증 금액과 일치하는지 검토

//첫째 줄 총금액 = X
//둘째 줄 물건 종류의 수 = N
// N(ab) = X
#include <iostream>
#include <vector>
using namespace std;
/*
int main() {
	cout << "총 금액 입력 : ";
	int Total;				//	총 금액
	cin >> Total;			//	(입력)
	
	cout << "구매한 제품 갯수 : ";
	int Product;			// 물건 갯수
	cin >> Product;			// (입력)    
	
	
	int	a;  // a = 각 1개 물건 갯수
	int b;  // b = 긱 1개 물건 가격
	//int c*[Product] = { 0, }; // 배열은 정수로 갯수지정을 해야한다...
	vector<int> c(Product); // 백터안에 무엇을 넣을지?

	for (int N = 0; N < Product; N++)
	{
		int i = N + 1; // 물건 갯수 = (배열 범위설정 + 1)
		cout << "물건" << i << " 가격과 갯수를 입력하세요 : ";
		cin >> a >> b;
		c[N] = a * b;
	}

	cout << endl;
	
	int Sum = 0;
	// C 값 확인
	for (auto Test : c) 
	{
		
		Sum += Test;
		//cout << Test << " ";
	}
	//cout << Sum << " "; 더한값 확인

	if (Total == Sum)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}


	return 0;
}
*/

int main() {
	
	int Total;
	cin >> Total;

	int Product;
	cin >> Product;	

	int	a; 
	int b;  
	
	vector<int> c(Product); 

	for (int N = 0; N < Product; N++)
	{
		cin >> a >> b;
		c[N] = a * b;
	}

	int Sum = 0;
	
	for (auto Test : c)
	{

		Sum += Test;
		
	}
	
	if (Total == Sum)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}
