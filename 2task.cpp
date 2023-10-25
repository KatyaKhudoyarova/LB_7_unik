#include <iostream>
#include <cmath>

int main() {
    double sum = 0.0;
    for (int i = 10; i <= 20; i++) {
        double sqrt_i=sqrt(i);
        sum +=sqrt_i;
    }
    std::cout << "The sum from 10 till 20 is:" << sum<< std::endl ;
    return 0;
}

