#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "timeValue.h"
#define WHOLE 100
#define FV ((int)'F')*100+((int)'V')*10
#define PV ((int)'PV')*100+((int)'V')*10
#define RATE ((int)'-')*100+((int)'R')*10
#define PERIODS_PER_YEAR ((int)'-')*100+((int)'N')*10
#define Y ((int)'-')*100+((int)'Y')*10
char* ValidArguments[] = {"FV", "PV", "R", "\n"};

int makeInt(char*);
double getFV(int, char*[]);
int main(int argc, char*argv[])
{
	int i = 1;
	if(argc > 1)
	{
		switch(makeInt(argv[i]))
		{
			case FV: printf("You called FV code\n");
				break;
			default: printf("Invalid argument \"%s\"\nYou must pass a valid argument for which you are solving for such as FV, followed by the known values of the problem.\n", argv[i]);
		}
	}
	else{
		printf("In order for this program to work, you must call with a valid routine.\n\n");
		printf("Valid arguments are:\n");
		int arg = 0;
		while( ValidArguments[arg] != "\n")
		{
			printf(" %s\n", ValidArguments[arg]);
			++arg;
		}
	}
	return 0;
}

int makeInt(char* string)
{
	int intValue = 0;
	int mult = 100;
	while((int)*string)
	{
		intValue += ((int)*string) * mult;
		string++;
		if( mult>1)
		{
			mult/=10;
		}
	}
	return intValue;
}

double getFV(int argc, char*args[])
{
	int i = 2;
	int k, r, pv, n, t;
	k = r = pv = n = t = 0;
	while(i < argc)
	{
		switch(makeInt(args[i]))
		{
			case K: 
				k = atof(args[i+1]);
				break;
			case R: 
				r = atof(args[i+1]);
				break;
			case
			default: printf("Opps, Something went wrong reading your variables");
				exit(1);	
		}
		i+=2;
	}
}





