#include <iostream>
#include <stdlib.h> 
#include "LinearInterpolator.h"

using namespace std;

// Pause execution waiting for a key
void menuPause() {
	cout << endl << "Press any key and then enter to continue ..." << endl;
	//cin.ignore();
	cin.get();
}

int main() {
	cout << "MTH773P: Advanced Computing in Finance Coursework 2"<<endl;

	LinearInterpolator LI;
	
	LI.add(2, 1.86);
	LI.add(4, 2.56);
	LI.add(1, 1.19);
	LI.add(5, 2.63);
	LI.add(3, 2.34);

	LI.displayMap();

	/*
	cout << "The estimated iterest rate for: 2.5 years is: " << LI.value(2.5);
	cout << "The estimated iterest rate for: 4.5 years is: " << LI.value(4.5);

	LI.add(1.5, 2.03);
	*/
	menuPause();
	return 0;
}