#include<stdio.h>
#include<math.h>
main()
{ 
	//CI=P((1+r/n)^(nt))
	float compoundInterest,principal,rate,time;
	int n;
 	 printf("Enter Principal\n");
 	 scanf("%f",&principal);
 	 printf("Enter rate in percentage\n");
 	 scanf("%f",&rate);
 	 printf("Enter time in years(demcimals)\n");
 	 scanf("%f",&time);
 	 printf("Enter number of times interest is compounded per year\n");
 	 scanf("%d",&n);

compoundInterest=(float)(principal*(pow((1+(rate/(100*n))),(n*time))));
printf("Compound Interest is %f\n",compoundInterest);
  
}
