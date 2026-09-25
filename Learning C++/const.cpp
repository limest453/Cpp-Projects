#include <iostream>

int main(){

    const double PI = 3.14; // constant, a variable which doesnt change, name should be all caps
    double radius = 10;
    double circumfurence = 2*PI*radius;

    std::cout << circumfurence << "cm";

    return 0;
}