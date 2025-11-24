#include <iostream> /* iostream -> header file for basic input and output operations */
#include <vector> 

// typedef std::vector<std::pair<std::string, int>> pairlist_t
typedef std::string text_t;
typedef int number_t;
int main(){
    
    /* typedefs helps with readability and reduces typos
        -> here we created an identifier 'text_t' which acts like a std::string
    */
    
    text_t firstName = "Serg";
    number_t age = 22;

    std::cout << "My Name is ";
    std::cout << firstName << std::endl;
    
    std::cout << "I am ";
    std::cout << age;
    std::cout << " years old" << std::endl;

    return 0; 
}