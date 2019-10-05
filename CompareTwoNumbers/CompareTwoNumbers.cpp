/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Orozco
 *
 * Created on October 5, 2019, 7:38 AM
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
    
    // Comparing the numbers
    if (n1 > n2)
    {
        // N1 > N2 !!!!!
        cout << "N1 is greater than N2.\n";
        cout << "N2 is less than N1.\n";
    }
    else if (n2 > n1)
    {
        // N1 < N2 !!!!!
        // Writing output results
        cout << "N1 is less than N2.\n";
        cout << "N2 is greater than N1.\n";
    }
    else
    {
        // N1 == N2 !!!!!
        // Writing output results
        cout << "N1 is equal to N2.\n";
    }
    
    // Keeping the console opened
    cin.get();
    cin.get();
            
    return 0;
}

