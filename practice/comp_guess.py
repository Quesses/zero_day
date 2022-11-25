#!/usr/bin/python3
""" Guessing game """


import Random

def guess(x):
    """ defines the guessing game
        the computer guesses a number between 1 and @x
        the user determine if its too high, too low or the correct guess

        Args:
            x: (int) the high variable, to help the computer narrow it down
    """
    low = 1
    high = x
    feedback = ''
    while feedback != 'c':
        guess = Random.randint(low, high)
        feedback = input(f"is {guess} too low [L], too high [H] or correct [C}")
        if (feedback.islower == 'l'):
            high -= 1
        elif (feedback.islower == 'h'):
            high += 1
    print(f"{guess}: computer guessed it right")
