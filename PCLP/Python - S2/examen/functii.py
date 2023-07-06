bancnote =['1 leu', '5 lei', '10 lei', '50 lei', '100 lei', '500 lei']
def citireTastatura():
    sum = int(input("Introduceti suma dorita: "))
    bancomat = {}
    for b in bancnote:
        nrB = int(input(b+'= '))
        bancomat[b] = nrB
    return sum, bancomat

def afisareConsola(bancomat, sum):
    print('\tBancomatul dispune de urmatoarele bancnote:')
    for b in bancomat:
        print('\t' + str(bancomat[b]) + ' x ' + b)
    print('\tSe doreste extragerea sumei de ' + str(sum) + ' lei \n')


def citireFisier(file):
    sum = file.readline().strip()
    bancomat = {}
    for i in range(6):
        line = file.readline().strip().split()
        if not line: return 0, 0
        bancomat[line[0]] = line[1]
    return sum, bancomat

def afisareFisier(bancomat, sum):
    file = open('out.txt', 'w')
    file.write('Bancomatul dispune de urmatoarele bancnote:\n')
    for b in bancomat:
        file.write(str(bancomat[b]) + ' x ' + b+'\n')
    file.write('Se doreste extragerea sumei de ' + str(sum) + ' lei \n')
    file.close()
    print('Date de intrare s-au afisat in fisier\n')