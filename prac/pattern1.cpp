#include <iostream>
using namespace std;

int main()
{

    /* int n = 4;
     for(int i = 0; i<n; i++){
         char ch = 'A';
         for(int j = 0 ; j<n; j++){
             cout << ch << " ";
             ch = ch + 1;
         }
         cout << endl;
     }

    Output:- A B C D
             A B C D
             A B C D
             A B C D
    */

    /* int n = 3, k = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << k << " ";
                k++;
            }
            cout << endl;
        }

        Output:- 1 2 3
                 4 5 6
                 7 8 9
    */

    /*
    int n = 3;
    char k = 'A';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << k << " ";
                k++;
            }
            cout << endl;
        }

        Output:-
                A B C
                D E F
                G H I
    */

    /*
    int n=4;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    Output:-
            *
            * *
            * * *
            * * * *
    */

    /*
    int n=4;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }

    Output:-
            1
            2 2
            3 3 3
            4 4 4 4
    */

    /*
    int n = 5;
    char k = 'A';
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<< char(k + i) <<" ";
        }
        cout<<endl;
    }

    Output:-
            A
            B B
            C C C
            D D D D
            E E E E E
    */

    /*
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<j + 1<<" ";
        }
        cout<<endl;
    }

    Output:-
            1
            1 2
            1 2 3
            1 2 3 4
    */

    /*

    int n = 4;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j>0; j-- ){
            cout<< j << " ";
        }
        cout<< endl;
    }

    Output:- 1
             2 1
             3 2 1
             4 3 2 1

    */

    /*
    int n = 4 , k=1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

    Output:-
            1
            2 3
            4 5 6
            7 8 9 10
    */

    /*
    int n = 4;
    char  k='A';
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
        Output:-
                A
                B C
                D E F
                G H I J
    */

    /*
    int n = 4;
    for(int i = 0; i<n; i++){
        for(int j = i; j>=0; j-- ){
            cout<<char('A' + j)<< " ";
        }
        cout<< endl;
    }
         Output:- A
                  B A
                  C B A
                  D C B A
     */

    /*
    int n = 4 ;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<< " " ;
        }
        for(int k=0;k<n-i;k++){
            cout<<(i+1);
        }
        cout << endl;
    }

    Output:-
            1111
             222
              33
               4
    */

    /*

    */

    /*
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<< " ";
        }
        for(int k=0; k<n-i; k++){
            cout << char ('A' + i);
        }
        cout<< endl;
    }
        Output:-
                AAAA
                 BBB
                  CC
                   D

    */

    /*
    int n = 4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<< " ";
        }
        for(int k=0; k<i; k++){
            cout<< k+1;
        }
        for(int f=i+1; f>0; f--){
            cout << f;
        }
        cout<<endl;
    }

    Output:-
            1
           121
          12321
         1234321
    */
    return 0;
}