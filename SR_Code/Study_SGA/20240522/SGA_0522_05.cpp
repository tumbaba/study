#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>
#include <set>

int main() {
    // 난수 생성기 초기화
    srand(time(NULL));

    // 20개의 int를 담을 리스트 생성
    std::list<int> numbers;
    // 1~20까지의 랜덤 숫자를 리스트에 저장
    for (int i = 0; i < 20; ++i) {
        numbers.push_back(rand() % 20 + 1);
    }
    //숫자 정렬
    numbers.sort();

    // numbers 리스트 출력
    std::cout << "numbers 리스트: ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // 중복 제거된 리스트를 만듬
    std::set<int> unique_numbers_list;
    std::set<int> seen;

    // 삭제된 숫자를 출력
    std::cout << "삭제된 숫자: ";
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

    // 중복 제거된 리스트 출력
    std::cout << "중복 제거된 리스트: ";
    for (int number : seen) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    return 0;
}
//[출처] 2024.05.22 강의 내용입니다. (서울게임아카데미 성남캠퍼스) | 작성자 허영준