#include<stdio.h>
void main()
{
  int n;
printf("enter the number of elements of the array");
scanf("%d",&n);
int ar[n];
for(int i=0;i<n;i++)
{
 printf(" enter a number ");
scanf("%d",&ar[i]);
}
for(int i=0;i<n/2;i++)
{
int temp;
temp=ar[i];
ar[i]=ar[n-i-1];
ar[n-i-1]=temp;
}
for(int i=0;i<n;i++)
  printf("%d \n",ar[i]);
}
  
