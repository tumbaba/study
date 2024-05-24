#include <iostream>
#include <vector>
#include <string>
using namespace std;
// ���� 3
// ���� �� ��ü ��ȸ

class Person {
public:
	string name;
	int age;

	Person(const string& name, int age) : name(name), age(age) {}
};

int main() {
	vector<Person> people = { Person("Alice", 30), Person("Bob", 25), Person("Charlie", 35) }; // Person

	// ���⿡ range-based for loop�� ����Ͽ� ������ ��� ��ü�� �̸��� ���̸� ����ϼ���

	for (const Person person : people) // �б� ���� const ���� Class�� ����ִ� �̸�(�ڷ���ó��) ���� Person, �׸��� ��ó�� �̸� : �׸��� �׾ȿ� �����ϴ� people.
	{
		// ����� �� for each���� ' : ' �̰��� "in"�� �ǹ�. ��, "people ���;��� �� ��ҿ� ����" ��� ����
		// Ŭ���������� ȣ���Ͽ� ��ȸ
		cout << person.name << "\t" << person.age << endl;
	}



	return 0;
}