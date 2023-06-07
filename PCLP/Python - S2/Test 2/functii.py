def citire_tastatura():
    print('Citire tastatura\n')
    mat = []
    n = int(input("Dati ordinul matricii (N): "))
    for i in range(n):
        linie = input(f"Dati elementele de pe linia {i}: ")
        mat.append([linie])
    pctStart = input("Dati punctul de start: ")
    return mat, pctStart

def citire_fisier(file):
    print('Citire fisier...\n')
    print('S-a citit fisierul!\n')
    mat = []
    n = file.readline().strip()
    for i in range(int(n)):
        mat.append([file.readline().strip()])
    return mat


def afisare_date(mat, pctStart):
    print("\tMatricea cotelor este:")
    for linie in mat:
        print(f'\t{linie[0]}')
    if not pctStart: print("\tTestele s-au epuizat... :((\n")
    else: print(f"\tMingea cade din punctul de coordonate ({pctStart})\n")

def afisare_fisier(file, mat, pctStart):
        file.write("Matricea cotelor este:\n")
        for linie in mat:
            file.write(f'{linie[0]}\n')
        if not pctStart:
            file.write("Testele s-au epuizat... :((\n")
        else:
            file.write(f"Mingea cade din punctul de coordonate ({pctStart})\n")
