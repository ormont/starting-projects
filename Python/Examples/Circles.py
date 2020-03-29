# -*- coding: utf-8 -*-
"""
Created on Sun Mar 29 13:23:15 2020
@author: morozco
"""

mpi = 3.141592

# ----------------------------------------------------------------------
def Perimeter(r):
    return 2 * mpi * r

# ----------------------------------------------------------------------
def Area(r):
    return mpi * r * r

# ----------------------------------------------------------------------
def main():
    r = float(input("Enter the radius of the circle: "))
    print("Perimeter: ", Perimeter(r))
    print("Area: ", Area(r))
    
# ----------------------------------------------------------------------
if __name__ == "__main__":
    main()