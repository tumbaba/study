#include "stdafx.h"
// 0514 ────────────▶ vector 내용 
#include <vector>

//void maxInt<T>(T x) {}
 

void maxInt(int x) {} // 타입별로 여러개 함수를 만들고 이름이 같아도 자료형 컴파일로 알아서 배치되는데
void maxInt(float x) {}



int main(){

	//maxInt(10);
	//maxInt(3.14f);
	
	// vector<int> myVector; // 사이즈 없어도 됨
	// vector<int> myVector = {1,2,3,4,5}; // 배열 형식으로도 가능함
	vector<int> myVector(5); // 사이즈 선언 , class 라이브러리이고 템플렛이다. int 형태의 백터생성

	// 사이즈 선언 후 배열에 해당되는 배열의 값 변경
	myVector[0] = 1;
	myVector[1] = 10;
	myVector[2] = 20;
	myVector[3] = 30;
	myVector[4] = 40;

	// for(int &i : myVector)
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << "myVector[" << i << "] = " << myVector[i] << endl;
	}

	cout << "───────────────────────────────────────────────\n";

	//백터 요소의 값을 변경할때 
	for (int i = 0; i < myVector.size(); i++)
	{
		myVector[i] += 5;
		int value = myVector[i];
		//int value = myVector.at(i); // at함수는 배열에서 인덱스 값 얻어오는 것과 동일한 함수 (위 주석과 같은내용)
		cout << "myVector[" << i << "] = " << value << endl;
	}

	cout << "───────────────────────────────────────────────\n";
	
	//요소 추가 (마지막 항목에 추가된 내용)
	myVector.push_back(50); 

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << "myVector[" << i << "] = " << myVector[i] << endl;
	}

	cout << "───────────────────────────────────────────────\n";

	// 요소 삭제 (마지막 항목을 삭제되는 내용)
	myVector.pop_back(); 
	myVector.pop_back();
	myVector.pop_back();

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << "myVector[" << i << "] = " << myVector[i] << endl;
	}

	cout << "───────────────────────────────────────────────\n";



	int i = 0;
	for (int my : myVector)
	{
		cout << "myVector[" << i << "] = " << my << endl;
		i++;
	}



	return 0;
}
