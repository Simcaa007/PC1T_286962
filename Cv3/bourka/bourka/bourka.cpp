// bourka.cpp : Defines the entry point for the application.
//

#include "bourka.h"

using namespace std;

int main()
{
	//cout << "Zadejte cas v sekunach, za ktery se ozve hrom:";
	printf("Zadejte cas v sekunach, za ktery se ozve hrom: ");

	double cas;
	//cin >> cas;
	scanf_s("%lf", &cas);

	double d = 340 * cas;

	cout << "Hrom se ozve za " << d << " metru." << endl;
	return 0;
}
