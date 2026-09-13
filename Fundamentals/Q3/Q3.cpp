// Sum of Digits of a Number
// https://www.geeksforgeeks.org/dsa/program-for-sum-of-the-digits-of-a-given-number/

// TC : O(log n) : SC : O(1)
#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while(n != 0) {
        // Extract the last digit
        int lastDigit = n % 10;
        // Add last digit to sum
        sum += lastDigit;
        // Remove the last digit
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Sum of digits of:"<<n<< " is: "<<sumOfDigits(n)<<endl;
}

/*
Recursive approach

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    
    // Base Case
    if (n == 0)
        return 0;

    // Recursive Case
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    cout << sumOfDigits(12345);
    return 0;
}

5 + f(1234)                     = 5+10 = 15
    4 + f(123)                  = 4+6  = 10
        3 + f(12)               = 3+3  = 6
            2 + f(1)            = 2+1  = 3
                1 + f(0)        = 1+0  = 1
                    0


*/

/*
Using String Conversion


    A number is made up of digits, and when convert it into a string, each digit becomes a character that can be accessed directly by going through each character one by one and converting it back to a digit, 

    Let’s take n = 1234

         Convert number to string → "1234"
         Start with first character '1'
         Convert to digit -> Sum = 1 
         Move to next character '2'
         Convert to digit -> 2, Sum = 1 + 2 = 3 
         Next character '3'
         Convert to digit -> 3, Sum = 3 + 3 = 6 
         Next character '4'
         Convert to digit -> 4, sum = 6 + 4 = 10 
         No more characters left -> stop 
        Sum of digits = 10

Note: This method is especially useful when the number is too large

#include <iostream>
#include <string>
using namespace std;

// Function to calculate sum of digits using string conversion

int sumOfDigits(int n) {
    
    // Convert number to string
    string s = to_string(n);  
    int sum = 0;

    // Loop through each character, convert to digit, and add to sum
    for (char ch : s) {
        sum += ch - '0';
    }
    return sum;
}

int main() {
    int n = 12345;
    cout << sumOfDigits(n) << endl;
    return 0;
}

*/