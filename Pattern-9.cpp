#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows;
    cout << "Enter the Number of rows - ";
    cin >> rows;

    cout << ""; 
    for( int i = 0; i < rows; i++ ) {
        for( int j = 0; j <= i; j++ ){
            cout << i + 1 << " ";
        }
        cout<<endl;
    }

    return 0;
}

