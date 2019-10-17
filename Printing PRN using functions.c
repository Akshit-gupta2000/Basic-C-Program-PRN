#include <stdio.h>
long long int get_prn();
void display(long long int);
int main()
{
	long long int a;
	a= get_prn();
	display(a);
}

long long int get_prn()
{	
	long long int b;
	printf("Enter PRN:");
	scanf("%lld",&b);
	return b;
}
void display(long long int c)
{
	printf("PRN is: %lld",c);
}	

