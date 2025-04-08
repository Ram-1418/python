my_dict={'a':3,'b':1,'c':4}

asc=dict(sorted(my_dict.items(),key=lambda x:x[1]))
print("assending",asc)

desc=dict(sorted(my_dict.items(),key=lambda x:x[1],reverse=True))
print("descending",desc)