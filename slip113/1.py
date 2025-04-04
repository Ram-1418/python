def fibonacci_series(n):
    a,b=0,1
    print("fibonacci series")
    for _ in range(n):
        print(a,end='')
        a,b=b,a+b

        terms=int(input("enter number of terms"))

        fibonacci_series(terms)
