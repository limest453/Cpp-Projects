#include <iostream>

int main()
{
    // if statements = do something if a condition is true
    //                  if not, then don't do it.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age>=100){ //if 
        std::cout << "Wow. A century on this earth!";
    }
    else if(age>=18){ //else if
        std::cout << "You are an adult";
    }
    else if (age<0){ //you always need the bracket
        std::cout << "You haven't been born yet";
    }
    else{ //else
        std::cout << "You are a CHILD";
    }

    return 0;
}