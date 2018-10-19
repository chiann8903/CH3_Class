#include<stdio.h>
#include<stdlib.h>
long int f(int p);
main() {
	int m, n;
	long int ans;
	long int a, b, c;
	printf("find c(m,n):");
	scanf_s("%ld%ld", &m, &n);
	a = f(m);
	b = f(n);
	c = f(m - n);
	ans = a / b / c;
	printf("C(%d,%d)=%ld", m, n, ans);
	system("pause");
	return 0;
}
long int f(int p) {
	long int total=1, i;
	for (i = 1; i <= p; i++) {
		total = total * i;
	}
	return total;
}