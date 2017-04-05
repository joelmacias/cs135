#include<iostream>
#include<string>
/*
 
 Source:
 C++ Programming: Program Design Including Data Structures by D.S. Malik
 Sixth Edition
 Chapter 8 
 
 An array is a structured data type
	- a structured data type is a data item that is a collection of
 other data items
	- an array is a collection of a fixed number of components of the
 same data type
 
 Syntax for declaring an array
	dataType arrayName[intExp];
 
 Syntax for accessing an array
	arrayName[indexExp]
    [] <-- operator called array subscripting operator. Index starts at 0
 
 Array size is fixed at compile time
 
 Every time a program is ran the size of the array is fixed
 
 Arrays cannot be compared or assigned. Only the individual elements
 of the array can compared or assigned.
 
 Arrays are passed by reference only

 */
using namespace std;

void Swap(string list[]);

int main(){
    
    /* This statement declares an array named list of 10 components. The components are list[0], list[1],...,list[9]. 
     In other words, we have declared 10 variables of type int */
    int unInitializedList[10];
    
    /* In this statement we are printing the integer at component 9. However, list is uninitialized so garbage will be printed. */
    cout << "initializedList:\n";
    cout << unInitializedList[9] << "\n";
    
    /* Here we are initializing all components to 0 */
    int initializedList[10] = {0};
    cout << "initializedList:\n";
    cout << initializedList[9] << "\n";
    
    /* Here we are partially initializing the array. 24.3 will be stored at index 0, 35.4 at 1, 32.4 at 2, the rest of the array will be 0 */
    double partialList[10] = {24.3, 35.4, 32.4};
    cout << "partialList:\n";
    cout << "Index 0: " << partialList[0] << "\n";
    cout << "Index 3: " << partialList[3] << "\n";
    
    /* Size of the array does not always have to be declared. charList will have 4 components. */
    char charList[] = {'a','b','c','z'};
    cout << "charList:\n";
    cout << "Index 3: " << charList[3] << "\n";
    
    /* If we try to access an index out of bounds strange things will happen during execution. This mistake can be tough to catch when debugging. So don't do it :-) */
     cout << "charList out of bounds access:\n";
     cout << "Index 4: " << charList[4] << "\n";
    
    /* Arrays cannot be assigned, the following will cause a syntax error */
    int listX[10] = {0};
    int listY[10] = {1, -1, 2, -2};
    //listX = listY;                            // this is illegal
    
    /* To copy components from one array to another you must do it component by component */
    for(int i = 0; i < 10; i++){
        listX[i] = listY[i];
        cout << "listX index " << i << ": " << listX[i] << "\n";
    }
    
    /* You also cant direclty compare arrays like so:
    if(listX > listY){                          // this is illegal
        cout << "This doesn't work :-(\n";
    }
     */
    /* Comparison must be done component by component, just like assignment */
    for(int i = 0; i < 10; i++){
        if(listX[i] == listY[i]){
        cout << "listX index comparison " << i << ": " << listX[i] << "\n";
        }
    }
    
    /* Reading data into an array */
    int userInputArray[5];
    for(int i = 0; i < 5; i++){
        cin >> userInputArray[i];
        cout << "userInputArray index " << i << ": " << userInputArray[i] << "\n";
    }
    
    /* Strings arrays are fun...*/
    string listString[2] = {"Hello", "World"};
    cout << listString[0] << endl; // This will print Hello
    cout << listString[1] << endl; // This will print World
    
    /* To access the individual chars of the string */
    cout << listString[0][0] << endl; // This will print H
    cout << listString[1][0] << endl; // This will print W
    
    
    
    Swap(listString);
    /* After swap */
    cout << listString[0] << endl; // This will print World
    cout << listString[1] << endl; // This will print Hello
    
    return 0;
}



void Swap(string list[]){
    string temp = list[0];
    list[0] = list[1];
    list[1] = temp;
}