#pragma once

int indexNejblizsi(int velikost, int (*poleBodu)[2], int referencniX, int referencniY) {
	int* bod;
	double nejmensi = INT_FAST64_MAX;
	int nejblizsi = -1;
	for (int i = 0; i < velikost; i++) {
		bod = poleBodu[i];
		int x = abs(bod[0]);
		int y = abs(bod[1]);
		int rozdilX = x - referencniX;
		int rozdilY = y - referencniY;

		double vzdalenost = sqrt(pow(rozdilX, 2) + pow(rozdilY, 2));
		if (vzdalenost < nejmensi) {
			nejmensi = vzdalenost;
			nejblizsi = i;
		}
	}
	return nejblizsi;
}


double prumernaVzdalenost(int velikost, int (*poleBodu)[2], int referencniX, int referencniY) {
	int* bod;
	double soucet = 0;
	for (int i = 0; i < velikost; i++) {
		bod = poleBodu[i];
		int x = bod[0];
		int y = bod[1];

		int rozdilX = x - referencniX;
		int rozdilY = y - referencniY;

		double vzdalenost = sqrt(pow(rozdilX, 2) + pow(rozdilY, 2));

		soucet += vzdalenost;
	}

	return soucet/10;
}

void bodyVBlizkosti(int maxVzdalenost, int velikost, int(*poleBodu)[2], int referencniX, int referencniY, int &pocetNalezenych) {
	int* bod;
	int j = 0;
	for (int i = 0; i < velikost; i++) {
		bod = poleBodu[i];
		int x = bod[0];
		int y = bod[1];

		int rozdilX = x - referencniX;
		int rozdilY = y - referencniY;

		double vzdalenost = sqrt(pow(rozdilX, 2) + pow(rozdilY, 2));

		if (vzdalenost < maxVzdalenost) {
			poleBodu[j][0] = x;
			poleBodu[j][1] = y;
			j++;
		}
	}
	pocetNalezenych = j;
}