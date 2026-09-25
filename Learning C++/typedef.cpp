#include <iostream>
#include <vector>

//typedef = reserved keyword used to create an additional name
//      (alias) for another data type.
//      New identifier for an existing type
//      Helps with readability and reduces typos
//      Use when there is a clear benifit
//      Replaced with 'using' (work better w/ templates)

/*
typedef std::vector<std::pair<std::string, int>> pairlist_t; //a datype for a pair list (complicated rn)
the "pairlist_t" is the alias, whenever you type it, you call the left thing
*/

// typedef std::string text_t;
// typedef int number_t; usually ends with _t
using text_t = std::string; //you can use "using" instead of "typedef", more suitable for templates
using number_t = int;

int main(){

    //pairlist_t parlist_var; //instead of doing the big std thing, you can write pairlist_t

    text_t firstName = "Ayush"; //isntead of std::string firstname
    number_t age = 15;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}