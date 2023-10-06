# Python3 code to Demonstrate Remove empty List

# Initializing list
test_list = [5, 6, [], 3, [], [], 9]

# printing original list
print("The original list is : " + str(test_list))
new_list = []
# Remove empty List from List
for i in test_list:
    x = str(type(i))
    if x.find("list") != -1:
        if len(i) != 0:
            new_list.append(i)
    else:
        new_list.append(i)
# printing result
print("List after empty list removal : " + str(new_list))
