#include "stdafx.h"

/*
chat gpt 검색내용

1. 포인터 변수 선언: 포인터를 선언할 때에는 변수의 데이터 타입 뒤에 *를 붙입니다. 
    예를 들어, int형 변수를 가리키는 포인터는 int *ptr;와 같이 선언할 수 있습니다.

2. 포인터에 주소 할당: 변수의 주소를 포인터에 할당하려면 주소 연산자 &를 사용합니다. 
    예를 들어, int var = 10;이라는 변수가 있을 때, ptr = &var;와 같이 변수 var의 주소를 ptr에 할당할 수 있습니다.

3. 포인터를 통한 간접 참조: 포인터를 통해 해당 메모리 주소에 접근하려면 간접 참조 연산자 *를 사용합니다. 
    예를 들어, *ptr은 포인터가 가리키는 변수에 접근합니다.

4. 동적 메모리 할당과 해제: new 키워드를 사용하여 동적으로 메모리를 할당할 수 있습니다. 
    할당된 메모리는 delete 키워드를 사용하여 해제합니다.
*/


int main() {

    int var = 10;
    int* ptr;  // 포인터 선언

    ptr = &var;  // 포인터에 변수의 주소 할당

    std::cout << "변수 var의 값: " << var << std::endl;
    std::cout << "포인터를 통한 간접 참조: " << *ptr << std::endl;

    // 동적 메모리 할당과 해제
    int* dynamicPtr = new int;  // int형 동적 메모리 할당
    *dynamicPtr = 20;
    std::cout << "동적으로 할당된 변수의 값: " << *dynamicPtr << std::endl;
    delete dynamicPtr;  // 메모리 해제


	return 0;
}
