#include<stdio.h>
 int main()
 {
   int a,b;
   printf("enter a value:");
   scanf("%d",&a);
   printf("\n enter b value:");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\n a value is %d",a);
   printf("\n b value is %d",b);
 }
