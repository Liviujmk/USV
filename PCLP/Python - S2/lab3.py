# FOR LOOP EXERCISES

# ex1-2
# n=input("Intodu numarul de elemente: ")
# n=int(n)

# ex 2.a
# descrescator la 0
# for i in range(n-1,-1,-1):
#     print(i, end=" ")

# ex 2.b
# for i in range(1, n, 2):
#         print(i, end=" ")

# ex 2.c
# fact = 1
# for i in range(1,n+1):
#     fact = fact*i
# print("Factorialul este: ", fact)

# ex 2.d
# x = int(input("Introduceti numarul: "))
# s = 0
# for i in range(1,n+1):
#     if i%x==0:
#         s=s+i
#
# print("Suma este: ", s)

# ex 3
# n = int(input("Introduceti numarul: "))
# s=0
# while n:
#     s=s+n%10
#     n=n//10
#
# print("Suma cifrelor este: ", s)

# ex 4
# n = int(input("Introduceti numarul: "))
# for i in range(n+1):
#     nr=i
#     for i in range(nr):
#         print("*", end=" ")
#     print()
#
# for i in range(n-1,0,-1):
#     nr=i
#     for i in range(nr):
#         print("*", end=" ")
#     print()

# ex 5
# x = int(input("Introduceti numarul x: "))
# n = int(input("Introduceti numarul n: "))
# s=0
# nr=0
# for i in range(1,n+1):
#     nr=nr*10+x
#     s=s+nr
# print("Suma este: ", s)


# WHILE LOOP EXERCISES

# ex 1
# n = int(input("Introduceti numarul: "))
# s=0
# while n:
#     s=s+n
#     n=int(input("Introduceti numarul: "))
# print("Suma este: ", s)

# ex 2
# n = int(input("Introduceti numarul: "))
# print(str(n)[::-1])

# ex 3
# n = 11
# nr = 1
# while nr<n:
#     s = 3*(nr**2)-7*nr-10
#     print("p(%d) = 3*%d^2 - 7*%d - 10 = %d" % (nr, nr, nr, s))
#     nr=nr+1

