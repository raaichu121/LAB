// This program to check if you are 18 or not using goto statement.

#include <iostream>
using namespace std;
                   
// defining the default arguments
void character(char = 'a', int = 2);
                                  
int main() {
    int count = 4;
                                  
    cout << "No argument passed: ";
    // a, 2 will be parameters
    character(); 
                                      
    cout << "First argument passed: ";
     // b, 3 will be parameters
    character('b'); 
                                      
    cout << "Both arguments passed: ";
    // c, 4 will be parameters
    character('c', count); 
                                  
    return 0;
}
                                  
void character(char d, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << d;
    }
    cout << endl;
}