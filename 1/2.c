#include<stdio.h>
void ABC(int a[], int k) {
	int mx = a[9];
	int mxidx = 9;
	for (int i = k; i < 10; i++) {
		if (a[i] > mx) {
			mx = a[i];
			mxidx = i;
		}
	}

	int t = a[k];
	a[k] = a[mxidx];
	a[mxidx] = t;

}
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++) {
		ABC(a, i);
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}