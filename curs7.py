# def citesteMatrice(numeFisier, mod='rt', tip=int):
#     mat = []
#     with open(numeFisier, mod) as f:
#         for line in f:
#             linconv = list(map(tip, line.split()))
#             mat.append(linconv)
#     for linie in mat:
#         print(linie)
# #
# # matrice = citesteMatrice('mat.txt', 'rt',float)
# # print(matrice)
#
# # for linie in matrice:
# #     print(linie, 'max= ', max(linie))
#
# import random
#
# with open('mat.txt', 'wt') as f:
#     for i in range(4):
#         linie = ""
#         for j in range(5):
#             linie += str(random.randint(5,100)) + ' '
#         f.write(linie)
#         f.write('\n')
#
# print(citesteMatrice('mat.txt'))

# list methods
v = [1,2,3,4,5,1,1,1,1]
c = v.copy()
print(c.extend([1,2,3,4,5]))
print(c)