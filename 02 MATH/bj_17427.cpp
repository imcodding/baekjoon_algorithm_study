#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long sum = 0; // int �Ұ���. ����ũ�� Ȯ��
	// *Point : A�� ����� ����̴�.
	// 8�� ��� => 1,2,4,8.
	// 8�� 1,2,4,8�� ����̴�.
	for (int i = 1; i <= n; i++) {
		sum += (n / i) * i;
	}
	cout << sum;
	return 0;
}