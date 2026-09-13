# TC : O(2m + 1) = O(m), SC : O(1)
'''
def closest_number(n,m):
    # find the quotient of n divided by m

    closest = 0
    min_difference = float('inf')

    #Check numbers around n
    for i in range(n-abs(m), n+abs(m)+1):
        if i%m == 0:
            difference = abs(n - i)
            if difference<min_difference or \
                (difference == min_difference and abs(i) > abs(closest)):
                closest = i
                min_difference = difference
    return closest

if __name__ == "__main__":
    n = int(input("Enter a number: "))
    m = int(input("Enter a divisor: "))
    print(closest_number(n,m))

'''

# Optimized Solution
# TC : O(1), SC : O(1)

def closestNumber(n, m) :
    q = int(n / m)
    
    # 1st possible closest number
    n1 = m * q
    
    # 2nd possible closest number
    if((n * m) > 0) :
        n2 = (m * (q + 1)) 
    else :
        n2 = (m * (q - 1))
    
    # if true, then n1 is the required closest number
    if (abs(n - n1) < abs(n - n2)) :
        return n1
    
    # else n2 is the required closest number 
    return n2
    
    
if __name__ == "__main__":
  n = 13; m = 4
  print(closestNumber(n, m))