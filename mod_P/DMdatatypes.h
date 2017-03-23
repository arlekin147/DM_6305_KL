typedef unsigned short int boolean;

typedef struct natural
{
	int* koef; //массив цифр
	int num; //кол-во цифр
} NATURAL;

typedef struct integers
{
	int* koef; //массив цифр
	int num; //кол-во цифр
	boolean sgn; //флаг на знак, 0 - '+', 1 - '-'
} INTEGER;

typedef struct rati
{
	INTEGER numerator; //целое число в числителе
	NATURAL denominator; //натуральное число в знаменателе
} RATIONAL;

typedef struct poli
{
	int m; //старшая степень	
	RATIONAL* koefP; //массив коэффициентов
} POLINOMIAL;
