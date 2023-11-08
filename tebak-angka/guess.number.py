import random

number = random.randint(1, 99)
name = input("enter your name: ")
max_attempts = int(input("enter the attempt you want: "))
attempts = 0

while attempts < max_attempts:
    guess = int(input("enter a number from 1 to 99: "))

    if guess < number:
        print("guess is low")
    elif guess > number:
        print("guess is high")
    else:
        print(f"congratulations: {name} !you guessed it!")
        break

    attempts += 1
    print(f"attempts remaining: {max_attempts-attempts}")

if attempts == max_attempts:
    print(f"out of attempts, you lost. the number was: {number}")
