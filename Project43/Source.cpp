#include<stdio.h>
#include<string.h>
void order(char x[]);
void swap(char* a, char* b);
int main() {
	char text[50];
	scanf_s("%s", text, 49);
	order(text);
}
void order(char x[]) {
	char* p = x;
	for (int i = 0; i < strlen(x); i++) {
		for (int j = i + 1; j < strlen(x); j++) {
			if (x[i] > x[j]) {
				swap(&x[i], &x[j]);
			}
		}
	}
	printf("%s", x);

}
void swap(char* a, char* b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}