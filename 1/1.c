#include<stdio.h>
int sum(int n) {
	int a = 0;
	for (int j = 0; j < n; j++)
		for (int i = n - j; i > -1; i--)
			a += i;
	return a;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
	return 0;
}