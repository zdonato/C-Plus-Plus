/*
 * main.cpp
 *
 *  Created on: Sep 30, 2013
 *      Author: zdonato
 */


#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(){

	double a, b, c, x1, x2, disc, response;

	do {
	cout << "Enter a: ";
	cin >> a;
		
	cout << "Enter b: ";
	cin >> b;
		
	cout << "Enter c: ";
	cin >> c;
	
	if (a == 0) {
		x1 = (c/b);

		if (x1 < 0) {
			x1 = abs(c/b);
		}
		else {
			x1 = -(c/b);
		}
		cout << "ROOT: " << x1 << endl;
	}
	else {
		disc = sqrt(pow(b,2) - (4*a*c));
		x1 = (-b + disc)/(2*a);
		x2 = (-b - disc)/(2*a);
		if (x1 == x2){
			cout << "ONE ROOT: " << x1 << endl;
		}
		else if (isnan(x1) == true & isnan(x2) == true ){
			cout << "NO REAL ROOTS." << endl;
		}
		else{
		cout << "ROOT 1: " << x1 << endl;
		cout << "Root 2: " << x2 << endl;
		}
	}

	cout << "Type 1 to perform again or any other key to quit.";
	cin >> response;
	} while (response == 1);

	cout << "You have chosen to quit." << endl;
}


