#include<stdio.h>
void butterfly() {
	int num;
	printf("Enter number : ");
	scanf_s("%d", &num);
	for (int i = 1; i <= (2 * num) - 1; i++) {
		for (int j = 1; j <= (2 * num) - 1; j++) {
			if ((i >= j && i + j <= 2 * num) || (j >= i && i + j >= 2 * num)) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
}
void triangle() {
	int i, j, x, z, num;
	printf("Enter number : ");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++) {
		for (j = num; j >= i; j--) {
			printf(" ");
		}

		for (x = 1; x < i; x++) {
			printf("*");
		}
		for (z = 1; z <= i; z++) {
			printf("*");
		}
		printf("\n");
	}
}
void invertedTriangle() {
	int num, i, j, k;
	printf("Enter number : ");
	scanf_s("%d", &num);
	for (i = 0; i < num; i++) {
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		for (k = 0; k < 2 * (num - i) - 1; k++) {
			printf("0");
		}
		printf("\n");
	}
}
int main()
{
	int a;
	printf("Choose format\n");
	printf("butterfly        = 1\n");
	printf("triangle         = 2\n");
	printf("invertedTriangle = 3\n");
	printf("Choose number: ");
	scanf_s("%d", &a);
	if (a == 1) {
		butterfly();
	}
	else if (a == 2) {
		triangle();
	}
	else if (a == 3) {
		invertedTriangle();
	}
	else {
		printf("Error");
	}

}