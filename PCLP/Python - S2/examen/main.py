import functii as f
fileInt = open('input.txt', 'r')

print('''
C - citire date de intrare de la tastatura
F - citire date de intrare din fisier
A – afisarea datelor de intrare
R - rezolvare problema
I - info autor
T - termina programul
''')

while True:
    opt = input('Dati o optiune: ').upper()
    if (opt == 'C'):
        print('Citire de la tastatura\n')
        sum, bancomat = f.citireTastatura()
    elif (opt == 'F'):
        sum, bancomat = f.citireFisier(fileInt)
        if not(sum and bancomat):
            print('S-au epuizat datele din fisier \n')
        else: print('S-au citit datele din fisier \n')
    elif (opt == 'A'):
        if not (sum and bancomat): print('S-au epuizat datele din fisier \n')
        else:
            tipA = input('\tDati tipul de afisare: C/F').upper()
            if tipA == 'C': f.afisareConsola(bancomat, sum)
            else:
                f.afisareFisier(bancomat, sum)
    elif (opt == 'R'):
        print('Rezolvare')
    elif (opt == 'I'):
        print('Info Autor: Liviu Mitrofan - 3111A')
    elif (opt == 'T'):
        print('Programul se inchide')
        exit()
    else: print("Optiune invalida")

