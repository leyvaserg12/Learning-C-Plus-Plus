#include <iostream> /* iostream -> header file for basic input and output operations */

int main(){
    const double PI = 3.14159; /* constants make it so that it doesnt allow for changes within the code (fixed data value) */
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm" << std::endl;
    return 0;
}