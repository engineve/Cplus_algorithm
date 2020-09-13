#include "stdafx.h"
#include<iostream>

const char MAXSIZE=30;

int main(void)
{
printf("test \n");	

char arr[MAXSIZE];
//std::cin>>arr;
std::cin.getline(arr,sizeof(arr)); 
std::cout<<"result : "<<std::endl<<arr;   
}

// test 
// nice to meet you
// result : 
// nice to meet you