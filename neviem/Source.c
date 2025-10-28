#include <stdio.h>
#include <locale.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//
//    printf("Zadej číslo: ");
//    scanf_s("%i", &a);
//
//    printf("Zadaj číslo #2: ");
//    scanf_s("%i", &b);
//
//    printf("Tvoje prvé číslo je %i a druhé číslo je %i", a, b);
//
//    return 0;
//}

int main() {
	SetConsoleOutputCP(65001);

	int a;
	printf("Zadaj číslo: \n");
	scanf_s("%i", &a);

		switch (a % 3) {
		case 0:
			printf("Zvyšok čísla %i je 0", a);
			break;
		case 1:
			printf("Zvyšok čísla %i je 1", a);
			break;
		case 2:
			printf("Zvyšok čísla %i je 2", a);
			break;
	}

		return 0;
}