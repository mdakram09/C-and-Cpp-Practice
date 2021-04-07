#include<stdio.h>
main()
{ 
  float p,r,t,simpleInterest;
  int choice;
  printf("Enter\n1 to find out Simple Interest\n2 to find out Principal\n3 to find out rate in % \n4 to find out Time\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
   printf("Enter Pricipal\n");
    scanf("%f",&p);
    printf("Enter Rate in percentage \n");
    scanf("%f",&r);
    printf("Enter Time in years(decimals)\n");
    scanf("%f",&t);
    
    simpleInterest=(float)(p*r*t)/100.0;
    printf("Simple Interest is %f\n",simpleInterest);
    break;
   }
   case 2:
   {
   printf("Enter Simple Interest\n");
    scanf("%f",&simpleInterest);
    printf("Enter Rate in percentage\n");
    scanf("%f",&r);
    printf("Enter Time in years(decimals)\n");
    scanf("%f",&t);
    p=(float)(100.0*simpleInterest)/(r*t);
    printf("Principal is %f\n",p);
    break;
    
     }
     case 3:
     {
   printf("Enter Simple Interest\n");
    scanf("%f",&simpleInterest);
    printf("Enter Principal\n");
    scanf("%f",&p);
    printf("Enter Time in years(decimals)\n");
    scanf("%f",&t);
    r=(float)(100.0*simpleInterest)/(p*t);
    printf("Rate is %f%\n",r);
    break;
     }
     case 4:
     {
   printf("Enter Simple Interest\n");
    scanf("%f",&simpleInterest);
    printf("Enter Principal\n");
    scanf("%f",&p);
    printf("Enter Rate in percentage\n");
    scanf("%f",&r);
    t=(float)((100.0*simpleInterest)/(p*r));
    printf("Time is %f years\n",t);
      break;
     }
  }
}
