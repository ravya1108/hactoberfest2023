import random
print('you want to play with country or color?')
a=input ('enter your choice  :')
if a=='country':
    country=['india','australia','austria','poland','brazil']
    name = input("What is your name? ")
    for char in name:
        if  not (("A" <= char and char <= "Z") or ("a" <= char and char <= "z") or (char == " ")):
            print('enter alphabets only')
   
    print("Good Luck ! ",name)

    word = random.choice(country)
    print("Guess the characters")
    guesses = ''
    turns = 12
    while turns > 0:
        failed = 0
        for char in word:
            if char in guesses:
                print(char)
            else: 
                print("_")
                failed += 1
        if failed == 0:
            print("You Win")
            print("The word is: ", word) 
            break
        guess = input("guess a character:")
        guesses += guess 
     
    
        if guess not in word:
         
            turns -= 1
         
        
     
            print("Wrong")
         
        
        
            print("You have", + turns, 'more guesses')
         
         
            if turns == 0:
                print("You Loose")

elif a=='color':
    color=['pink','orange','yellow','red','green','black','white','grey']
    name = input("What is your name? ")
    print("Good Luck ! ",name)

    word = random.choice(color)
    print("Guess the characters")
    guesses = ''
    turns = 12
    while turns > 0:
        failed = 0
        for char in word:
            if char in guesses:
                print(char)
            else: 
                print("_")
                failed += 1
        if failed == 0:
            print("You Win")
            print("The word is: ", word) 
            break
        guess = input("guess a character:")
        guesses += guess 
     
    
        if guess not in word:
         
            turns -= 1
         
        
     
            print("Wrong")
         
        
        
            print("You have", + turns, 'more guesses')
         
         
            if turns == 0:
                print("You Loose")
replay = input("press y to keep playing or any other thing to exit : ")
if replay.lower() == "y":
    continue
else:
    print("GAME END")
    break