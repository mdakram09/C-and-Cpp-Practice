#include<stdio.h>
int main()
{
	char c;

	printf("Please enter the character\n");
	scanf("%c",&c);

	if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
		printf("%c is a Vowel",c);

	else if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
		printf("%c is a Vowel",c);

	else
		printf("%c is not a vowel",c);
	return 0;
}