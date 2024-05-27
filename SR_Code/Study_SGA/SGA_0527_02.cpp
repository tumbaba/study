#include <iostream>
#include <map>
#include <vector> // ���� ���� ���� �̿�

using namespace std;
// map�� Ű�� 2�� �־���Ѵ�
// �� ����, �ʱ�ȭ
// map<key��, valuer��>  ��: vector<int> vecInt;
map<int, int> mapInt = { {1,2}, {2, 10}, {10, 1000} };
map<int, string> mapString = { {10, "Hello world"}, {20, "Hello"} };

// ��� �߰�
// �Ʒ� ���Ϳ� ������ 2���� ���� �Է��ؾߵȴٴ� �� <int, string>�� ��
// mapInt[key��] = value��
// mapString[10] = "string";	// --->{{10, "Hellow world"}, {20, "Hello"}}

// ���ٹ��
//int c = mapInt[10];			// value�� 1000
//string str = mapString[10];	// value�� "Hello world" ���

// ����
// mapInt.erase(key��); // ��Ұ� ����
// �� ) mapInt.erase(1); = 2�� ����


vector<int> vecInt;
//vecInt[0].int�� ���
vector<string> vecStr;

//����������������������������������������������������vector, list, set�� map�� ����������������������������������������������������������
/*
vector: ���� �迭��, ������ ������ ������ ���� �׼����� ����. 
		ũ�⸦ �������� ������ �� ������, ���� �� ������ ��ȿ������ �� ���� (�߰��� ���� / ���� ��).

list :	���� ���� ����Ʈ��, ���� �� ������ ȿ����.
		������ ���������θ� ������ �� �־�, ���� �׼����� ��ȿ����.

set :	������ ���� �����ϸ� �ڵ����� ����.
		���� ����, ����, �˻��� ��������� O(log n)�� �ð����⵵�� ����.

map :	Ű - �� ���� �����ϸ�, Ű�� �������� �ڵ� ����. 
		Ű�� �̿��� �˻�, ����, ������ ��������� O(log n)�� �ð����⵵�� ����.

����������������������������������������������������  map�� ����ؾ� �ϴ� ����  ����������������������������������������������������
		Ű - �� ���� ȿ�������� �����ϰ� �˻��� �ʿ䰡 ���� �� ���.
		���� ���, ����� ID�� ����� ������ �����ϴ� ���, map�� ����ϸ� Ư�� ID�� ������ ����� ������ �˻��� �� ����.
*/


int main() {

	
	mapString[10] = "string";

	string str = mapString[10];

	//mapInt.erase(1);


	cout << "mapInt.size() ��: " << mapInt.size();
    cout << endl;
	
    /*
    map<string, int> studentGrades;

    // ��� �߰�
    studentGrades["Alice"] = 90;
    studentGrades["Bob"] = 85;
    studentGrades["Charlie"] = 92;

    // ��� ����
    cout << "Alice's grade: " << studentGrades["Alice"] << endl;

    // ��� �˻�
    auto it = studentGrades.find("Bob");
    if (it != studentGrades.end()) {
        cout << "Bob's grade: " << it->second << endl;
    }

    // ��� ��ȸ
    for (const auto& ABC : studentGrades) {
        cout << ABC.first << ": " << ABC.second << endl;
    }
    */
    
    
    
    // Iterator  =  �ݺ��� (�����̳� ��ü�� ���ͷ����͸� �������� - set, vector ���)
    map<int, int>::iterator it = mapInt.begin(); 
    // it�� �����Ͷ��(�������ּ�) �����ϸ� �ȴ�. iterator�� ����ϸ� �����Ͷ�� �����ϸ� �ȴ�.
    // it = mapInt.end();
    for (it = mapInt.begin(); it != mapInt.end(); )
    {
        cout << it->first << " " << it->second << endl;
        ++it;
    }
    // while�� ����
    while (it != mapInt.end())
    {
        cout << it->first << " " << it->second << endl;
        ++it;
        if (it == mapInt.end())
        {
            break;
        }
    }


    cout << endl; //  ����� ������ ���� �Ʒ� �ٸ��� 

    //��������
    for (const auto& it : mapInt)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << endl;
    
    /*
    // ���ο� iterator�� ���� 2���� ����ε�... ������������(����� �ٽ�Ȯ���Ѵٰ���)
    auto range = mapInt.equal_range(2);
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    */


	return 0;
}
// c++�� �ٷ������ 2D = cocos2d - x