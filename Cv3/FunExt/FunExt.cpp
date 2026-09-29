// FunExt.cpp : Defines the entry point for the application.
//

#include "FunExt.h"

using namespace std;

int main()
{
    //double minY = DBL_MAX;
    double maxY = DBL_MIN;
    int maxX = INT16_MIN;
    //int minX = INT_MAX;
    for (int x = 10; x <= 20; ++x)
    {
        double y = 5 - 3 * x + 2 * (x - 5) * (x - 5) - (x - 10) * (x - 10) * (x - 10);

        /*if (y < minY)
        {
            minY = y;
            minX = x;
        }*/

        if (y > maxY)
        {
            maxY = y;
            maxX = x;
		}
    }
    //printf("Minimum value: %lf at x=%d\n", minY, minX);
    printf("Maximum value: %lf at x=%d\n", maxY, maxX);
    return 0;
}
