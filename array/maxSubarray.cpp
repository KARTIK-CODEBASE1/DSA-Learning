#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n = 6;
    int arr[n] = {1,-5,-2,3,4,5};

    int maxSum = INT_MIN;
    for(int st=0; st<n; st++){
        int currentSum = 0;
        for(int end=st; end<n; end++){
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
         }
    }

    cout<<"max subarray sum = "<< maxSum << endl;

    return 0;
}