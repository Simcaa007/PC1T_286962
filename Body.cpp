// Body.cpp : Defines the entry point for the application.
//

#include "Body.h"
#include "Body2.h"
#define POCET_BODU 10

using namespace std;

int main()
{
	int body[POCET_BODU][2] = 
	{ 
		5, 10,
		 -14, 2,
		 45, 4,
		 -9, 8,
		 58, -3,
		 47, 5,
		 -18, -86,
		 75, 7,
		 -25, 51,
		 17, 98 
	};
	int x;
	int y;
	cout << "Zadejte referenci bod, jeho x souradnice bude: "; cin >> x;
	cout << "A jeho y souradnice bude: "; cin >> y;


	cout << "Njeblizsi bod je: [" << body[0][indexNejblizsi(POCET_BODU, body, x, y)] << "," << body[1][indexNejblizsi(0, body, x, y)] << "]" << endl;
	cout << "Prumerna vzdalenost bodu je: " << prumernaVzdalenost(POCET_BODU, body, x, y) << endl;
	int maxVzdalnost;
	cout << "Zadejte maximalni vzadelenost"; cin >> maxVzdalnost;
	cout << "Body v blizkosti jsou: \n";
	int pocetNalezenych = 0;
	bodyVBlizkosti(maxVzdalnost, POCET_BODU, body, x, y, pocetNalezenych);

	for (int i = 0; i < pocetNalezenych; i++) {
		cout << "[" << body[i][0] << "," << body[i][1] << "]" << endl;
	}
	return 0;
}
