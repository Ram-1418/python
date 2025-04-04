x={'key1':1,'key2':3,'key3':2}
y={'key1':1,'key':2}

for key in x:
    if key in y and x[key]==y[key]:
        print(f"{key}")