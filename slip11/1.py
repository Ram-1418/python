n=int(input("how ,aney times do you want to enter"))

numbers=[]

for i in range(n):
    num=float(input(f"enter number {i+1}:"))
    numbers.append(num)

    average=sum(numbers)/n
    numbers.sort(reverse=True)

    print("numbers is descending order:",numbers)
    print("average of the numbers",average)