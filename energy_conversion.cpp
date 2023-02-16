#include <iostream>

int main();

int main(){
    double energy{};

    std::cout<<"Enter the energy in Joules: "<<std::endl;
    std::cin>>energy;

    std::cout<<"There are "<< energy<<" Joules of energy"<<std::endl;
    std::cout<<"There are "<< energy/1055<<" BTU of energy"<<std::endl;
    std::cout<<"There are "<<energy/(1055*3.966)<<" kcal of energy"<<std::endl;
    std::cout<<"There are "<<energy/(1055*3.966*860.4)<<" kwh of energy"<<std::endl;
    std::cout<<"There are "<<energy/(1055*3.966*860.4*1.162)<<"kg-TNT of energy"<<std::endl;

    return 0;
}