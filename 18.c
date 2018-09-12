#include <stdio.h>
#include <math.h>

#ifndef N
#define N 5
#endif

double desvioPadrao(int v[N])
{
	unsigned int i = 0;
	double avg = 0, dp = 0;	
	
	for (i = 0; i < N; i++)
		avg += v[i];
	avg /= N;

	for (i = 0; i < N; i++)
		dp += (v[i] - avg)*(v[i] - avg);
	dp /= N;

	return sqrt(dp);
}

char testDesvioPadrao()
{
	int v[N]= {1,2,1,2,1};
	printf("%.20lf\n", desvioPadrao(v));
	return desvioPadrao(v) == (3.03315017762062);
}

int main(void) 
{
	testDesvioPadrao() ? printf("Sucesso!\n") : printf("Falha!\n");;
}