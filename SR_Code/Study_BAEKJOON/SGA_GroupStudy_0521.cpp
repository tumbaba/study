#include <iostream>
// 구구단
//N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.

int main() {

	int N;  // 자료형 int 선언
	std::cin >> N; // 입력값


	for (int a = 1; a <= 9; a++)
	{
		std::cout << N << " * " << a << " = " << N * a << std::endl;
	}



	return 0;
}
