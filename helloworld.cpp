#include <iostream> /* iostream -> header file for basic input and output operations */

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}
int main(){
    
    /* Namespace = provides a solution for preventing name conflicts in large projects. 
                   Each entity needs a unique name. A namespace allows for identically named entities
                   as long as the name spaces are different ? 

                   ie. this is basically how variable names are local to their function (local to the scope)
    */
    
    // using namespace first; /* this indicates the prefix (ie. sets it)*/
    
    /* to call or use the different version of x we must prefix it with the name space
       ie. first::x or second::x -> if we simply do x then we are indicating the local x variable
       unless indicated by "using name space ____"
    */

    int x = 0;
    std::cout << x << std::endl; /* this assume the locally set x variable */
    std::cout << first::x << std::endl; /* we prefix with the indicated namespace */
    std::cout << second::x << std::endl;

    return 0;
}