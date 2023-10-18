#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int islem_numarasi;
	float derece_sicaklik, kelvin_sicaklik, fahrenheit_sicaklik;

	cout << "Hangi Islemi Yapmak Istiyorsunuz?\n" << endl;
	printf("(1) Derece --> Kelvin\n");
	printf("(2) Derece --> Fahrenheit\n");
	printf("(3) Kelvin --> Derece\n");
	printf("(4) Kelvin --> Fahrenheit\n");
	printf("(5) Fahrenheit --> Derece\n");
	printf("(6) Fahrenheit --> Kelvin\n\n");
	scanf("%d", &islem_numarasi);
	printf("\n");

	if (islem_numarasi == 1)
	{
		printf("Lutfen Santigrat Derece Cinsinden Sicakligi Giriniz = ");
		scanf("%f", &derece_sicaklik);
		printf("\n");
		kelvin_sicaklik = derece_sicaklik + 273.15;
		printf("Kelvin Degerinden Sicaklik Degeriniz = %.2f\n", kelvin_sicaklik);
	}
	else if (islem_numarasi == 2)
	{
		printf("Lutfen Santigrat Derece Cinsinden Sicakligi Giriniz = ");
		scanf("%f", &derece_sicaklik);
		printf("\n");
		fahrenheit_sicaklik = derece_sicaklik * 9 / 5 + 32;
		printf("Fahrenheit Degerinden Sicaklik Degeriniz = %.2f\n", fahrenheit_sicaklik);
	}
	else if (islem_numarasi == 3)
	{
		printf("Lutfen Kelvin Cinsinden Sicakligi Giriniz = ");
		scanf("%f", &kelvin_sicaklik);
		printf("\n");
		derece_sicaklik = kelvin_sicaklik - 273.15;
		printf("Santigrat Derece Degerinden Sicaklik Degeriniz = %.2f\n", derece_sicaklik);
	}
	else if (islem_numarasi == 4)
	{
		printf("Lutfen Kelvin Cinsinden Sicakligi Giriniz = ");
		scanf("%f", &kelvin_sicaklik);
		printf("\n");
		fahrenheit_sicaklik = (kelvin_sicaklik - 273.15) * 9 / 5 + 32;
		printf("Fahrenheit Degerinden Sicaklik Degeriniz = %.2f\n", fahrenheit_sicaklik);
	}
	else if (islem_numarasi == 5)
	{
		printf("Lutfen Fahrenheit Cinsinden Sicakligi Giriniz = ");
		scanf("%f", &fahrenheit_sicaklik);
		printf("\n");
		derece_sicaklik = (fahrenheit_sicaklik - 32) * 5 / 9;
		printf("Santigrat Derece Degerinden Sicaklik Degeriniz = %.2f\n", derece_sicaklik);
	}
	else if (islem_numarasi == 6)
	{
		printf("Lutfen Fahrenheit Cinsinden Sicakligi Giriniz = ");
		scanf("%f", &fahrenheit_sicaklik);
		printf("\n");
		kelvin_sicaklik = (fahrenheit_sicaklik - 32) * 5 / 9 + 273.15;
		printf("Kelvin Degerinden Sicaklik Degeriniz = %.2f\n", kelvin_sicaklik);
	}
	else
	{
		printf("Gecersiz Bir Sayi Girdiniz!\n");
	}

	return 0;
}
