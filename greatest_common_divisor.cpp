#include <iostream>

int main();

int main(){
    int a{0};
    int b{0};
    int c{0};
    

    std::cout<<"Greatest Common Divisor Finder Program"<<std::endl;
    std::cout<<"Enter first number: "<<std::endl;
    std::cin>>a;

    std::cout<<"Enter second number: "<<std::endl;
    std::cin>>b;

    std::cout<<"Enter third number: "<<std::endl;
    std::cin>>c;
    
    int min{a};
    if(a<0){
        a=-a;
    }

    if(b<0){
        b=-b;
    }

    if(c<0){
        c=-c;
    }

    

    if(b<min){
        min=b;
    }

    if(c<min){
        min=c;
    }
    int gcd{0};

    for(int i{min};i>0;i--){
        if((a%i==0)&&(b%i==0)&&(c%i==0)){
                gcd=i;
                break;
        }
        
    }

    std::cout<<"The GCD of the three numbers is "<<gcd<<std::endl;



    return 0;
   
   

}