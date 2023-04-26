import numpy as np
mat = []
def readMat(mat, file):
    file = open(file, 'rt')
    for line in file:
        mat.append([int(x) for x in line.split()])
    file.close()
    return mat

def printMat(mat):
    print(mat)

def calcSubMat(matrice,m):
    sume = []
    n = matrice.shape[0]
    for i in range(n - m + 1):
        for j in range(n - m + 1):
            submatrice = matrice[i:i+m, j:j+m]
            suma = np.sum(submatrice)
            sume.append(suma)
    return sume

def info_autor():
    print("Autor: ChatGPT si Liviu")

print('''
    1. Citire matrice din fisier
    2. Afisare matrice citita
    3. Calcul sume submatrici + salvare in fisier a rezultatului
    4. Info autor
    5. Exit
    ''')
while True:
    opt = int(input('Introduceti optiunea: '))
    match opt:
        case 1:
            readMat(mat, 'mat.txt')
            print('Matricea a fost citita din fisier')
        case 2:
            printMat(mat)
        case 3:
            m = int(input('Introduceti dimensiunea submatricii: '))
            matrice = np.array(mat)
            sume = calcSubMat(matrice, m)
            file = open('sum.txt', 'wt')
            for x in sume:
                file.write(str(x) + ' ')
            file.close()
            print('Sumele au fost salvate in fisier')
        case 4:
            info_autor()
        case 5:
            exit()
        case _:
            print("Optiune invalida")