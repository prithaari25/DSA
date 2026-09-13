#include<bits/stdc++.h>
using namespace std;

void PrintSubsequenceSum(int ind, vector<int>& ds, int currsum, int sum, int arr[], int n) {
    if(ind == n) {
        if(currsum == sum){
            for(auto it: ds) {
                cout<<it<< " ";
            }
            cout<<endl;
        }
        return;
    }

    //PICK
    ds.push_back(arr[ind]);
    currsum += arr[ind];
    PrintSubsequenceSum(ind+1, ds, currsum, sum, arr, n);

    //NOT PICK
    ds.pop_back();
    currsum -= arr[ind];
    PrintSubsequenceSum(ind+1, ds, currsum, sum, arr, n);

    return;
}

int main() {
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    PrintSubsequenceSum(0, ds, 0, sum, arr, n);
    return 0;

}