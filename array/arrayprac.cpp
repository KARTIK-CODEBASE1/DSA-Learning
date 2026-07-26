#include<iostream>
using namespace std;

void sumNproduct(int arr[], int sz){
    int sum = 0 , product = 1;
    for(int i = 0;i<sz;i++){
        sum +=arr[i];
        product *=arr[i];
    }
    cout<<"The sum and product are:"<<endl;
    cout<<"sum: "<<sum<<endl;
    cout<<"product: "<<product;
}

int main(){
    int sz = 5;
    int arr[sz] = {3,4,5,6,7};
    sumNproduct(arr,sz);
    return 0;
}