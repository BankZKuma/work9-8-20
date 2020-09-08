#include<stdio.h>
#include<math.h>
float recTangle(float, float);
float triAngle(float, float);
int main() {
	float widht, height, radius;
	int num;
	do {
		printf("[1] = rectangle\n");
		printf("[2] = triangle\n");
		printf("Enter number : ");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			printf("Enter width&height : ");
			scanf_s("%f %f", &widht, &height);
			printf("Area = %.2f\n", recTangle(widht, height));
			for (int i = 1; i <= widht; i++) {
				for (int j = 1; j <= height; j++) {
					printf("* ");
				}
				printf("\n");
			}
			break;
		case 2:
			printf("Enter width&height : ");
			scanf_s("%f %f", &widht, &height);
			printf("Area =%.2f\n", triAngle(widht, height));
			for (int i = 1; i <= sqrt(triAngle(widht, height)); i++) {
				for (int j = 1; j < i; j++) {
					printf("*");
				}
				printf("\n");
			}
			break;
		}
	} while (num != 0);
	return 0;
}
float recTangle(float width, float height) {
	return  width * height;
}
float triAngle(float widht, float height) {
	return .5 * widht * height;
}