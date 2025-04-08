text='hello all'

char_count={}

for char in text:
    if char !='':
        char_count[char]=char_count.get(char,0)+1

        print("character dictionary",char_count)