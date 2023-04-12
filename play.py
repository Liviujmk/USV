# v = [1,2,3,4,5]
# x = int(input("x="))
# v = 'superasikdl'
# if x:
#     if x == abs(x):
#         print(f"Deplasare cu {x} la dreapta: {v[-x:]+v[:-x]}")
#     else:
#         print(f"Deplasare cu {-x} la stanga: {v[-x:]+v[:-x]}")
# else:
#     print("Nu se deplaseaza nici un element")

# v = [1,2,3,4,5]
# s = 0
# for i in v:
#     s += i
# print(s)

import random
v = [random.randint(1,1000) for i in range(10)]
vc = v.copy()
print(v)
# for i in vc:
#     if i>500 or i<100:
#         v.append(i)
# print(v)
x = int(input("x="))
v.pop()
print(v)
