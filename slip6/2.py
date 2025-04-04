from itertools import product

data={'1':['a','b'],'2':['c','d']}

combination = product(*data.values())
for com in combination:
    print(''.join(com))