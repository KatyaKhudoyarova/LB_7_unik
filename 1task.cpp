#include <iostream>
#include <iostream>

int main() {
    int c0, steps = 0;
     std::cout << "Введіть натуральне число: ";
    std::cin >> c0;

    if (c0 <= 0) {
        std::cout << "Будь ласка, введіть додатнє натуральне число." << std::endl;
        return 1; 
    }

    while (c0 != 1) {
        if (c0 % 2 == 0) {
            
            c0 /= 2;
        } else {
            
            c0 = 3 * c0 + 1;
        }
        steps++;
        std::cout << "Крок " << steps << ": " << c0 << std::endl;
    }

    std::cout << "Для досягнення 1 знадобилося " << steps << " кроків." << std::endl;

    return 0;
}
