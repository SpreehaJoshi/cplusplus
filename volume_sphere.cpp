#include<iostream>

int main(){
    float r;
    std::cout<<"Enter radius ";
    std::cin>>r;
    float volume = (4*3.14*r*r*r)/3;
    std::cout<<"Volume is = "<<volume;
}