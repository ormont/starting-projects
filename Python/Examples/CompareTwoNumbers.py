"""
Created on Sun Mar 29 12:57:45 2020
@author: morozco
"""

# ----------------------------------------------------------------------
def CompareTwoNumbers(n1, n2):
    if n1 < n2:
        return -1
    elif n1 > n2:
        return 1
    else:
        return 0
    
# ----------------------------------------------------------------------
def main():
    a = float(input("Enter a number (N1): "))
    b = float(input("Enter a number (N2): "))
    
    comp = CompareTwoNumbers(a, b)
    
    if comp < 0:
        print("N1 is less than N2.")
        print("N2 is greater than N1.")
    elif comp > 0:
        print("N1 is greater than N1.")
        print("N2 is less than N1.")
    else:
        print("N1 is equal to N2.")
    
# ----------------------------------------------------------------------
if __name__ == "__main__":
    main()         