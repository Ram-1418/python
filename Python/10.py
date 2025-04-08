my_tuple=(10,2,2,2,3,4,5,6,7,8,9)


repeted=set()


for item in my_tuple:
    if my_tuple.count(item)>2:
        repeted.add(item)




print("element repeted item ",repeted)
