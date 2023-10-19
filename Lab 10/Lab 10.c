// Lab 10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <Windows.h>
void nums1_10() {
	for (int i = 1; i < 11; i++) {
		printf("%d ", i);
	}
}
void nums10_1() {
	for (int i = 10; i > 0; i--) {
		printf("%d ", i);
	}
}
void odds5() {
	int a = 1;
	for (int i = 1; i < 6; i++) {
		printf("%d ", a);
		a += 2;
	}
}
void counting() {
	int a = 100;
	while (a > 0) {
		printf("%d ", a);
		a -= 10;
	}
}
void counting2() {
	int a = 1000;
	while (a > 0) {
		printf("%d ", a);
		a -= 100;
	}
}
void nakop() {
	int s;
	float n;
	printf("S = ");
	scanf_s("%d", &s);
	printf("n = ");
	scanf_s("%f", &n);
	n = n / 100;
	for (int i = 0; i <= 10; i++) {
		printf("Через %d лет: %d\n", i, s);
		s = s + (s * n);
	}
}
void step22() {
	int a = 1000;
	while (a > 0) {
		printf("%d ", a);
		a -= 22;
	}
}
void facts() {
	int n;
	int res = 1;
	printf("N = ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			res *= j;
		}
		printf("%d ", res);
		res = 1;
	}
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int n;
	do {
		printf("\n\n");
		printf("Выберите нужную вам операцию:\n");
		printf("1: Вывести числа от 1 до 10\n");
		printf("2: Вывести числа от 10 до 1\n");
		printf("3: Вывести 5 первых нечетных чисел начиная с 1\n");
		printf("11: Вывести числа от 100 до 10 с шагом в 10 через WHILE\n");
		printf("12: Вывести числа от 1000 до 100 с шагом в 100 через WHILE\n");
		printf("13: Вывести состояние накопительного счёта\n");
		printf("20: Вывести числа от 1000 до 0 с шагом в 22 через WHILE\n");
		printf("21: Вывести первые N факториалов\n");
		printf("\n");
		printf("0: Выйти из программы\n");
		printf(">");
		scanf_s("%d", &n);
		switch (n) {
		case 1:
			nums1_10();
			break;
		case 2:
			nums10_1();
			break;
		case 3:
			odds5();
			break;
		case 11:
			counting();
			break;
		case 12:
			counting2();
			break;
		case 13:
			nakop();
			break;
		case 20:
			step22();
			break;
		case 21:
			facts();
			break;
		}
	} while (n != 0);

	

}
