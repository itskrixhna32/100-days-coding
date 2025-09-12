#include<stdio.h>
    
int main()
{
	int i,N;
	double sum=0.0;
	int numerator=1,denominator=2;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	
	for(i=1;i<=N;i++)
    {
		sum += ((double)numerator/denominator);
        numerator+=2;
        denominator+=2;
    }
	printf("Sum of the %d terms is: %.6f\n",N,sum);
	
	return 0;
}