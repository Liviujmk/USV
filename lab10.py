def bancomat (suma, bancnote, afis=True):
    bancnote.sort(reverse=True)
    if afis:
        print("Suma=", suma, "Bancnote disponibile:", bancnote)
    rez = []
    while (suma > 0):
        if len(bancnote) == 0:
            break
        if (suma >= bancnote [0]):
            nr_bancnote = suma // bancnote[0]
            suma = suma % bancnote[0]
            rez.append([bancnote[0], nr_bancnote])
        bancnote.pop(0)
    else:
        return rez
    return []

def livrare(pachet):
    if(len(pachet)==0):
        print('Nu dispunem de bancnote')
    else:
        for val, nr in pachet:
            print(nr, 'x', val, 'lei', end=" + ")
        print()


# pl = bancomat(6459, [500, 200, 100, 50, 20, 10, 5, 1])
#
# print("Rezultat bancomat", pl)
# livrare(pl)

# read from file

def read_file(file_name):
    f = open(file_name, 'r')
    lines = []
    for line in f.readlines():
        lines.append([int(x) for x in line.split()])
    f.close()
    return lines

fisier = read_file('bancomat.txt')

suma = fisier[0]
listaBancnote = fisier[1:]

print(listaBancnote)

def bancomatLimitat(suma, listaBancnoteLimitate, afis=True):
    if afis:
        print("Suma=", suma, "Bancnote disponibile:", listaBancnoteLimitate)
    rez = []
    while (suma > 0):
        if len(listaBancnoteLimitate) == 0:
            break
        if (suma >= listaBancnoteLimitate[0][0]):
            nr_bancnote = suma // listaBancnoteLimitate[0][0]
            if nr_bancnote > listaBancnoteLimitate[0][1]:
                nr_bancnote = listaBancnoteLimitate[0][1]
            suma = suma - nr_bancnote * listaBancnoteLimitate[0][0]
            rez.append([listaBancnoteLimitate[0][0], nr_bancnote])
        listaBancnoteLimitate.pop(0)
    else:
        return rez
    return []

print(bancomatLimitat(suma[0], listaBancnote))


