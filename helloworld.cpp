#include <iostream> /* iostream -> header file for basic input and output operations */

int main(){
    int x; /* declaration */
    int y = 6; /* declaration + assignment */
    x = 5; /* assignment */

    int sum = x + y;
    std::cout << x << '\n'; /* printing variable x */
    std::cout << y << '\n';
    
    std::cout << sum << '\n'; 
    return 0;
}