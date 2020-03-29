"""
Created on Sun Mar 29 12:54:34 2020
@author: morozco
"""

# ----------------------------------------------------------------------
def AddTwoNumbers(a, b):
    return a + b

# ----------------------------------------------------------------------
def main():
    a = float(input("Enter a number (N1): "))
    b = float(input("Enter a number (N2): "))
    print("N1 + N2 =", AddTwoNumbers(a, b))
    
# ----------------------------------------------------------------------
if __name__ == "__main__":
    main()    