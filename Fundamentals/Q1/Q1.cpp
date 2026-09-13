//Sum of squares of first n natural numbers
//https://www.geeksforgeeks.org/dsa/sum-of-squares-of-first-n-natural-numbers/

#include<bits/stdc++.h>
using namespace std;

int summation(int n) {
    int sum = 0;
    for (int i=1; i<=n; i++) {
        sum += i*i;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter a number"<<": ";
    cin>>n;
    cout<< summation(n)<<endl;
    return 0;

}


/*
TC: O(1), SC: O(1)
#include <iostream>
using namespace std;


int summation(int n)
{
    return (n * (n + 1) * 
        (2 * n + 1)) / 6;
}

int main()
{
    int n = 10;
    cout << summation(n) << endl;
    return 0;
}
*/