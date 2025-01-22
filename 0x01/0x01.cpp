#include <iostream>
//1 O(N)
int func1(int N) {
	int result = 0;
	for (int i = N; i > 0; i--) {
		if (i % 3 == 0 || i % 5 == 0) {
			result += i;
		}
	}
	return result;
}

//2 O(N²) -> O(N)으로 푸는 방법도 있다
int func2(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] + arr[j] == 100) {
				return 1;
			}
		}
	}
	return 0;
}

//2-1 O(N)으로 푸는 방법
int func2_1(int arr[], int N) {
	bool c[101]{false};
	for (int i = 0; i < N; i++) {
		if (c[100 - arr[i]] == true) {
			return 1;
		}
		c[arr[i]] = true;
	}
	return 0;
}



//3 O(√N)
int func3(int N) {
	for (int i = 0; i * i <= N; i++) {
		if (i * i == N) {
			return 1;
		}
	}
	return 0;
}

//4 O(logN)
int func4(int N) {
	int i = 1;
	while (i * 2 <= N) {
		i *= 2;
	}
	return i;
}

int main()
{

	//1
	std::cout << func1(16) << std::endl;
	std::cout << func1(34567) << std::endl;
	std::cout << func1(27639) << std::endl;

	//2, 2-1
	int arr1[3] = {1, 52, 48};
	int arr2[2] = {5, 42};
	int arr3[4] = {4, 13, 63, 87};
	std::cout << func2_1(arr1, 3) << std::endl;
	std::cout << func2_1(arr2, 2) << std::endl;
	std::cout << func2_1(arr3, 4) << std::endl;

	//3
	std::cout << func3(9) << std::endl;
	std::cout << func3(693953651) << std::endl;
	std::cout << func3(756580036) << std::endl;

	//4
	std::cout << func4(5) << std::endl;
	std::cout << func4(97615282) << std::endl;
	std::cout << func4(1024) << std::endl;
	return 0;
}

