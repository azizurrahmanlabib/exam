#include<stdio.h>
#include<conio.h>
int main()
{

int a,b,c;
printf("enter your first number= ");
scanf("%d",&a);
printf("enter your second number=");
scanf("%d",&b);
printf("what do you want? sum, mul,div? for sum press 1,for mul press 2,for sub press 3");
printf("\n");
scanf("%d",&c);

if(c==1)
add(a,b);
else if(c==2)
mul(a,b);
else 
sub(a,b);
}

void add(int p,int q)
{

    printf("sum=%d\n",p+q);
}
void mul(int p,int q)
{
    printf("multiplication=%d",p*q);
}
void sub(int p, int q)
{

    printf("sub=%d\n", p - q);
}