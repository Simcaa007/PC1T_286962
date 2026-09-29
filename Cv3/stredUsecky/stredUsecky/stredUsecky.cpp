// stredUsecky.cpp : Defines the entry point for the application.
//

#include "stredUsecky.h"

using namespace std;

int main()
{
	cout << "Zadejte souradnice dvou bodu v rovine" << endl;
	cout << "Bod A: ";
	int xa, ya;
	cin >> xa >> ya;

	cout << "Bod B: ";
	int xb, yb;
	cin >> xb >> yb;

	int xs, ys;
	xs = (xa + xb) / 2;
	ys = (ya + yb) / 2;

	double m = abs(xb - xa) + abs(yb - ya);

	cout << "Stred usecky AB je bod S(" << xs << ", " << ys << ")" << endl;
	cout << "Manhattanská vzdálenost mezi body A a B je: " << m << endl;

	return 0;
}
