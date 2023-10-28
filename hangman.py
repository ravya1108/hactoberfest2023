# Create Hangman Game in Python

import random

def choose_word():
    # List of words to choose from
    word_list = ["python", "hangman", "computer", "programming", "debugging", "openai", "artificial", "intelligence"]

    # Choose a random word from the list
    return random.choice(word_list)

def display_word(word, guessed_letters):
    display = ""
    for letter in word:
        if letter in guessed_letters:
            display += letter
        else:
            display += "_"
    return display

def hangman():
    max_attempts = 6
    word_to_guess = choose_word()
    guessed_letters = []
    attempts = 0

    print("Welcome to Hangman!")
    
    while True:
        print("\nWord: " + display_word(word_to_guess, guessed_letters))
        guess = input("Guess a letter: ").lower()

        if guess in guessed_letters:
            print("You already guessed that letter.")
            continue

        guessed_letters.append(guess)

        if guess in word_to_guess:
            print("Good guess!")
        else:
            print("Oops, that letter is not in the word.")
            attempts += 1

        if display_word(word_to_guess, guessed_letters) == word_to_guess:
            print("\nCongratulations! You've guessed the word: " + word_to_guess)
            break

        if attempts == max_attempts:
            print("\nSorry, you're out of attempts. The word was: " + word_to_guess)
            break

if __name__ == "__main__":
    hangman()
