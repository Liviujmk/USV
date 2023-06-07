import functii as f

print('''
C - citire date de intrare de la tastatura 
F - citire date de intrare din fisier
A – afisarea datelor de intrare
R - rezolvare problema
I - info autor
T - termina programul
''')

file = open("in_2.txt", 'r')
out = open("out_2.txt", 'w')
while True:
    opt = input("Introduceti o optiune pentru problema: ").upper()

    match opt:
        case 'C':
            ok = 0
            mat, pctStart = f.citire_tastatura()
            ok = 1
        case 'F':
            mat = f.citire_fisier(file)
            ok = 0
        case 'A':
            print("\tIntroduceti tipul de afisare\n")
            print("\t1. In consola\n")
            print("\t2. In fisier\n")
            af = int(input("\tIntroduceti tipul de afisare: "))
            if af == 1:
                print('\tAfisare date in consola\n')
                if ok==1:
                    f.afisare_date(mat, pctStart)
                elif ok==0: f.afisare_date(mat, file.readline().strip())
            elif af == 2:
                if ok == 1:
                    f.afisare_fisier(out, mat, pctStart)
                elif ok == 0: f.afisare_fisier(out, mat, file.readline().strip())
            else: print("\tTipul de afisare nu exista..")
        case 'R':
            print("Rezolvareeee.....")
        case 'I':
            print("Info autor: Liviu Mitrofan 3111A")
        case 'T':
            print("Closing file...")
            file.close()
            print('Exiting...')
            print('Program closed')
            break
        case _:
            print("Optiune invalida")
