// In this game, the computer will generate a random number, and 
// the player has to guess it. The computer will provide feedback
// on whether the guess was too high or too low, and the player will continue guessing until they get it right.

import random

def guessing_game():
    # Generate a random number between 1 and 100
    secret_number = random.randint(1, 100)
    
    print("Welcome to the Guessing Game!")
    print("I have picked a number between 1 and 100. Try to guess it.")

    attempts = 0

    while True:
        try:
            guess = int(input("Enter your guess: "))
        except ValueError:
            print("Invalid input. Please enter a number.")
            continue

        attempts += 1

        if guess < secret_number:
            print("Too low! Try again.")
        elif guess > secret_number:
            print("Too high! Try again.")
        else:
            print(f"Congratulations! You've guessed the number in {attempts} attempts.")
            break

if __name__ == "__main__":
    guessing_game()
