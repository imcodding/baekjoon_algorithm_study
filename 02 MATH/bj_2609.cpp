#include <iostream>
#include <vector>
using namespace std;
int gcd(int x, int y) { // 최대공약수
	if (y == 0) return x;
	else return gcd(y, x % y);
}
int main()
{
	int a, b;
	cin >> a >> b;
	int g = gcd(a, b);
	int l = a * b / g; // 최소공배수
	cout << g << '\n' << l;
	return 0;
}