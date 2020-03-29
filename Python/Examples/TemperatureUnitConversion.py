"""
Created on Sun Mar 29 13:05:23 2020
@author: morozco
"""

# ----------------------------------------------------------------------
def Far2Celcius(f):
    return (f - 32) * 5 / 9

# ----------------------------------------------------------------------
def Celcius2Far(c):
    return c * 9 / 5 + 32

# ----------------------------------------------------------------------
def main():
    print("----------- MENU -----------")
    print("1. Celsius to Fahrenheit")
    print("2. Fahrenheit to Celsius")
    print("3. Quit")
    
    option = int(input("SELECT ONE OPTION: "))
    
    if option == 1:
        c = float(input("Enter the temperature in Celsius: "))
        f = Celcius2Far(c)
        print("The temperature in Fahrenheit is:", f)
    elif option == 2:            
        f = float(input("Enter the temperature in Fahrenheit: "))
        c = Far2Celcius(f)
        print("The temperature in Celsius is:", c)
    elif option == 3:
        print("Bye!!!")
    else:
        print("Wrong Option.  Bye!!!")
            
# ----------------------------------------------------------------------
if __name__ == "__main__":
    main()      