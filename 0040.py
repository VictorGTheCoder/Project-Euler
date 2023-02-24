
def get_chiffre(cnb, chiffreIndex, sizenb):
    i = 0
    while (i < chiffreIndex):
        while (cnb > pow(10, sizenb - 1)):
            cnb -= pow(10, sizenb - 1)
        sizenb -= 1
        i += 1
    while (cnb > 9):
        cnb = cnb // 10
    return cnb

def fonc(index):
    sizenb = 1
    cnb = 0
    ci = 0
    while(ci < index):
        if (cnb == pow(10, sizenb) - 1):
            sizenb += 1
        ci += sizenb
        cnb += 1
    chiffreIndex =  + sizenb - ci + index - 1
    x = get_chiffre(cnb, chiffreIndex, sizenb)
    return (get_chiffre(cnb, chiffreIndex, sizenb))

print(fonc(20))
print(fonc(21))
print(fonc(22))
print(fonc(23))
print(fonc(24))
print(fonc(25))
print(fonc(26))
print(fonc(27))
print(fonc(28))
print(fonc(29))


print(fonc(30))
print(fonc(31))
print(fonc(32))
print(fonc(33))
print(fonc(34))
print(fonc(35))
print("100")
print(fonc(100))
print(fonc(101))
print(fonc(102))
print(fonc(103))
print(fonc(104))
print(fonc(105))
print(fonc(106))
print(fonc(1) * fonc(10) * fonc(100) * fonc(1000) * fonc(10000) * fonc(100000) * fonc(1000000))
print("FINISH")