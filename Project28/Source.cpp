#include<stdio.h>
int main() {
	int det22, det33;
	int a[3][3];
	int row, col;
	printf("Enter row&col : ");
	scanf_s("%d %d", &row, &col); printf("\n");
	if (row == col) {
		if (row == 1 || col == 1) {
			printf("You can\'t find");
			return 0;
		}
		else {
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					scanf_s("%d", &a[i][j]);
				}
			}
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					printf("%d\t", a[i][j]);
				}
				printf("\n");
			}
		}
	}
	else {
		printf("You can\'t find");
		return 0;
	}
	det33 = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) - a[0][1] * (a[1][0]
		* a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
	det22 = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
	if (col == 3 && row == 3) {
		printf("det 3*3 =%d", det33);
	}
	else if (col == 2 && row == 2) {
		printf("det 2*2 =%d", det22);
	}
}
