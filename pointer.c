#include<stdio.h>
int main()
{
int a = 1000;
int * ptr;
 ptr = &a;
 printf("ptr= %p\n",ptr);
 printf("*ptr = %d", *ptr);
 return 0;
}
