#include <iostream>
using namespace std;

int main(){
    int x = 0;         // declaring integer x with value of 0
    string y = "zero"; // declaring string y with value of zero
    x += 1;             // an integer can be added to another integer, no error
    y + "es";          // strings can be concatenated, no error
    if(x != 0)         // not true, therefore the statement should not run 
        x + y;         // integers and strings cannot be added, resulting in an error
                       // despite being in an if statement that will never run
}