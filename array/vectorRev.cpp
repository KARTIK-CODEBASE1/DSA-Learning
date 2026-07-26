#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec = {3,5,6};
    vec.push_back(60);
    vec.push_back(30);
    vec.pop_back();
    cout<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;

    for(int i : vec){
        cout<<i<<endl;
    }
    return 0;

}