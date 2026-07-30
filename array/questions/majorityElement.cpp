#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements: ";cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements:";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int freq = 0;
    int ans = 0;

    for(int i=0;i<n;i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        } else {
            freq--;
        }
    }
    cout<<"The majority element is :"<<ans;

    return 0;
}