// Simultaneous Equation Solver
// OCT 13, 2013 17:15
// Author: Brandan Tyler Lasley
// Sources: None other than an algebra website to double check.
// Solve Algebraic equations

#include <iostream>
using namespace std;

// This code is messy to my standards, I would normally clean it up but I have to pick someone up at the airport.
int main ()
{
	// Declare Vars
	double equ[6];        // Declare the array 'edu', this will store the A B C 1 and 2 numbers for calculation.
	double x, y;          // Declare X, Y for calculation of the final product
	int i = 0;			  // Counter for the array
	int i2 = 0;			  // counter for loop control
	int numOfpasses = 0;  // counter for main loop

	// Print Header
	cout << "Welcome to Brandan's Simultaneous Equasion Solver." << endl;

	// Start main loop.
	do {
		// Print question and calculate if a b c 1 or 2.
		cout << "Please enter a" << numOfpasses + 1 << ", b" << numOfpasses + 1 << ", c" << numOfpasses + 1 << " (seperated by spaces): ";
		// start secondary loop for array control. 
		do {
			// Input for the 3 vars and put them into the array.
			cin >> equ[i];
			// Count 1 for array control an secondary loop control.
			i++;
			i2++;
		} while (i2 < 3);
		// clear secondary loop control because we need it to run again when the main loop... loops over. 
	i2 = 0;
	// Add another pass to the main loop. 
	numOfpasses++;
	// Exit on 2nd pass
	} while (numOfpasses < 2);

	// Check if equasion has infinite or no possible solutions. (this should work, but not sure on all situations) 
	if  ((equ[0] * equ[4] - equ[3] * equ[1] == 0) && (equ[0] * equ[4] - equ[3] * equ[1] == 0)) {
		cout << "Infinate or no solution." << endl;	
	} else {

		// Array Definitions
		// A = 0 || 3
		// B = 1 || 4
		// C = 2 || 5

		// Calculate X, Y using the array 'equ'
		x = ( equ[2] * equ[4] - equ[5] * equ[1] ) / ( equ[0] * equ[4] - equ[3] * equ[1]);
		y = ( equ[0] * equ[5] - equ[3] * equ[2] ) / ( equ[0] * equ[4] - equ[3] * equ[1]);

		// Print out the equation and the solution.
		cout << "The solution of the equations: " << endl;
		cout << equ[0] << "x + " << equ[1] << "y = " << equ[2] << endl;
		cout << equ[3] << "x + " << equ[4] << "y = " << equ[5] << endl;
		cout << "is x = " << x << " and " << "y = " << y << endl;
	}
	// Print out the footer
	cout << "Thank You for using Brandan's Simutaneous Equasion Solver." << endl;

	// Pause & Return
	getchar();
	getchar();
    return 0;
}