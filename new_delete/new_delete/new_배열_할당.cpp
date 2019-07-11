//#include <iostream>
//
//int main(){
//	// int 크기의 공간을 할당하여 그 주소값을
//	// p 에 집어 넣음
//	int* p = new int;
//	*p = 10;
//
//	std::cout << *p << std::endl;
//
//	// p에 할당된 공간이 해제됨
//	// delete로 해제할 수 있는 메모리 공간은
//	// new를 통해 할당한 공간만 가능
//	delete p;
//
//	return 0;
//}

// ============================================================================================================================================================

//// 만약 아래처럼 지역변수를 무리하게 delete로 해제해버리려 한다면
//// Heap이 아닌 공간을 해제하려고 한다는 오류가 뜸
//
//#include <iostream>
//
//int main(){
//	int a = 5;
//
//	delete &a;
//	
//	return 0;
//}

// ============================================================================================================================================================

#include <iostream>

int main() {
	int arr_size;

	std::cout << "array size : ";
	std::cin >> arr_size;

	int *list = new int[arr_size];

	for (int i = 0; i < arr_size; ++i)
		std::cin >> list[i];

	for (int i = 0; i < arr_size; ++i)
		std::cout << i << "th element of list : " << list[i] << std::endl;

	delete[] list;

	return 0;
}