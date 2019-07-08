//// C 에서의 포인터
//// change_val 함수의 인자 p에 number의 주소값을 전달하여,
//// *p를 통해 number를 참조하여 number의 값을 3으로 바꿨습니다.
//#include <iostream>
//
//int change_val(int *p) {
//	*p = 3;
//	return 0;
//}
//
//int main() {
//	int number = 5;
//
//	std::cout << number << std::endl;
//	change_val(&number);
//	std::cout << number << std::endl;
//}

// =====================================================================================================================================

//// C++에서 새롭게 생겨난 개념 - 레퍼런스
//// change_val 함수에서 number 앞에 &를 붙이지 않았습니다.
//// change_val 함수에서도 *p = 3; 대신 p = 3으로 바뀌었습니다.
//// 그 대신에 change_val 에서 인자로 int &p를 받고 있습니다.
//// 이것이 바로 레퍼런스 입니다.
//
//#include <iostream>
//
//int change_val(int &p){
//	p = 3;
//
//	return 0;
//}
//
//int main() {
//	int number = 5;
//
//	std::cout << number << std::endl;
//	change_val(number);
//	std::cout << number << std::endl;
//}

// =====================================================================================================================================

//// 참조자 이해하기
//
////레퍼런스를 정의하는 방법
//// int& ref = number;
//// number의 다른 이름은 ref이다 와 같음
//
///*
//int a = 10;
//int &ref = a;
//int b = 3;
//ref = b;
//*/
//// 위 코드 ref = b; 에서 b를 가리키는 것이 아니라
//// a = b;, 즉 a에 3이 대입되는 것.
//
//// 한 번 별명이 된다면 영원히 바뀔 수 없음.
//
//// 밑 코드는 x y z가 서로 별명
//#include <iostream>
//
//int main() {
//	int x;
//	int& y = x;
//	int& z = y;
//
//	x = 1;
//	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
//
//	y = 2;
//	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
//
//	z = 3;
//	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
//}
//
//// std::cin >> user_input;
//// scanf("%d", &user_input);
//// C 에서는 입력에서 항상 주소값을 전달해 주었지만,
//// C++ 에서는 레퍼런스 형태로 전달하였기 때문에 &를 붙여줄 필요가 없음.