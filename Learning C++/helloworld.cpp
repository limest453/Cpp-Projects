#include <iostream> //iostream is a header file with functions for basic input/output operations

int main(){ //begins the main program

    std::cout << "Hello World" << std::endl; //std means standard, c means character, out meants ouput (standard character output)
    /* 
        << is the output operator, ; at end to end each line
        endl means end line so the curser will go to the next line, it flushes the output buffer unlke \n
    */

    std::cout << "I am Ayush" << '\n'; //\n also goes to a new line (runs faster) and '' is for character but "" is for strings

    return 0; // End of main program, if 0 is returned, then the end of the program was reached, if 1 is returned, then there was a problem
}
