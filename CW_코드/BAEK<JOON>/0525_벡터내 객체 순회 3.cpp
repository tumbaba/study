// 0525_배열순회 3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
public:
    std::string name;
    int age;

    Person(const string& name, int age) : name(name), age(age) {}
};

int main()
{
    vector<Person> people = { Person("Alice", 30), Person("Bob", 25), Person("Charlie", 35) };

    for ( Person preson : people)
    {
        cout << "Name :" << preson.name << " age :" << preson.age << endl;
    }

}
