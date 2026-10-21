
def min_operations(s):
    n = len(s)

    mn = min(s)
    mx = max(s)
    is_sorted = True

    for i in range(1, n):
        if s[i] < s[i - 1]:
            is_sorted = False

    if is_sorted:
        return 0

    if n == 2:
        return -1

    if s[0] == mn or s[-1] == mx:
        return 1

    for i in range(1, n - 1):
        if s[i] == mn or s[i] == mx:
            return 2

    return 3


s = input("Enter the string: ")
print("Minimum operations:", min_operations(s))
