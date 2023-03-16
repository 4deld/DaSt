#include<stdio.h>
int mostOnes(int a[101][101], int n) {
	int ans = 0;
	int c = 0;
	for (int i = 0; i < n; i++)
		for (; c < n && a[i][c] == 1; c++)
			ans = i;
	return ans;
}
int main() {
	int n;
	int a[101][101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	printf("%d", mostOnes(a, n));
}