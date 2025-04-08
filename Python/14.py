x={'key1':1,'key2':2,'key3':3}
y={'key':1,'key2':2}

for key in x:
    if key in y and x[key]==y[key]:
        print(f"{key}:{x[key]} is presnt in both and y")