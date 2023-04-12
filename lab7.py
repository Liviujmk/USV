file = open("studenti.txt", "rt")
students = []

for line in file:
    students.append(line.strip())
file.close()


while True:
    options = '''
    1. Incarcare informatii despre studenti de la tastatura
    2. Afisare studenti
    3. Afisare note
    4. Afisarea studenti si notele obtinute
    5. Cautare student dupa nume
    6. Afisare studenti promovati
    7. Info autor
    8. Termina program
    '''
    print(options)
    opt = int(input("Introduceti optiunea: "))
    match opt:
        case 1:
            dnume = {}
            dnote = {}
            for student in students:
                id, nume, note = student.split(",")
                dnume[id] = nume
                dnote[id] = [int(nota) for nota in note.split(" ")]

        case 2:
            print("ID\tNume student")
            for ids in dnume:
                print(f"{ids}\t{dnume[ids]}")
        case 3:
            print("ID\tNote")
            for ids in dnote:
                print(f"{ids}\t{dnote[ids]}")
        case 4:
            print("ID\tNume student\tNote")
            for ids in dnume:
                print(f"{ids}\t{dnume[ids]}\t{dnote[ids]}")
        case 5:
            numeStudent = input("Introduceti numele studentului cautat: ")
            for ids in dnume:
                if dnume[ids] == numeStudent:
                    print("ID\tNume student\tNote")
                    print("--------------------------")
                    print(f"{ids}\t{dnume[ids]}\t{dnote[ids]}")
        case 6:
            print('ID\tNume Student\tMedia\n-------------------------------')
            for ids in dnume:
                media = sum(dnote[ids]) / len(dnote[ids])
                if media >= 5:
                    print(f'{ids}\t{dnume[ids]}\t{media:.2f}')
        case 7:
            print("Autor: Mitrofan Liviu")
        case 8:
            exit()
        case _:
            print("Optiunea aleasa nu exista!")
