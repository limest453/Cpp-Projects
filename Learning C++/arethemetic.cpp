#include <iostream>

int main(){
    // arithemtic operators = return the result of a specifc
    //                  arthetmic operation (+ - * /
    
    int students = 0;
/*
    students = students + 1;
    students += 1;
    students++; only adds 1

    students = students - 1;
    students -= 1;
    students--; only subtracts 1

    students = students * 2;
    students *= 2;
    
    students = students / 2;
    students /= 3; any decimal portion is truncated if "students" is an int, the decimal point stays if "students" is double
     
    int remainder = students % 3; Returns the remainder, % 2 can be used to check even
*/
    
    //Arithetmic works with BODMASS
    students = 6 - (5 + 4 ) * 3 / 2;

    std::cout << students;

    return 0;
}

