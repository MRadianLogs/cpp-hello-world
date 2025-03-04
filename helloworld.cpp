#include <iostream>
// using namespace std;

const double PI = 3.141592654;

int main() {
    std::cout << "Hello World! \n";
    std::cout << std::endl;

    int num1 = 10;
    int num2 = 15;

    std::cout << "Combined numbers are " << num1 + num2 << "." << std::endl;

    std::cout << std::endl;

    std::cout << "PI is " << PI << std::endl;

    std::cout << std::endl;

    std::cout << "Enter a number: ";
    std::cin >> num1;
    std::cout << "Enter a number: ";
    std::cin >> num2; 

    std::cout << "Combined numbers are " << num1 + num2 << "." << std::endl;

    std::cout << std::endl;


    return 0;
}