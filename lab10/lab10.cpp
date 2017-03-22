/*













*/

int add(int x, int y);
int addResult = add(argOne, argTwo);

#include<iostream>

using namespace std;


int main(){
    
    
    int varIntA, varIntB;
    double varDoubleA, varDoubleB;
    char varCharA, varCharB;
    
    cin >> varIntA >> varCharA >> varIntB >> varCharB >> varDoubleA; // read
    cin.get(varCharA);
    cout << "varIntA: " << varIntA << endl; // 20
    cout << "varCharA: " << varCharA << endl; // +
    cout << "varIntB: " << varIntB << endl; // 9
    cout << "varCharB: " << varCharB << endl; // .
    cout << "varDoubleA: " << varDoubleA << endl; // 7.7
    cout << "varCharA: " << varCharA << endl; // blank space
    
    
    
    int x = 5;
    int sum = 1;
    for(int i = 7; i > 5; i--){
        sum = (sum * sum) + 5;
    }
    cout << "sum: " << sum << endl;
    
    // be able to do the above buth with a while loop
    
    
    // know short circut evaluations(See previous lab notes)
    // Know result of logical expressions(See previous lab notes)
    // Know the ascii values of letters, know that A is less than Z
    // a is less than z
    // a is greater than A
    
    
    // know if a function is value returning or void, if its parameters are pass by value or by reference
    // know which are formal parameters(function def) which are actual paramters(function call)
    // know difference between pass by value/reference
    int addResult = add(argOne, argTwo);
    return 0;
    
    
    //scope
    int i;
    for(i = 0; i < 10; i++){
        // do stuff
    }
    for(i = 0 i < 10 i++){
        // do stuff
    }
    
    /* this wont work 
     for(int i = 0; i < 10; i++){
        // do stuff
    }
     for(i = 0 i < 10; i++){
        // do stuff
     }
    */
    
    
}


int add(int x, int y){
    int k = x + y;
    return k;
}