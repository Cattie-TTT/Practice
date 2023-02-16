#include <iostream>

int main();
int main(){

    int c{};
    std::cout<<"Enter the currency in CAD: ";
    std::cin>>c;

    std::cout<<"There are "<<c/1.3<<"USD."<<std::endl;
    std::cout<<"There are "<<(c/1.3)*0.86<<" Pound sterling"<<std::endl;
    std::cout<<"There are "<<((c/1.3)*0.86+0.01)/0.87<<" Euro"<<std::endl;
    std::cout<<"There are "<<(c/1.3)*100<<" US penny"<<std::endl;

    return 0;

}