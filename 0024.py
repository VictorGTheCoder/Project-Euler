#Total permutations = 10! = 3'628'800
#We want index 999'999

#999'999/9! = 2 remains 274239 so out final number start with 2........ then (0,1,3,4,5,6,7,8,9)
#274239/8! = 6 remains 32319 but index 6 is now 7 since we remove 2 of the list. 27........ (0,1,3,4,5,6,8,9)
#32319/7! = 6 remains 2079 but now index 6 = 8. 278....... (0,1,3,4,5,6,9)
#2079/6! = 2 remains 639 index 2 = 3. 2783...... (0,1,4,5,6,9)
#639/5! = 5 remains 39 index 5 = 9. 27839..... (0,1,4,5,6)
#39/4! = 1 remains 15 index 1 = 1. 278391.... (0,4,5,6)
#15/3! = 2 remains 3 index 2 = 5. 2783915...(0,4,6)
#3/2! = 1 remains 1 index 1 = 4. 27839154..(0,6)
#1/1! = 1 remains 0 index 1 = 6. 278391546. (0)
#and so permutation[999'999] = 2783915460

#now let's implement this
from math import factorial


result = []
def perm(result,list, index):
    if(len(list) == 0):
        return result
    c = list[index//factorial(len(list) - 1)]
    result.append(c)
    index %= factorial(len(list) - 1)
    list.remove(c)
    return perm(result,list,index)


list = [0,1,2,3,4,5,6,7,8,9]
allpermlist = [[]]
print(perm(result,list,999999))