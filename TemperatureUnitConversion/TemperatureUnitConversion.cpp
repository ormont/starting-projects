/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TemperatureUnitConversion.cpp
 * Author: MOrozco
 *
 * Created on October 5, 2019, 8:21 AM
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
    // Options menu
    cout << "MENU\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Quit\n";
    cout << "SELECT ONE OPTION: ";
    int option;
    cin >> option;
    
    if (option == 1)
    {
        // Celsius to Fahrenheit
        cout << "Enter the temperature in Celsius: ";
        double celsius;
        cin >> celsius;
        
        // Calculating temp in F
        double far = celsius * 9.0 / 5.0 + 32.0;
        
        cout << "The temperature in Fahrenheit is: " << far << "\n";
    }
    else if (option == 2)
    {
        // Fahrenheit to Celsius
        cout << "Enter the temperature in Fahrenheit: ";
        double far;
        cin >> far;
                
        // Calculating temp in C
        double celsius = (far - 32.0) * 5.0 / 9.0;
        
        cout << "The temperature in Celsius is: " << celsius << "\n";
    }
    else if (option == 3)
    {
        cout << "Thank you for using my temperature converter.\n";
    }
    else
    {
        cout << "ERROR: WRONG OPTION.  QUITING.\n";
    }
    
    // Keeping the console opened
    cin.get();
    cin.get();

    return 0;
}

