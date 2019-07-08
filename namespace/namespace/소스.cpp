//#include <iostream>
//#include "header1.h"
//#include "header2.h"
//
//// 예시 1
//namespace header1
//{
//	int func()
//	{
//		// header1의 foo를 호출
//		foo();
//		// header2의 foo를 호출
//		header2::foo();
//	}
//}
//
////==================================================================================================================================================================
//#include <iostream>
//#include "header1.h"
//#include "header2.h"
//
//// 예시 2
//int func()
//{
//	// header1의 foo를 호출
//	header1::foo();
//	// header2의 foo를 호출
//	header2::foo();
//}
//
////==================================================================================================================================================================
//
//// 예시 3
//#include <iostream>
//#include "header1.h"
//#include "header2.h"
//// header1 이름 공간의 정의된 모든 것들을
//// header1:: 없이 사용할 수 있음
//using namespace header1;
//
//int main()
//{
//	// header1의 foo를 호출
//	foo();
//	// header2의 foo를 호출
//	header2::foo();
//}

//==================================================================================================================================================================

//// 예시 4
//// namespace에 굳이 이름을 설정하지 않아도 됨
//// 이름을 설정하지 않을 경우,
//// static처럼 해당 파일 안에서만 접근할 수 있음
//#include <iostream>
//namespace 
//{
//	int OnlyInThisFile() {}
//	int only_in_this_file = 0;
//}
//
//int main() 
//{
//	OnlyInThisFile();
//	only_in_this_file = 3;
//}

//==================================================================================================================================================================

// 결론적으로 using namespace std를 활용함으로써
// cout 과 endl애서 사용하는 std::를 생략할 수 있음
// using namespace std를 사용한 후에
// 이름공간 std에서 사용한 함수나 변수명이 겹칠 경우,
// 오류가 날 수 있음. 앵간하면 쓰지 말도록

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello, World!!" << endl;
	
	std::cout << "hi" << std::endl
		<< "my name is "
		<< "Jsb" << std::endl;
	
	return 0;
}