#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int min, max;
	min = max = a[0];
	for (int i = 0; i < n; i++) {
		if (min > a[i]) min = a[i];
		if (a[i] > max) max = a[i];
	}
	cout << min * max << '\n';
	return 0;
}