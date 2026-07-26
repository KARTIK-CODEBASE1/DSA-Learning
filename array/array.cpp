#include <iostream>
using namespace std;

// void reverseArray(int arr[], int sz){
//     int start = 0, end = sz-1;

//     while(start < end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

int main()
{
    int sz = 5;
    int arr[sz] = {4, 1, 2, 1, 2};
    int c = 0;

    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
            }
        }

        if(c == 1){
            cout<<arr[i];
        }
    }

    return 0;
}

// int linearSearch(int arr[], int sz, int target)
// {
//     for (int i = 0; i < sz; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int arr[] = {4, 2, 7, 8, 5, 1};
// int sz = 6;
// int target = 80;

// cout<<linearSearch(arr, sz, target);

// int size = 5;
// int marks[size];

// int small = INT_MAX;
// int large = INT_MIN;

// int smallIndex = 0;
// int largeIndex = 0;

// for(int i=0;i<size;i++){
//     cin>>marks[i];
// }
// for(int i=0;i<size;i++){
//     if(marks[i] < small){
//         small = marks[i];
//         smallIndex = i;
//     }
//     if(marks[i] > large){
//         large = marks[i];
//         largeIndex = i;
//     }

// }
// cout<<"The smallest number is : "<<small<<endl;
// cout<<"The small index : "<<smallIndex<<endl;

// cout<<"The largest number is : "<<large<<endl;
// cout<<"The large index : "<<largeIndex<<endl;