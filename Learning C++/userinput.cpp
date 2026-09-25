#include <iostream>

// cout << (<< is insertion operator) (cout is character output)
// cin >> (>> extraction operator) (cin is character input)

//std::getline(std::cin, var); cannot be used to input numbers, only strings

int main()
{
    std::string name;
    int age;

    std::cout << "What's your full name?: ";
    std::cin >> name; //stops reading the string if there is any spaces
    std::getline(std::cin, name); //reads the entire line
    //if there is a std::getline() right after a std::cin then when there is an input in std::cin and you click enter, then 
    std::getline(std::cin >> std::ws, name); // ">> std::ws" -> elmimantes any whitespaces before user input


    std::cout << "What's your age: ";
    std::cin >> age; 

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    
    return 0;
}