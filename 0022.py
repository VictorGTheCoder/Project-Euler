with open("text_files/p022_names.txt", "r") as f:
    list = f.read().split(",")

def quick_sort(list):
    if (len(list) <= 1):
        return list
    pivot = list[0]
    del (list[0])
    ##print(pivot)
    list1 = []
    list2 = []
    for e in list:
        if (e < pivot):
            list1.append(e)
        else:
            list2.append(e)
    return quick_sort(list1) + [pivot] + quick_sort(list2)

list = (quick_sort(list))
##list = sorted(list)
f.close()

def name_value(name):
    w_somme = 0
    for letter in name:
        if letter != '"':
            w_somme += ord(letter) - ord("A") + 1
    print(name, w_somme)
    return w_somme

i = 1
result = 0
print(name_value(list[937]))
for name in list:
    result += name_value(name) * i
    i += 1

print(result)

with open("text_files/sorted_names.txt", "w") as f:

    for word in list:
        for letter in word:
            f.write(letter)
        f.write(",")

