/* Scope of identifiers 

    Scope of an identifier refers to where an identifier is visible in the program

    Local identifier: Identifier declared within a function
        These are not accessible outside of the function
    
    Global identifier: Identifier declared outside of every function definition


*/


#include<iostream>

using namespace std;

void test();


int main(){
    
    
    for(int count = 0; count < 5; count++){
        cout << " 'count' inside of first for loop: " << count << endl;
    }
    
    cout << count << endl; // This will cause a compile error. The scope of 'count' is only in the for loop
    
    // The error above could be fixed as follows:
    
    /* We can declare another variable with the name 'count' since the scope of the previous 'count' has expired */
    int count = 0;
    
    /* The initial statement of the for loop is using 'count' which scope exists inside of main, and any blocks inside
      of main after line 33 
     */
    for(count = 0; count < 5; count++){
        cout << " 'count' inside of second for loop: " << count << endl;
    }
     cout << " 'count' after second for loop: " << count << endl;
    
    
    for(count = 0; count < 5; count++){
        
        if (count == 0) {
            int x = 37;
        }
        
        cout << "x: " << x << endl; // This will cause an error because the scope of x only exists inside of the if statement
    }
    
    cout << x << endl; // This will cause an error because the scope of x only exists inside of the if statement
    
    
    /* All the variables above are examples of automatic variables. Automatic variables are those in which the 
     memory is allocated at block entery and deallocated at block exit
     */
    
    /* Anoter type of variable is a static variable. Which is a variable for which memory remains allocated as long as the program executes is called a static variable.
     */
    
    for(int i = 0; i < 5; i++){
        test();
    }
    
    
    return 0;
}


void test(){
    
    static int x = 0; int y = 10;
    x = x + 2;
    y = y + 1;
    cout << "Inside test x = " << x << " and y = "
    << y << endl;
}