/*
  CS135L Lab 8 Programming Challenge 1 Solution
 
 Write a C++ program that prints the numbers from 1 to 100. But for multiples of three print "Fizz" instead
 of the number, for multiples of five print "Buzz", and for multiples of both three and five print "FizzBuzz"
 
 */

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    
    
    for (int i = 1 ; i < 101; i++) {
        
        if (i % 3 == 0 and i % 5 == 0) {
            cout<<"FizzBuzz"<<endl;
        }
        
        else if (i % 3 == 0 ) {
            cout<<"Fizz"<<endl;
        }
        
        else if (i % 5 == 0){
            cout<<"Buzz"<<endl;
            
        }
        else{
            cout<<i<<endl;
        }
    }
    
    
    
    return 0;
}



