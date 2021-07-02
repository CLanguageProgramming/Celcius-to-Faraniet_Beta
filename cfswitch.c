#include <stdio.h>
int main()
{
 float a,b,centigrade, fahrenheit;
 int x;
 printf("1. For Fahrenheit To Celsius\n");
 printf("2. For Celsius To Fahrenheit\n");
 printf("\n\nEnter Your Choice\n");

 scanf("%d",&x);
 getchar();
 switch(x)
 {
 case 1:
  printf("\nEnter The Value of Fahrenheit Temperature: ");
  scanf("%f",&a);
  getchar();
  centigrade=5*(a-32)/9;
  printf("\n\nCelsius Temperature: %f \n",centigrade);
  break;
 case 2:
  printf("\nEnter The Value of Celsius Temperature: ");
  scanf("%f",&b);
  getchar();
  fahrenheit=((9*b)/5)+32;
  printf("\n\nFahrenheit Temperature: %f \n",fahrenheit);
  break;
 default:
 printf("\n\nWrong Choice.....Try Again!!!\n");
 }
 getchar();
 return 0;
}