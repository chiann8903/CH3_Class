#include<stdio.h>
#include<stdlib.h>
int odd(int u);
int even(int u);
int total(int u);
main() {
	int n, sum;
	char add;
	printf("1+2+3+4+....+n:");
	scanf_s("%d", &n);
	getchar();
	printf("input 'O' to do odd add, 'E' to do even add, 'T' to do total add:");
	scanf_s("%c", &add);
	switch (add) {
	case 'O':
		sum = odd(n);
		break;
	case 'E':
		sum = even(n);
		break;
	case 'T':
		sum = total(n);
		break;
	defalt:
		printf("error");
		return -1;
	}
	printf("total:%d", sum);
	system("pause");
	return 0;
}
int odd(int u) {
	int total = 0;
	for (int i = 1; i <= u; i++) {
		if (i % 2 == 1)
			total = total + i;
	}
	return total;
}
int even(int u) {
	int total = 0;
	for (int i = 1; i <= u; i++) {
		if (i % 2 == 0)
			total = total + i;
	}
	return total;
}
int total(int u) {
	int total = 0;
	for (int i = 1; i <= u; i++)
			total = total + i;
	return total;
}
