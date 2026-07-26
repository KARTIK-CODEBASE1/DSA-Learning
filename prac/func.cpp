#include<iostream>
using namespace std;

// int sum(int a, int b){
//     int s = a + b;
//     return s;
// }

// int minOfTwo(int a, int b){
//     if(a<b){
//         return a;
//     } else {
//         return b;
//     }
// }

// void oneToN(int n){
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum += i;
//     }
//     cout << "sum of the series: "<< sum <<endl;
// }

// void facto(int n){
//     int f=1;
//     for(int i=1; i<=n; i++){
//         f *= i;
//     }
//     cout << "The factorial of "<< n << " is : "<< f << endl;
// }

int sumOfDigit(int n){
    int digSum = 0;

    while(n > 0){
        int lastDig = n % 10;
        n /= 10;

        digSum += lastDig;
    } 

    return digSum;
}

int main(){

    cout << "Sum = "<< sumOfDigit(235) << endl;
    // cout << "Sum : "<<sum(10,9) <<endl;

    // cout << "minimum value : " << minOfTwo(1,20) <<endl;



    // oneToN(5);

    // facto(5);

    return 0;
}