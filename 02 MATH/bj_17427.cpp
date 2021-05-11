#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long sum = 0; // int 불가능. 문제크기 확인
	// *Point : A는 약수의 배수이다.
	// 8의 약수 => 1,2,4,8.
	// 8은 1,2,4,8의 배수이다.
	for (int i = 1; i <= n; i++) {
		sum += (n / i) * i;
	}
	cout << sum;
	return 0;
}