#include <iostream>
#include <stdlib.h> 
#include "LinearInterpolator.h"
#include "Histogram.h"
using namespace std;
// Pause execution waiting for a key
void menuPause() {
	cout << endl << "Press any key and then enter to continue ..." << endl;
	//cin.ignore();
	cin.get();
}
// maiun function
int main() {
	cout << "MTH773P: Advanced Computing in Finance Coursework 2"<<endl;

	cout << endl << "Part 1 Linear Interpolator" << endl;
	LinearInterpolator LI;
	LI.add(2, 1.86);
	LI.add(4, 2.56);
	LI.add(1, 1.19);
	LI.add(5, 2.63);
	LI.add(3, 2.34);
	LI.displayMap();
	/*
	double period = 0;
	cout << "Enter the period (in years), that you want to evaluate " << endl;
	cin >> period;
	cout << "The estimated iterest rate for: "<<period<<" years is: " << LI.value(period) << endl;
	LI.add(1.5, 2.03);
	LI.displayMap();
	cout << "Enter the period (in years), that you want to evaluate " << endl;
	cin >> period;
	cout << "The estimated iterest rate for: " << period << " years is: " << LI.value(period) << endl;
	LI.add(1.5, 2.5);
	LI.displayMap();
	cout << "The estimated iterest rate for: " << period << " years is: " << LI.value(period) << endl;
	*/
	cout << endl << "Part 2 Histogram" << endl;
	Histogram h(-4, 4, 40);
	h.displayHistogram();
	menuPause();
	return 0;
}