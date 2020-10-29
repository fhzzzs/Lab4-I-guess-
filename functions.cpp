#include "functions.h"
#include <cmath>


// Define your function definitions here
double earthTemp(double temp, double numYears) { return temp + 1.5 * numYears; }

int requiredFood(int startWeight, int foodNeeded, int finalWeight){ return pow(foodNeeded, (finalWeight - startWeight + 1)); }

int numChickens(int startChickens, int numYears)
{
	int result = startChickens;
	for (int i = 0; i < numYears; ++i)
	{
			result += result * 2 - (result / 6);
	}
	return result;
}