#include "timeValue.h"
#include <math.h>

/* Calculate future value
 * pv: Present Value
 * rate: rate at which investment grows
 * periods: number of compounding periods per year
 * years: years of investment  */
double _FV(double pv, double rate, int periods, int years)
{
	double k = periods * years;
	double y = 1.0L + (rate / years);
	return pv * pow(y, k);
}

