def get_forth_element(tup):
    return (tup[3],tup[-4] if len(tup) >=4 else "tuplle has less than 4 element")

tup=(10,20,30)
print(get_forth_element(tup))