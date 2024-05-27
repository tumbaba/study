#include "stdafx.h"	

// ──────────────────────────────────────────041 반복문 이용 : 피보나치 수열 출력 ──────────────────────────────────────────
int main() {

	int p = 0;
	int n = 0;
	int t = 0;

	for (int i = 1; i < 10; i++)
	{
		p = 0;
		n = 1;
		for (int j = 1; j <= i; j++)                          
		{
			cout << n << ", ";            
			t = n;
			n += p;
			p = t;
		}
		cout << endl;
	}

	return 0;
}


/*
i를 출력했을때
for (int i = 1; i < 10; i++)
{for (int j = 1; j <= i; j++)}
1				▼
22				▼
333				▼
4444			▼
55555			▼
666666			▼
7777777			▼
88888888		▼
999999999		▼

j를 출력했을때
1				▶
12				▶
123				▶
1234			▶
12345			▶
123456			▶
1234567			▶
12345678		▶
123456789		▶


1,
1, 1,
1, 1, 2,
1, 1, 2, 3,
1, 1, 2, 3, 5,
1, 1, 2, 3, 5, 8,
1, 1, 2, 3, 5, 8, 13,
1, 1, 2, 3, 5, 8, 13, 21,
1, 1, 2, 3, 5, 8, 13, 21, 34,

*/
