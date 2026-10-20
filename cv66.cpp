// cv66.cpp : Defines the entry point for the application.
//

#include "cv66.h"

using namespace std;

int pocetPismen(char* txt) 
{
	char* znak;
	int pocet = 0;
	for(znak=txt; *znak!='\0'; znak++)
	{
		if (isalpha(*znak)) {
			pocet++;
		}
	}
	return pocet;
}

int pocetCislic(char* text)
{
	char* znak;
	int pocet = 0;
	znak = text;
	while (*znak != '\0') {
		
		if (isdigit(*znak))
		{
			pocet++;
		}
		znak++;
	}
	return pocet;
}

int pocetPismenNejdelsihoSlova(char* text) {
	int pocet = 0;
	char* znak;
	znak = text;
	int max = 0;
	int ted = 0;
	while (*znak != '\0') {
		if (*znak != ' ' && *znak != ',' && *znak != '.') {
			ted++;
		}
		else {
			if (ted > max) {
				max = ted;
			}

			ted = 0;
		}
		znak++;
	}

	return max;
}

int main()
{
	char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany: Vasemi funkcemi.Auto Hyundai ix35 ma pres 120 konskych sil.";
	printf("%d %d %d", pocetPismen(text), pocetCislic(text), pocetPismenNejdelsihoSlova(text));
}
