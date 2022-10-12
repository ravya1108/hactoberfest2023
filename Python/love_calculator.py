# 🚨 Don't change the code below 👇
print("Welcome to the Love Calculator!")
name1 = input("What is your name? \n")
name2 = input("What is their name? \n")
# 🚨 Don't change the code above 👆

#Write your code below this line 👇


final_name1 = name1.lower()
final_name2 = name2.lower()
concate = final_name1 + final_name2

#for true
t = int(concate.count("t"))
r = int(concate.count("r"))
u = int(concate.count("u"))
e = int(concate.count("e"))
true = t + r + u + e

#for love
l = int(concate.count("l"))
o = int(concate.count("o"))
v = int(concate.count("v"))
e = int(concate.count("e"))
love = l + o + v + e

love_score = str(true) + str(love)

if int(love_score) > 90 or int(love_score) < 10:
    print(f"Your score is {love_score}, you go together like coke and mentos.")
elif int(love_score) > 40 and int(love_score) < 50:
    print(f"Your score is {love_score}, you are alright together.")
else:
    print(f"Your score is {love_score}.")   