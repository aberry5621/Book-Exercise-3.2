//
//  main.cpp
//  Book Exercise 3.1
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Book exercise 3.2 - Check number divisibility
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // insert code here...
    cout << "Check if One Number is Divisible by Another \n";
    // D
    int n1 = 0.0;
    int n2 = 0.0;
    double result = 0.0;
    
    // I
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    // P
    
    // check divisibility with modulus, as long as input 2 is not zero
    if (n2 == 0) {
        result = 0.1; // flub result if dividing by zero
    } else {
        result = n1 % n2;
    }
    
    // O
    if (result == 0) {
        // n1 divided by n2 perfectly
        cout << n1 << " is divisible by " << n2 << endl;
    } else {
        // did not divide perfectly :(
        cout << n1 << " is not divisible by " << n2 << endl;
    }
    
    
    return 0;
}
