#include <iostream>

int main(){

    //type conversion = conversion a value of one data type to another
    //                  implicit = automactic
    //                  explicit = preced value with a new data type (int before a variable)


   
    //double x = (int) 3.14; implicit AND explicit - Converts "3.14" to an integer and stores it within the double (x will be 3)

    char x = 100; // explicit cast
    std::cout << (char) 100; //implciit cast

    int correct = 8;
    int questions = 10;
    
    // double score = correct/questions * 100; Doesn't work --> dividing intigers also trunkates away the decimals
    double score = correct/(double)questions * 100; //implicit and explicit cast
    
    std::cout << score << "%";

    std::cout << x;



    return 0;
}