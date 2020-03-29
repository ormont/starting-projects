/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Orozco
 *
 * Created on October 5, 2019, 8:14 AM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    // Reading the numbers
    int n1, n2;
    cout << "Enter first integer number (N1): ";
    cin >> n1;
    cout << "Enter second integer number (N2): ";
    cin >> n2;
    cout << "\n";
    
    // Adding the numbers
    int n = n1 + n2;
    
    // Writing output
    cout << "N1 + N2 = " << n <<  "\n";
        
    // Keeping the console opened
    cin.get();
    cin.get();
    
    return 0;
}

