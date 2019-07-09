#include <iostream>

int main() {
	//int &ref = 4;
	// 위 처럼 쓰면 상수 값 자체는
	// 리터럴이기 때문에
	// ref = 5;
	// 로 리터럴의 값을 바꿀 수 잇는 여지가
	// 생기기 때문에 참조할 수 없음.

	// 상수 참조자로 선언한다면 리터럴로 참조 할 수 있게 된다.
	const int &ref = 4;
	int a = ref;
	// 는 a = 4; 와 동일하다.
	// 상수를 참조하기 위해서는 상수 레퍼런스를 선언해야한다.

	std::cout << ref << std::endl;
}