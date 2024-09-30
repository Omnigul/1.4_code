//Write a program that reads two input files whose lines are ordered by a key data field.
// Your program should merge these two files(test files will be supplied), writing an output 
// file that contains all lines from both files ordered by the same key field.As an example, 
// if two input files contain student names and grades for a particular class ordered by name(the key field),
// merge the information as shown in the example.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inFile1;
	inFile1.open("file1.txt");
	string names1;
	
	 
 
	ifstream inFile2;
	inFile2.open("file2.txt");
	string names2;
	inFile2 >> names2;

	ofstream outFile;
	outFile.open("namesFile.txt");

	if (inFile1.eof())
		cout << "hello" << endl;
	else
		cout << "oops" << endl;
}
