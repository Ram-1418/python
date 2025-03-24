tup=(1,2,3,4,2,1,6,3,1,7,8,5,4,7,5)
repated=set(x for x in tup if tup.count(x)>1)
print(repated)