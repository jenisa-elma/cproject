#include<stdio.h>
int main()
{
int calls;
float bill;
printf("Enter the number of calls:");
scanf("%d",&calls);
if(calls<=100)
{
    bill=200;
}
else if(calls>100 && calls<=150)
{
calls=calls-100;
bill=200+(0.60*calls);
}
else if(calls>150 && calls<=200)
{
    calls=calls-150;
    bill=200+(0.60*calls)+(0.50*calls);
}
else
{
    calls=calls-200;
    bill=200+(0.60*calls)+(0.50*calls)+(0.40*calls);
}
printf("Your bill is Rs.%0.2f",bill);
return 0;
}