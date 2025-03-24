def is_in_range(num, start, end):
    return start <= num <= end  # Returns True if num is within the range

# Function calls (should be outside the function)
print(is_in_range(15, 10, 20))  # ✅ True
print(is_in_range(5, 10, 20))   # ✅ False
