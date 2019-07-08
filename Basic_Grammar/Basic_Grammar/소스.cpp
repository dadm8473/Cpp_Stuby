#include <iostream>

//// 기본적인 변수 정의
//int main()
//{
//	int i;
//	char c;
//	double d;
//	float f;
//
//	int arr[10];
//	int *parr = arr;
//
//	int i;
//	int *pi = &i;
//
//	return 0;
//}

//============================================================================================================================================

//// C++ 의 for 문
//int main() {
//	int i;
//
//	for (i = 0; i < 10; ++i) {
//		std::cout << i << std::endl;
//	}
//
//	return 0;
//}

//============================================================================================================================================

//// 1 부터 10 까지의 합
//int main() {
//	int i, sum = 0;
//
//	for (i = 1; i <= 10; ++i) {
//		sum += i;
//	}
//
//	std::cout << "합은 : " << sum << std::endl;
//	return 0;
//}

//============================================================================================================================================

//// C에서는 변수를 모두 최상단에서 선언하였지만,
//// 변수 사용 직전에 선언해도 된다.
//#include <iostream>
//
//int main() {
//	int sum = 0;
//
//	// 변수 사용 직전 for문 안에서 int i를 선언
//	for (int i = 1; i <= 10; i++) {
//		sum += i;
//	}
//
//	std::cout << "합은 : " << sum << std::endl;
//	return 0;
//}

//============================================================================================================================================

//// C++ 의 while 문
//#include <iostream>
//
//int main() {
//	int i = 1, sum = 0;
//
//	while (i <= 10) {
//		sum += i;
//		i++;
//	}
//
//	std::cout << "합은 : " << sum << std::endl;
//	return 0;
//}

//============================================================================================================================================

//// while 문 심화,  cin, if 문
//#include <iostream>
//
//int main() {
//	int lucky_number = 3;
//	std::cout << "내 비밀 수를 맞추어 보세요~" << std::endl;
//
//	int user_input;
//
//	while (1) {
//		std::cout << "입력 : ";
//		// C++ 에서의 scanf
//		// >>를 통해 변수 안에 입력을 user_input에 넣음
//		// scanf에서는 & 와 %d %c 등을 신경써줘야 했는데,
//		// C++의 cin에서는 신경쓰지 않아도됨
//		std::cin >> user_input;		
//
//		if (lucky_number == user_input) {
//			std::cout << "맞추셨습니다~~" << std::endl;
//			break;
//		}
//		else {
//			std::cout << "다시 생각해보세요~" << std::endl;
//		}
//	}
//
//	return 0;
//}

//============================================================================================================================================

// C++ 의 switch 문
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
	int user_input;
	cout << "자신의 정보를 표시해줍니다." << endl;
	cout << "1. 이름 " << endl;
	cout << "2. 나이 " << endl;
	cout << "3. 성별 " << endl;
	cin >> user_input;

	switch (user_input) {
	case 1:
		cout << "정수빈 !" << endl;
		break;
	case 2:
		cout << "19살" << endl;
		break;
	case 3:
		cout << "남자" << endl;
		break;
	default:
		cout << "궁금한게 없군요 ~" << endl;
		break;
	}

	return 0;
}