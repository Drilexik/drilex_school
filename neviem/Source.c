#include <stdio.h>
#include <locale.h>
#include <windows.h>
setlocale(LC_ALL, "cs-CZ");
printf("\033[0;35m");

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

/* int main() {
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
} */

/*
int main() {
    setlocale(LC_ALL, "cs-CZ");

    int c;
    printf("Zadaj číslo pre násobilku: ");
    scanf_s("%i", &c);

    printf("Malá násobilka pre %i:\n", c);
    for (int i = 1; i <= 10; i++) {
        printf("%i × %i = %i\n", c, i, c * i);
    }

    int d;
    printf("\nZadajte celé číslo: ");
    scanf_s("%i", &d);

    int posledna = d % 10;

    int prva = d;
    while (prva >= 10) {
        prva = prva / 10;
    }

    printf("Číslo: %i\n", d);
    printf("Prvá číslica: %i\n", prva);
    printf("Posledná číslica: %i\n", posledna);

    int e;
    printf("\nZadajte celé číslo: ");
    scanf_s("%i", &e);

    int posledna2 = e % 10;

    int prva2 = e;
    while (prva2 >= 10) {
        prva2 = prva2 / 10;
    }

    int sucet = prva2 + posledna2;

    printf("Číslo: %i\n", e);
    printf("Prvá číslica: %i\n", prva2);
    printf("Posledná číslica: %i\n", posledna2);
    printf("Súčet prvej a poslednej číslice: %i + %i = %i\n", prva2, posledna2, sucet);

    return 0;
}
*/

/*int main() {
    setlocale(LC_ALL, "cs-CZ");
    printf("\033[0;35m");

    // -------- ULOHA 1 -----------
    printf("Uloha #1\n\n");

    int i = 0;
    while(i <= 5){
        printf("%i\n", i);
        i++;
    }
    // -------------- ULOHA 2 --------------
    printf("------------------");
    printf("\n\nUloha #2\n\n");

    for (i = 0; i <= 5; i = i+1) {
        printf("%i\n", i);
    }

    return 0;
}
*/


// zmena struktury kódu -> budu přesunuty cmd properties z mainu do defaultu  

int main() {



    return 0;
}
