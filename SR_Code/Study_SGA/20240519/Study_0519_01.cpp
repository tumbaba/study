#include <iostream>
using namespace std;
/* ---- sample ---
int main() {

	return 0;
}
*/

// ────────────────────────────────────────── 075 Call by Reference 이해하기 ──────────────────────────────────────────
/*
#include <string>

//함수 1
void Func1(int& arg) // int 자료형 주소를 가리키는 포인터를 받음
{
	cout << "변경 전 : " << arg << endl;
	arg += 10; // int형 내용추가

	cout << "변경 후 : " << arg << endl;
}
//함수 2
void Func2(string& info) // string 자료형 주소를 가리키는 포인터를 받음
{
	info += "981년"; // string형 내용추가
}

int main() {
	int year = 10;

	Func1(year); // 함수1에 지역변수 int 10을 넣는다.
	cout << "Func1 함수 종료 후 : " << year << endl; // 함수1은 인자를 복사해 사용하지 않고 인자의 주소를 가리키는 포인터를 사용하기 때문에 year 변수값 증가.

	string king_info = "고려 성종 즉위년 : ";
	
	Func2(king_info); //함수2에 지역변수 king_info를 넣는다.
	cout << king_info << endl; // 함수2에도 위와같이 동일함


	return 0;
}
*/
// ────────────────────────────────────────── 080 enumm class 이해하기 ──────────────────────────────────────────

// enum 
enum Status
{
	normal = 0,
	abnormal,
	disconnect = 100,
	close
};
// enum class
enum class MachineStatus : char // char 형처럼 자료형이 없는상태로 선언했을때는 int 자료형 인식을 갖게되므로 명확하게 해야함.
{
	normal = 'n',
	abnormal,
	disconnect = 100,
	close
};

int main() {

	MachineStatus machine = MachineStatus::abnormal;

	if (machine == MachineStatus::normal) {
		cout << "Status : normal" << endl;
	}
	else if (machine == MachineStatus::abnormal){
		cout << "Status : abnormal" << endl;
	}
	else if (machine == MachineStatus::disconnect) {
		cout << "Status : disconnect" << endl;
	}
	else{
		cout << "Status : close" << endl;
	}


	// 아래처럼 형변환할때는 이렇게 int A = static_cast<int>(machine); 필요함 (enum 클래스의 기본 타입이 int라고 해도 바로 정수값으로 변환되지는 않기 때문에 형변환 연산자를 사용해야 한다.)
	cout << "machine : " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl;


	return 0;
}
