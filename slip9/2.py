my_dict = {'apple': 3, 'banana': 1, 'cherry': 5}

# Sort by value in ascending order
asc_sorted = dict(sorted(my_dict.items(), key=lambda item: item[1]))

# Sort by value in descending order
desc_sorted = dict(sorted(my_dict.items(), key=lambda item: item[1], reverse=True))

print("Ascending:", asc_sorted)
print("Descending:", desc_sorted)
