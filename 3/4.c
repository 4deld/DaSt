#include<stdio.h>
int ftn(int* a, int s, int mx) {
	if (s <= 1) {
		return mx > *a ? mx : *a;
	}
	int u = ftn(a, s - 1, *(a + s - 1));
	return mx > u ? mx : u;
}
int main() {
	int n;
	int ar[21];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", ar + i);
	printf("%d", ftn(ar, n - 1, *(ar + n - 1)));
	return 0;
}