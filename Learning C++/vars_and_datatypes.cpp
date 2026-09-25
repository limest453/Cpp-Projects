#include <iostream>

int main(){

    int x; //declaration of an integer
    x = 5; //assignment
    int y = 5; //or do this

    int sum = x+y;
    
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    //Integers(whole numbers), decimal values assigned as int are trunkated
    int age = 15;

    //Double (number including decimal)
    double temp = 25.1;

    //Char (single character), use single quotes, only stores the last character if a string is assigned as char
    char grade = 'A';
    //char x = 100 converts the number into the respective ASCII character

    //boolean (true or false), storing 0 turns to false and 1 turns to True
    bool running = true;

    //String (objects that represnt a list of characters), use double quotes
    std::string name = "Ayush";

    std::cout << "Hello " << name << '\n'; //concatenation
    std::cout << "You are " << age << " years old!";

    return 0;
}