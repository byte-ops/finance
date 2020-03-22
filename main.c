#include <stdio.h>
#include "timeValue.h"


int main()
{
	double value = FV(10000.0L, 0.1f, 1, 1);
	printf("$%.2f \n", value);
}

