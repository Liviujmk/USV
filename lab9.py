## problema rucsacului cu Greedy
## 1. sortam obiectele dupa raportul profit/greutate
## 2. alegem obiectele in ordinea sortarii pana cand nu mai incap in rucsac
## 3. daca nu mai incapem in rucsac, alegem o fractiune din ultimul obiect
##    care sa incapa in rucsac
## 4. profitul maxim este suma profiturilor obiectelor alese
#
from operator import *

## lista obiecte: [pret, volum, p/v]
listaObiecte = [[4, 0.3, 5], [7, 3.1, 1.66], [15, 1, 3], [2, 7, 1], [6, 1, 6]]

rucsacFinal = {
    "greutate": 5,
    "obiecte": [],
    'pret': 0
}

def greedy(listaObiecte, rucsac):
    listaObiecte.sort(key=itemgetter(1))
    volumInit: int = 0
    for obj in listaObiecte:
        if obj[1] < rucsac['greutate']:
            if obj[1] > (rucsac['greutate']-volumInit):
                obj[0] = (rucsac['greutate']-volumInit)*obj[2]
                obj[1] = rucsac['greutate']-volumInit
                obj[2] = obj[0]/(rucsac['greutate']-volumInit)
                rucsac['obiecte'].append(obj)
                rucsac['pret'] += round(obj[0], 2)
                break
            rucsac['obiecte'].append(obj)
            rucsac['pret'] += round(obj[0], 2)
            volumInit += obj[1]
    return rucsac

print(greedy(listaObiecte, rucsacFinal))