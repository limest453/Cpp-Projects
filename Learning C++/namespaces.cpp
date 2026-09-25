#include <iostream>

// Namespace = provides a solution for preventing name conflicts in large projects. 
//Each entity needs a unique name.
//A namespace allows for identically named entities as long as the namespaces are different.

namespace first{ //Allows different values of the same variable
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    /*
    int x = 0;
    
    std::cout << x; If the specific namespace is not mentioned the local vairable will be displaced
    
    std::cout << first::x; Outputs the x vairable with the "first" namespace. "::" stands for scope resolution operator
    */

    /*
    using namespace second;

    std::cout << x;
    std::cout << first::x; //To send another namespace when "using namespace second"
    */

    /*
    using namespace std; removes the need to use std:: for eveyrhting but has lots of naming errors (multiple things with the same name)

    cout << first::x << "nd";

    */

    using std::cout; //removes the need to do std:: but only for std::cout
    using std::string; //removes the need to do std:: but only for std::string

    string name = "Name";

    cout << "Hello" << name;

    return 0;
}