#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int *num;
num=(int*)malloc(sizeof(int));  //sizeof(int) -> 4byte memory allocation, 4byte address allocated to num
*num=10;
printf("result=%d\n",*num);
free(a); // cancel the allocation