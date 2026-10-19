#include <iostream>

void Increment(int& value){
    value++;
}

int main(){
    int a=5;
    Increment(a);
    std::cout<<a<<std::endl;

}