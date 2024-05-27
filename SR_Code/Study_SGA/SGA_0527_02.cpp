#include <iostream>
#include <map>
#include <vector> // 맵을 위한 이해 이용

using namespace std;
// map은 키가 2개 있어야한다
// 맵 선언, 초기화
// map<key값, valuer값>  예: vector<int> vecInt;
map<int, int> mapInt = { {1,2}, {2, 10}, {10, 1000} };
map<int, string> mapString = { {10, "Hello world"}, {20, "Hello"} };

// 요소 추가
// 아래 벡터와 같지만 2개가 같이 입력해야된다는 것 <int, string>도 됨
// mapInt[key값] = value값
// mapString[10] = "string";	// --->{{10, "Hellow world"}, {20, "Hello"}}

// 접근방법
//int c = mapInt[10];			// value값 1000
//string str = mapString[10];	// value값 "Hello world" 출력

// 삭제
// mapInt.erase(key값); // 요소가 삭제
// 예 ) mapInt.erase(1); = 2가 삭재


vector<int> vecInt;
//vecInt[0].int값 출력
vector<string> vecStr;

//──────────────────────────vector, list, set과 map의 차이점──────────────────────────
/*
vector: 동적 배열로, 순차적 접근이 빠르며 랜덤 액세스가 가능. 
		크기를 동적으로 조절할 수 있지만, 삽입 및 삭제가 비효율적일 수 있음 (중간에 삽입 / 삭제 시).

list :	이중 연결 리스트로, 삽입 및 삭제가 효율적.
		하지만 순차적으로만 접근할 수 있어, 랜덤 액세스가 비효율적.

set :	고유한 값을 저장하며 자동으로 정렬.
		값의 삽입, 삭제, 검색이 평균적으로 O(log n)의 시간복잡도를 가짐.

map :	키 - 값 쌍을 저장하며, 키를 기준으로 자동 정렬. 
		키를 이용한 검색, 삽입, 삭제가 평균적으로 O(log n)의 시간복잡도를 가짐.

──────────────────────────  map을 사용해야 하는 이유  ──────────────────────────
		키 - 값 쌍을 효율적으로 저장하고 검색할 필요가 있을 때 사용.
		예를 들어, 사용자 ID와 사용자 정보를 저장하는 경우, map을 사용하면 특정 ID로 빠르게 사용자 정보를 검색할 수 있음.
*/


int main() {

	
	mapString[10] = "string";

	string str = mapString[10];

	//mapInt.erase(1);


	cout << "mapInt.size() 값: " << mapInt.size();
    cout << endl;
	
    /*
    map<string, int> studentGrades;

    // 요소 추가
    studentGrades["Alice"] = 90;
    studentGrades["Bob"] = 85;
    studentGrades["Charlie"] = 92;

    // 요소 접근
    cout << "Alice's grade: " << studentGrades["Alice"] << endl;

    // 요소 검색
    auto it = studentGrades.find("Bob");
    if (it != studentGrades.end()) {
        cout << "Bob's grade: " << it->second << endl;
    }

    // 요소 순회
    for (const auto& ABC : studentGrades) {
        cout << ABC.first << ": " << ABC.second << endl;
    }
    */
    
    
    
    // Iterator  =  반복자 (컨테이너 자체가 이터레이터를 갖고있음 - set, vector 등등)
    map<int, int>::iterator it = mapInt.begin(); 
    // it가 포인터라고(포인터주소) 생각하면 된다. iterator를 사용하면 포인터라고 생각하면 된다.
    // it = mapInt.end();
    for (it = mapInt.begin(); it != mapInt.end(); )
    {
        cout << it->first << " " << it->second << endl;
        ++it;
    }
    // while문 사용시
    while (it != mapInt.end())
    {
        cout << it->first << " " << it->second << endl;
        ++it;
        if (it == mapInt.end())
        {
            break;
        }
    }


    cout << endl; //  결과는 같지만 위와 아래 다르게 

    //범위증가
    for (const auto& it : mapInt)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << endl;
    
    /*
    // 새로운 iterator를 만들어서 2부터 출력인데... 구현되지않음(강사님 다시확인한다고함)
    auto range = mapInt.equal_range(2);
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    */


	return 0;
}
// c++로 다루기위한 2D = cocos2d - x