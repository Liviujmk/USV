# match case menu

while True:
    options = '''
    1. Citeste n din [0,50] si afiseaza primele n numere pare
    2. Afiseaza inversul unui nr
    3. Citeste un string si afiseaza cate litere are fiecare cuvant
    4. Citeste un vector
    5. Afiseaza vectorul
    6. Afiseaza pozitita unui nr x dat de la tastatura
    7. Afla media aritmetica a nr din vector si apoi elimina nr mai mari decat media
    8. Exit
    '''
    print(options)
    opt = input("Introduceti optiunea: ")
    # opt = opt.upper()
    match opt:
        case '1':
            n = int(input("Introdu un nr din intervalul (0, 50): "))
            while n < 0 or n > 50:
                print("Numarul nu este in intervalul (0, 50)")
                n = int(input("Introdu un nr din intervalul (0, 50): "))

            for i in range(0, n*2 ,2):
                print(i, sep=" ")
        case '2':
            n = input("Introduceti n: ")
            print(n[::-1])
        case '3':
            s = input("Introduceti stringul: ")
            for i in s.split():
                print(f"Cuvantul {i} are {len(i)} litere")
        case '4':
            v = []
            n = int(input("Introduceti numarul de elemente: "))
            for i in range(n):
                v.append(int(input(f"Introduceti elementul {i+1}: ")))
        case '5':
            print(v)
        case '6':
            x = int(input("Introduceti x: "))
            for i in v:
                if i == x:
                    print(f"Numarul {x} se afla pe pozitia {v.index(i)}")
        case '7':
            s = 0
        case '8':
            break
        case _:
            print("Optiune invalida")