#include<iostream>
#include<vector>

using namespace std;

int main() {

    int input;
    bool found = false;

    cout<<"Enter the value you wnat to find: ";cin>>input;
    vector<int> vec = {3,4,5};
        for(int i = 0; i<vec.size(); i++){
            if(input == vec[i]){
                cout<< "value found at index: "<< i;
                found = true;
                break;
            }   
        }
    
        if(!found){
            cout<< "Value not found!";
        }

    return 0;
}