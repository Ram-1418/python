def check_in_range(number, start, end):
    if start <= number <= end:
        print(f"{number} is in the range [{start}, {end}]")
    else:
        print(f"{number} is not in the range [{start}, {end}]")

# Function call should be outside the function
check_in_range(5, 1, 10)
