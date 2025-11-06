#include<stdio.h>

int main()
{
int num , i , count=0 ; 
printf("Enter the number : "); 
scanf("%d",&num); 

int freq[10] = {0};
int temp = num ; 

while(num!=0) 
{
count++ ; 
num = num/10 ;
}

num = temp ; 

for(i=0 ; i<count ; i++)
{
int rem = num%10 ;
freq[rem]++ ;  
num = num/10 ; 
}

int max = freq[0]; 
for(i=0 ; i<10 ; i++)
{
    if(freq[i]>max)
    max = freq[i] ; 
}

printf("Digit(s) that occur the most: "); 
    for(i = 0; i < 10; i++) 
    {
        if(freq[i] == max) 
        printf("%d ", i);
    }

return 0 ; 
}