# Sum of Digits of a Number
# https://www.geeksforgeeks.org/dsa/program-for-sum-of-the-digits-of-a-given-number/

# TC : O(log n) : SC : O(1)
def SumOfDigits(n):
    sum = 0
    while(n != 0):
        sum = sum + (n % 10)
        n = n // 10
    return sum

if __name__ == "__main__":
    n = 12345
    print(SumOfDigits(n))


'''
Recursive approach

def sumOfDigits(n):
    # Base Case
    if n == 0:
        return 0
  
    # Recursive Case
    return n % 10 + sumOfDigits(n // 10)

if __name__ == "__main__":
    print(sumOfDigits(12345))

'''

'''
        Using String Conversion

def sumOfDigits(n):
    
    # Convert number to string
    s = str(n)
    sum = 0

    # Loop through each character, convert 
    # to digit, and add to sum
    for ch in s:
        sum += int(ch)

    return sum

n = 12345
print(sumOfDigits(n))

'''