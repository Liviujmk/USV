import random
import os
# while True :
#     options = '''
#     A. Generare vector de n-elemente
#     B. Afisare vector generat
#     C. Afisare elemente > decat media aritmetica a elementelor vectorului
#     D. Determinare valoare maximă şi pozitia aceasteia în tablou.
#     E. Deplasare elemente cu x-pozitii; x-citit de la tastatura. Pentru optiunea E sensul de deplasare se va stabili in functie de semnul lui x; + sensul spre dreapta, - sensul spre stanga, 0 – nu se va deplasa nici un element.
#     F. Eliminare elemente care nu apartin intervalului [a,b]
#     G. Info autor
#     H. exit
#     '''
#     print(options)
#     os.system('cls')
#     opt = input("Introduceti optiunea: ")
#     opt = opt.upper()
#     match opt:
#         case 'A':
#             n = int(input("Introduceti numarul de elemente: "))
#             v = []
#             for i in range(n):
#                 v.append(random.randint(0,100))
#         case 'B':
#             print(v)
#         case 'C':
#             s = 0
#             for i in range(n):
#                 s += v[i]
#             m = s/n
#             print("Media aritmetica este: ", m)
#             for i in range(n):
#                 if v[i] > m:
#                     print(v[i])
#         case 'D':
#             # max = 0
#             # poz = 0
#             # for i in range(n):
#             #     if v[i] > max:
#             #         max = v[i]
#             #         poz = i
#             # print("Max este", m, 'iar pozitia lui este', poz)
#             max = max(v)
#             poz = v.index(max)
#             print("Max este", max, 'iar pozitia lui este', poz)
#         case 'E':
#             x = int(input("Introduceti numarul de pozitii: "))
#             if x > 0:
#                 for i in range(x):
#                     aux = v[n-1]
#                     for j in range(n-1,0,-1):
#                         v[j] = v[j-1]
#                     v[0] = aux
#             elif x < 0:
#                 for i in range(-x):
#                     aux = v[0]
#                     for j in range(n-1):
#                         v[j] = v[j+1]
#                     v[n-1] = aux
#             else:
#                 print("Nu se deplaseaza nici un element")
#         case 'F':
#             a = int(input("Introduceti valoarea lui a: "))
#             b = int(input("Introduceti valoarea lui b: "))
#             removed =[]
#             for i in range(n):
#                 if v[i] < a or v[i] > b:
#                     removed.append(v[i])
#             for i in removed:
#                 v.remove(i)
#             n = len(v)
#         case 'G':
#             print("Autor: Mitrofan Liviu")
#         case 'H':
#             break
#         case _:
#             print("Optiune invalida")

# ex 2
while True :
    options = '''
    1. Citire matrice de la tastatura (pe linii)
    2. Afisare matrice
    3. Creare si afisare lista de elemente maxime de pe linii
    4. Creare si afisare lista de elemente maxime de pe coloane
    5. Afisare matrice transpusa
    6. Adauga linie
    7. Adauga coloana
    8. Sterge linie
    9. Sterge coloana
    10. Liniarizare matrice (creare si afisare vector rezultat)
    0. Exit
    '''
    print(options)
    os.system('cls')
    opt = input("Introduceti optiunea: ")
    opt = opt.upper()
    mat = []
    n = 0
    m = 0
    match opt:
        case '1':
            n = int(input("Introduceti numarul de linii: "))
            m = int(input("Introduceti numarul de coloane: "))

            for i in range(n):
                a = []
                for j in range(m):
                    a.append(int(input("Introduceti elementul: ")))
                mat.append(a)
        case '2':
            for i in range(n):
                for j in range(m):
                    print(mat[i][j], end=" ")
                print()
        case '0':
            break
        case _:
            print("Optiune invalida")