#include <iostream>
using namespace std;

int main() {
    char ch;
    int n = 6;
    cout<<"Enter a character: ";cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"Lower case \n";
    } else if (ch >= 'A' && ch <='Z'){
        cout<<"Upper case \n";
    } else if (ch >= '0' && ch <='9') {
        cout<<"Number \n";
    } else {
        cout <<"Special Character \n";
    }
    cout<<(n >=0 ? "Positive" : "Negative")<< endl;

    return 0;
}


