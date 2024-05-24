#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 문제 3
// 벡터 내 객체 순회

class Person {
public:
	string name;
	int age;

	Person(const string& name, int age) : name(name), age(age) {}
};

int main() {
	vector<Person> people = { Person("Alice", 30), Person("Bob", 25), Person("Charlie", 35) }; // Person

	// 여기에 range-based for loop을 사용하여 벡터의 모든 객체의 이름과 나이를 출력하세요

	for (const Person person : people) // 읽기 전용 const 적고 Class가 들어있는 이름(자료형처럼) 접근 Person, 그리고 대처할 이름 : 그리고 그안에 접근하는 people.
	{
		// 참고로 위 for each에서 ' : ' 이것은 "in"을 의미. 즉, "people 백터안의 각 요소에 대해" 라고 말함
		// 클래스식으로 호출하여 순회
		cout << person.name << "\t" << person.age << endl;
	}



	return 0;
}