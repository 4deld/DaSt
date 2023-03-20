#include<stdio.h>
void ftn(int a) {
	if (a == 0) {
		return;
	}
	ftn(a / 10);
	printf("%d\n", a % 10);
}

int main() {
	int n;
	scanf("%d", &n);
	ftn(n);
	return 0;
}