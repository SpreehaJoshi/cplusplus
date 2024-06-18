#include<iostream>

int main(){
    float price, time, rate, SI;
    std::cout<<"Enter price time and rate"<<std::endl;
    std::cin>>price >> time >> rate;
    SI = (price * time * rate) / 100;
    std::cout<<"Simple interest is = "<<SI;
}