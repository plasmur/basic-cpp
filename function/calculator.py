def addition(a, b):
    return a + b


def substraction(a, b):
    return a - b


def multiplication(a, b):
    return a * b


def division(a, b):
    return a / b


def floor_division(a, b):
    return a // b


def modulus(a, b):
    return a % b


def exponent(a, b):
    return a**b


while True:
    print("\n--welcome to calculator --")
    print("-" * 40)
    a = int(input("enter the first number: "))
    b = int(input("enter the second number: "))
    print("press 1 for addition")
    print("press 2 for substraction")
    print("press 3 for multiplication")
    print("press 4 for division")
    print("press 5 for floor division")
    print("press 6 for modulus")
    print("press 7 for exponent")
    print("press 8 for quit")
    print("-" * 40)
    user_choice = int(input("enter your choice: "))
    if user_choice == 1:
        result = addition(a, b)
        print("sum of ", result)
    elif user_choice == 2:
        result = substraction(a, b)
        print("substraction = ", result)
    elif user_choice == 3:
        result = multiplication(a, b)
        print("multiplication = ", result)
    elif user_choice == 4:
        if b == 0:
            print(" 0 is not allowed for division, try another number")
        else:
            result = division(a, b)
        print("division = ", result)

    elif user_choice == 5:
        if b == 0:
            print(" 0 is not allowed for division, try another number")
        else:
            result = floor_division(a, b)
            print("floor division = ", result)

    elif user_choice == 6:
        result = modulus(a, b)
        print("modulus = ", result)
    elif user_choice == 7:
        result = exponent(a, b)
        print("exponent = ", result)
    elif user_choice == 8:
        print(" you have exited the calculator, bye")
        break
    else:
        print("invalid input, try again!")
