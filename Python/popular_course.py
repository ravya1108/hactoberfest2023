#a)

def numbers(Students):
    list = []
    for i in range(len(Students)):
        for j in range(len(Students[i])):
            list.append(Students[i][j])

        n = {}
        for elements in list:

            n = {elements:list.count(elements) for elements in list}

            return n


#b)

def popular(n):
    popular_course = max(n , key = n.get)
    return popular_course



Students = [['math', 'phy', 'chem', 'cs'], ['math', 'phy'], ['math', 'chem'], ['history', 'eco']]
a = numbers(Students)
print(a)
b = popular(a)
print("The most popular course is: ",b)