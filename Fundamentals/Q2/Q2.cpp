//Closest to n and Divisible by m

// https://www.geeksforgeeks.org/dsa/find-number-closest-n-divisible-m/

// TC : O(2m + 1) = O(m), SC : O(1)
/*
#include<bits/stdc++.h>
using namespace std;

int closestNumber(int n, int m) 
{
    int closest = 0;
    int mindifference = INT_MAX;

    for(int i=n -abs(m); i<=n+abs(m); i++) {
        if(i%m == 0) {
            int difference = abs(n-i);
            if(difference < mindifference || (difference == mindifference && abs(i) > abs(closest))){
                mindifference = difference;
                closest = i;
            }
        }
    }
    return closest;
}

int main()
{
    int n, m;
    cout<<"Enter a number"<<": ";
    cin>>n;
    cout<<"Enter a number"<<": ";
    cin>>m;

    cout<<closestNumber(n,m)<<"\n";
    return 0;
}

*/

// Optimized Solution
// TC : O(1), SC : O(1)

#include <bits/stdc++.h>
using namespace std;

int closestNumber(int n, int m) {
    int q = n / m;
    
    // 1st possible closest number
    int n1 = m * q;
    
    // 2nd possible closest number
    int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));
    
    // if true, then n1 is the required closest number
    if (abs(n - n1) < abs(n - n2))
        return n1;
    
    // else n2 is the required closest number    
    return n2;    
}

int main() {
    int n, m;
    cout<<"Enter a number"<<": ";
    cin>>n;
    cout<<"Enter a number"<<": ";
    cin>>m;

    cout<<closestNumber(n,m)<<"\n";
    return 0;
}
