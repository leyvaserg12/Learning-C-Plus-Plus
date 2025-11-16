#include <iostream> /* iostream -> header file for basic input and output operations */

int main(){

    /* consts:
        keyword that modifies a variable so that it's read-only and cannot be further changed
        ie. declared once and its fixed, no modifications later in the code for security
    */
    const double PI = 3.14159; /* constants make it so that it doesnt allow for changes within the code (fixed data value) */
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm" << std::endl;
    return 0;
}