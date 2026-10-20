#include <iostream>

void SwapNumbers(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=5;
    int b=8;
    SwapNumbers(a,b);
    std::cout<<a<<b<<std::endl;
}