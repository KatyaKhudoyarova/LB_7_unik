#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double a,b,h;
    std::cout<<"Enter a start meaning a:";
    std::cin >> a;
    std::cout<<"Enter an end meaning b:";
    std::cin >> b;
    std::cout<<"Enter a step h:";
    std::cin>>h;

    if(h<=0){
        std::cout<<"h must be positive, pls change a meaning of h.";
        return 1;
    }
    if(a>b){
        std::cout<<"a must be less then b, pls change the meaning of a.";
    }
    std::cout<<"--------------------"<<std::endl;
    std::cout<<": X : Y :"<<std::endl;
    std::cout<<"--------------------"<<std::endl;

    for(double x=a; x<=b; x+=h){

        if(x<a&&x>b){
            std::cout<<"Error, enter another meaning of x.";
        }
        else{
            double y=(8+(sqrt(x-7)/(x+5)));
            std::cout<<":"<<std::setw(5)<<x<<":"<<std::setw(5)<<y<<":"<<std::endl;
        }
    }
    std::cout<<"--------------------";
    return 0;
}

