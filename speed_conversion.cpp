#include <iostream>

int main();

int main(){
    double s{};
    std::cout<<"Enter the speed in miles per hour: ";
    std::cin>>s;
    
   
    std::cout<<"The speed is "<<s<<" miles per hour."<<std::endl;
    std::cout<<"The speed is "<<(s*5280)/3600<<" feet per second."<<std::endl;
    std::cout<<"The speed is "<<((s*5280)/3.28084)/3600<<" meters per second."<<std::endl;
    std::cout<<"The speed is "<<((s*5280)/3.28084)/1000<<" kilometers per hour."<<std::endl;
    std::cout<<"The speed is "<<((((s*5280)/3.28084))/201.168)*(14*24)<<" furlongs per fortnight."<<std::endl;

    return 0;

}