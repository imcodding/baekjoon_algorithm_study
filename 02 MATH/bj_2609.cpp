#include <iostream>
#include <vector>
using namespace std;
int gcd(int x, int y) { // �ִ�����
	if (y == 0) return x;
	else return gcd(y, x % y);
}
int main()
{
	int a, b;
	cin >> a >> b;
	int g = gcd(a, b);
	int l = a * b / g; // �ּҰ����
	cout << g << '\n' << l;
	return 0;
}