#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) == 1) {
		int num = 0;
		for (int i = 1;; i++) {
			num = 10 * num + 1;
			num %= n;
			if (num == 0) {
				printf("%d\n", i);
				break;
			}
		}
	}
}