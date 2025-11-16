#include <iostream> /* iostream -> header file for basic input and output operations */

int main(){
    // int x; /* declaration */
    // int y = 6; /* declaration + assignment */
    // x = 5; /* assignment */

    // int sum = x + y;
    // std::cout << x << '\n'; /* printing variable x */
    // std::cout << y << '\n';
    
    // std::cout << sum << '\n';

    /* integer (whole number) */
    int age = 21;
    int year = 2023;
    int days = 7;

    std::cout << "Integer variable assignment: " << std::endl;
    std::cout << age << std::endl;
    std::cout << year << std::endl;

    std::cout << std::endl; /* new line separator (ie. '\n')*/

    /* Double (number including decimal) */
    double price = 10.99;
    double gpa = 3.4;
    double temperature = 25.1;

    std::cout << "Double variable assignment: " << std::endl;
    std::cout << price << std::endl;
    std::cout << gpa << std::endl;

    std::cout << std::endl; 

    /* Single Character */
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << "Char variable assignemnt: " << std::endl;
    std::cout << grade << std::endl;
    std::cout << std::endl; 

    /* Boolean (True/False): 
       this returns 0 for false or 1 for true (integer representation)
    */
    bool student = false;
    bool power = true;
    bool forSale = true;

    /* Strings (objects that represent a sequence of text) */
    std::string name = "Serg"; /* this is how you declare and assign strings*/
    std::string day = "Wednesday";

    
    std::cout << "String variable assignment: " << std::endl;
    std::cout << name << std::endl;
    std::cout << day << std::endl;

    /* string literal */
    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;
    
    return 0;
}