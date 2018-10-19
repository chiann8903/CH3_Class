#include<stdio.h>
#include<stdlib.h>
long int r_f(int p);
main() {
	int m, n;
	long int ans;
	long int a, b, c;
	printf("find c(m,n):");
	scanf_s("%ld%ld", &m, &n);
	a = r_f(m);
	b = r_f(n);
	c = r_f(m - n);
	ans = a / b / c;
	printf("C(%d,%d)=%ld", m, n, ans);
	system("pause");
	return 0;
}
long int r_f(int p) {
	if (p > 1) {
		long int total = 1;
		total = p * r_f(p - 1);
		return total;
	}
	else
		return 1;
}