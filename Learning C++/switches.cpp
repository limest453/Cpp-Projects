#include <iostream>

int main()
{
    //switch = alternative way to using many "else if" statements
    //          compare one value against many cases

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){ //checks that "month" vairable, it can check for ANY variable data type 
        case 1: //checks what happens in the case that month = 1
            std::cout << "It is January";
            break; //used to break out the case
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
        default: //if there is no match cases, this is executed (like else statements)
            std::cout << "Please enter only numbers 1-12";
    return 0;
}
