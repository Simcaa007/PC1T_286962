// cv5.cpp : Defines the entry point for the application.
//

#include "cv5.h"

using namespace std;

void soucet(double a[3], double b[3], double z[3]) 
{
	z[0] = a[0] + b[0];
	z[1] = a[1] + b[1];
	z[2] = a[2] + b[2];
}

double velikost(double a[3]) 
{
	return sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
}

double skalarniSoucin(double a[3], double b[3]) 
{
	return a[0] * b[0] + a[1] * b[1] + a[2] * b[2] ;
}

void vektorovySoucin(double a[3], double b[3], double c[3])
{
	c[0] = a[1] * b[2] - a[2] * b[1];
	c[1] = a[2] * b[0] - a[0] * b[2];
	c[2] = a[0] * b[1] - a[1] * b[0];
}

int main()
{
	double a[3];
	double b[3];
	double c[3];

	cout << "Zadejte vektor a: ";
	cin >> a[0] >> a[1] >> a[2];

	cout << "Zadejte vektor b: ";
	cin >> b[0] >> b[1] >> b[2];

	soucet(a, b, c);

	cout << "Soucet a a b je: (" << c[0] << ", " << c[1] << ", " << c[2] << " )" << endl;
	cout << "Velikost vektoru a je: " << velikost(a) << endl;
	cout << "Skalarni soucin a a b je : " << skalarniSoucin(a, b) << endl;

	vektorovySoucin(a, b, c);
	cout << "Vektorovy soucin a a b je : (" << c[0] << ", " << c[1] << ", " << c[2] << " )" << endl;
}
