#include <stdio.h>
int main() {
   int temp=0,i=0;
   char str[50];
   printf("enter the string ");
   scanf("%s" , str);
   while(str[i]!='\0')
   {
       temp++;
       i++;
   }
   printf("length of the string=%d",temp);
    return 0;
}
