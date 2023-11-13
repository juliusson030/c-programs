/* simple interest program */
#include<stdio.h>
#include<conio.h>
int main ()
{
int t;
float p,r,si;
printf("/n enter the value of principal/n");
scanf("%f",&p);
printf("/n enter the value of rate and time/n");
scanf("%f %d",&r,&t);
si=(p*r*t)/100;
printf("/n simple interest=%f/n",si);
return 0;

}
