#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>
#include <set>

int main() {
    // ���� ������ �ʱ�ȭ
    srand(time(NULL));

    // 20���� int�� ���� ����Ʈ ����
    std::list<int> numbers;
    // 1~20������ ���� ���ڸ� ����Ʈ�� ����
    for (int i = 0; i < 20; ++i) {
        numbers.push_back(rand() % 20 + 1);
    }
    //���� ����
    numbers.sort();

    // numbers ����Ʈ ���
    std::cout << "numbers ����Ʈ: ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // �ߺ� ���ŵ� ����Ʈ�� ����
    std::set<int> unique_numbers_list;
    std::set<int> seen;

    // ������ ���ڸ� ���
    std::cout << "������ ����: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (seen.find(*it) != seen.end()) {
            unique_numbers_list.insert(*it);
        }
        seen.insert(*it);
    }

    for (int number : unique_numbers_list) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // �ߺ� ���ŵ� ����Ʈ ���
    std::cout << "�ߺ� ���ŵ� ����Ʈ: ";
    for (int number : seen) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    return 0;
}
//[��ó] 2024.05.22 ���� �����Դϴ�. (������Ӿ�ī���� ����ķ�۽�) | �ۼ��� �㿵��