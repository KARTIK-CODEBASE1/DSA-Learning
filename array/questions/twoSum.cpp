#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    cout << "Enter target: ";
    cin >> target;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            if(vec[i] + vec[j] == target) {
                cout << "Indices: " << i << " " << j << endl;
                return 0;
            }

        }
    }

    cout << "No solution found.";

    return 0;
}