#include <iostream>
using namespace std;

void sumNproduct(int arr[], int sz)
{
    int big = INT_MIN, small = INT_MAX;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > big)
        {
            big = arr[i];
        }

        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    cout << "The max no: " << big << endl;
    cout << "The min no: " << small;
    
}

int main()
{
    int sz = 5;
    int arr[sz] = {3, 4, 5, 6, 7};
    sumNproduct(arr, sz);
    return 0;
}