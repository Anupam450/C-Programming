#include<stdio.h>

int main()
{
	int age; 
	long int ph;
	char name[20];
	printf("Enter the name: ");
	gets(name);
	printf("\nEnter age: ");
	scanf("%d",&age);
	printf("\nEnter the phone number: ");
	scanf("%d",&ph);
	printf("\nName: ");
	puts(name);
	printf("Age; %d , Phone Number: %d",age,ph);
	return 0;	
}
