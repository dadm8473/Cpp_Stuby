//#include <iostream>
//
//int main(){
//	// int ũ���� ������ �Ҵ��Ͽ� �� �ּҰ���
//	// p �� ���� ����
//	int* p = new int;
//	*p = 10;
//
//	std::cout << *p << std::endl;
//
//	// p�� �Ҵ�� ������ ������
//	// delete�� ������ �� �ִ� �޸� ������
//	// new�� ���� �Ҵ��� ������ ����
//	delete p;
//
//	return 0;
//}

// ============================================================================================================================================================

//// ���� �Ʒ�ó�� ���������� �����ϰ� delete�� �����ع����� �Ѵٸ�
//// Heap�� �ƴ� ������ �����Ϸ��� �Ѵٴ� ������ ��
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