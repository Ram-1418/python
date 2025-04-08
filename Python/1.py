def check_in_range(number, start, end):
    if start <= number <= end:
        return True
    else:
        return False

# Example usage:
print(check_in_range(5, 1, 10))  # Output: True
print(check_in_range(15, 1, 10)) # Output: False
