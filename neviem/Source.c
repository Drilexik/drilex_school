#include <stdio.h>
#include <locale.h>
#include <windows.h>

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

//int main() {
//	setlocale(LC_ALL, "cs-CZ");
//
//	int a;
//	printf("Zadaj číslo: \n");
//	scanf_s("%i", &a);
//
//		switch (a % 3) {
//		case 0:
//			printf("Zvyšok čísla %i je 0", a);
//			break;
//		case 1:
//			printf("Zvyšok čísla %i je 1", a);
//			break;
//		case 2:
//			printf("Zvyšok čísla %i je 2", a);
//			break;
//	}
//
//		return 0;
//}

//int main() {
//	setlocale(LC_ALL, "cs-CZ");
//
//	int i;
//	printf("======== FROM   XX   TO    1 =========\n");
//	printf("Zadaj číslo: ");
//	scanf_s("%i", &i);
//
//	while (i >= 1) {
//		printf("\n%i", i);
//		i--;
//	}
//	return 0;
//}

int main() {
    setlocale(LC_ALL, "cs-CZ");

    printf("Zadaj číslo: ");
    int a = 0;
    scanf_s("%i", &a);

    if (a % 5 == 0 && a % 11 == 0) {
        printf("\nČíslo %i je delitelné číslom 5 a 11", a);
    }
    else {
        printf("\nČíslo %i nie je delitelné číslom 5 a 11", a);
    }

    printf("\nNapíš rok: ");
    int b = 0;
    scanf_s("%i", &b);

    if ((b % 4 == 0 && b % 100 != 0) || (b % 400 == 0)) {
        printf("Rok je priestupný");
    }
    else {
        printf("Rok nie je priestupný");
    }

    printf("\n\nZadajte tri uhly trojuholníka");

    int c = 0;
    int d = 0;
    int e = 0;

    scanf_s("%i %i %i", &c, &d, &e);

    int plus = c + d + e;

    if (plus == 180 && c > 0 && d > 0 && e > 0) {
        printf("Trojuholník so stranami %i°, %i°, %i° je možné zostrojiť.", c, d, e);
    }
    else {
        printf("Trojuholník so stranami %i°, %i°, %i° nie je možné zostrojiť.", c, d, e);
    }

    return 0;
}