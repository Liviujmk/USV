import numpy as np
mat = []
def readMat(mat, file):
    file = open(file, 'rt')
    # reset sum.txt
    for line in file:
        mat.append([int(x) for x in line.split()])
    file.close()
    return mat

def printMat(mat):
    print(mat)

def calcSubMat(matrice,m,file):
    n = matrice.shape[0]
    for k in matrice:
        file.write(str(k) + '\n')
    file.write("Sume submatrice de ordin " + str(m) + '\n')
    for i in range(n - m + 1):
        for j in range(n - m + 1):
            submatrice = matrice[i:i+m, j:j+m]
            for x in submatrice:
                file.write(str(x) + '\n')
            suma = np.sum(submatrice)
            file.write('Suma = ' + str(suma) + '\n')

def info_autor():
    print("Liviu si Davu")

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
            file = open('sum.txt', 'wt')
            calcSubMat(matrice, m, file)

            file.close()
            print('Sumele au fost salvate in fisier')
        case 4:
            info_autor()
        case 5:
            exit()
        case _:
            print("Optiune invalida")