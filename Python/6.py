my_ram = (1, 2, 3, 4, 5, 6, 6, 7, 8, 9)

repeated = set()  # use a set to store repeated items

for sham in my_ram:
    if my_ram.count(sham) > 1:
        repeated.add(sham)

print("Repeated items:", repeated)
