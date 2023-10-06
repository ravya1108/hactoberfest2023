import random

a = ["Rock", "Paper", "Scissors"]
print("Enter your choice")
inp = input()
res = random.choice(a)
print("Computer Choice is: ", res)
print("THEREFORE:")
if res == inp:
    print("DRAW")
else:
    if (
        (res.upper() == "ROCK" and inp.upper() == "PAPER")
        or (res.upper() == "SCISSORS" and inp.upper() == "ROCK")
        or (res.upper() == "PAPER" and inp.upper() == "SCISSORS")
    ):
        print("YOU WIN")
    else:
        print("YOU LOSE")
