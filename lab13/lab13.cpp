/*

	What is a stream?
		A stream is an object that can send and receive data
		'cout' is a stream we have been using

	What is an output stream?
		A stream which can only receive data is an output stream
		or 'ostream'. 'cout' is an example of this

	What is an input stream?
		A stream which can only give you data. 'cin' is an example
		of this

	Reading and Writing Files
		cout sends data to the console, and cin reads data from the
		keyboard

		C++ provides a header file called <fstream> (file stream)
		This header files provides us with ifstream ofstream

		cin and cout are stream objects. ifstream and ofstream are types
		To read and write from from files you have to create an object
		of type ifstream or ofstream

	To create an ifstream that reads from a file this syntax is used:
		ifstream myStream("myFile.txt"):

	This creates a new stream object named myStream which reads from the
	file myFile.txt (the file must exist in the pwd) 
		ifstream myStream("myFile.txt");
		int myInt;
		myStream >> myInt;

	If you need to open the file after you create your stream object
		ifstream myStream;
		myStream.open("myFile.txt");

	To write to a file is similar
		ofstream myStream("myFile.txt";
				or
		ofstream myStream;
		myStream.open("myFile.txt");

	Opening from a file specified from input
		ifstream input(myString.c_str());
*/

#include<iostream>
#include<fstream>

using namespace std;

void bubblesort(int list[], int listLength, ofstream& output);

int main(){
	
	ifstream input("unsorted.txt");
	ofstream output("sorted.txt");
	
	int listSize = 6;
	int list[6]; 

	output << "\n-Unsorted list-\n";
	for(int i = 0; i < listSize; i++){
		input >> list[i]; 
		output << list[i] <<" ";
	}
	output << "\n";

    bubblesort(list, listSize, output);
	return 0;
}



void bubblesort(int list[], int listLength, ofstream& output){
    
    output << "\n-Sorting list-\n";
    int temp;
    int counter = 0;
    for (int i = 0; i < listLength - 1; i++) {
        counter++;
        output <<"Pass#" << counter << " \n";
        for(int j = 0; j < listLength-(i+1); j++){
            
            if (list[j] < list[j+1]) {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
                for(int k = 0; k < listLength; k++){
                    output << list[k] << " ";
                }
                output <<"\n";
            }
        }
    }
    
    output << "\n-Sorted list-\n";
    for (int i = 0; i < listLength; i++) {
        output << list[i] << " ";
    }
    output << "\n";
}

