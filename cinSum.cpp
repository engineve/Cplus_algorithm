#include<iostream>
using namespace std;

int main(void){
    int a,b;
    std::cin>>a>>b;
    int sum=0;
    sum=a+b;
    for(int i=1;i<=10;i++){
    sum+=i;
    }
    std::cout<<"result : "<<sum; // a=1, b=1 input then, result : 57
}