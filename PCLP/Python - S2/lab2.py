# ex 1

# x = int(input("x="))
# if x < 100:
#     print("%x" % x)
# else:
#     print("%o" % x)


# ex 2

# a = int(input("a="))
# b = int(input("b="))
# if a == 0:
#     if b == 0:
#         print("inf")
#     else:
#         print("no solution")
# else:
#     print("x = %.2f" % (-b/a))


# ex 3

# a = int(input("a="))
# b = int(input("b="))
# c = int(input("c="))
#
# if a < b < c:
#     print("sunt numere consecutive crescator")
# elif a > b > c:
#     print("nu sunt numere consecutive descrescator")
# else:
#     print("nu sunt numere consecutive")


# ex 4

# a = int(input("a="))
# if a % 2 == 0:
#     print("par")
# else:
#     print("impar")


# ex 5

# r = int(input("a="))
# if r > 0:
#     print("Aria unei sfere este %.2f" % (4*3.14*(r**2)))
#     print("Volumul unei sfere este %.2f" % (4/3*3.14*(r**3)))
# else:
#     print("r trebuie sa fie pozitiv, ca sa poata fi calculat aria si volumul sferei")


# ex 6

# a = int(input("a="))
# b = int(input("b="))
#
# if a > b:
#     print("a este mai mare decat b")
# elif a < b:
#     print("b este mai mare decat a")
# else:
#     print("a si b sunt egale")


# ex 7

# a = int(input("a="))
# b = int(input("b="))
# c = int(input("c="))
#
# if a <= c <= b:
#     print("c este in intervalul [a,b]")

# ex 8 este la fel ca ex 2
# ex 9

import math
# a = int(input("a="))
# b = int(input("b="))
# c = int(input("c="))
#
# delta = b**2 - 4*a*c
# if delta > 0:
#     x1 = (-b + math.sqrt(delta))/2*a
#     print("x1=%.2f" % x1)
#     x2 = (-b - math.sqrt(delta))/2*a
#     print("x2=%.2f" % x2)
# elif delta == 0:
#     print("x1=x2=", (-b/2*a))
# else:
#     print("Nu exista solutii")


# ex 10

# a = int(input("a="))
# b = int(input("b="))
# c = int(input("c="))
# print("max = ", max(a,b,c))
# print("min = ", min(a,b,c))
# if a<b<c:
#     print(a,b,c,sep=',')
# elif a<b and a>c:
#     print(c,a,b,sep=',')
# elif a<c and a>b:
#     print(b,a,c,sep=',')
# elif c<b and b<a:
#     print(c,b,a, sep=',')
# elif a < c < b :
#     print(a,c,b,sep=',')
# elif b<c<a:
#     print(b,c,a,sep=',')


# ex 11

# x = int(input("x="))
# y = int(input("y="))
# 
# if x > 0 and y > 0:
#     print("I")
# elif x < 0 < y:
#     print("II")
# elif x < 0 and y < 0:
#     print("III")
# elif x > 0 > y:
#     print("IV")


