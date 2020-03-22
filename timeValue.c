#include "timeValue.h"
#include <math.h>

/* Calculate future value
 * pv: Present Value
 * interest: rate
 * periods: number of compounding periods per year
 * years: years of investment  */
double FV(double pv, float interest, int periods, int years)
{
	double k = periods * years;
	double y = 1.0L + (interest / years);
	return pv * pow(y, k);
}

