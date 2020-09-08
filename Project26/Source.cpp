#include<stdio.h>
#include<string.h>
#include<math.h>
struct student {
	char name[10];
	int weight;
	int hight;
	float BMI;
};
int main() {
	student result[5];
	for (int i = 0; i < 5; i++) {
		printf("[%d]Enter hight&weight : ", i + 1);
		scanf_s("%d %d", &result[i].hight, &result[i].weight);
		result[i].BMI = (result[i].weight / pow(result[i].hight, 2)) * 703;
	}
	strcpy_s(result[0].name, "BANK");
	strcpy_s(result[1].name, "JAA");
	strcpy_s(result[2].name, "KUU");
	strcpy_s(result[3].name, "SEIO");
	strcpy_s(result[4].name, "PANG");
	for (int a = 0; a < 5; a++) {
		printf("Name ::: %s\n", result[a].name);
		for (int b = 1; b <= result[a].hight / 20; b++) {
			for (int c = 1; c <= result[a].weight / 10; c++) {
				printf("*");
			}
			printf("\n");
		}
	}
	for (int i = 0; i < 5; i++) {
		if (result[i].BMI < 18.5) {
			printf("%s %d %d Below normal weight\n", result[i].name, result[i].hight, result[i].weight);
		}
		else if (result[i].BMI >= 18.5 && result[i].BMI < 25) {
			printf("%s %d %d  Normal weight\n", result[i].name, result[i].hight, result[i].weight);
		}
		else if (result[i].BMI >= 25 && result[i].BMI < 30) {
			printf("%s %d %d  Over weight\n", result[i].name, result[i].hight, result[i].weight);
		}
		else if (result[i].BMI >= 30 && result[i].BMI < 35) {
			printf("%s %d %d  Class I Obesity\n", result[i].name, result[i].hight, result[i].weight);
		}
		else if (result[i].BMI >= 35 && result[i].BMI < 40) {
			printf("%s %d %d  Class II Obesity\n", result[i].name, result[i].hight, result[i].weight);
		}
		else if (result[i].BMI >= 45) {
			printf("%s %d %d  Class III Obesity\n", result[i].name, result[i].hight, result[i].weight);
		}
	}
	return 0;
}