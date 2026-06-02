#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i < n; i++){
         cout << '\n';
        for(int j=1; j <= n-i; j++){
            cout << "*";
        }

        for(int k=n; k > n-i; k--){
            cout << ' ';
        }

        for(int l=n; l > n-i; l--){
            cout << ' ';
        }

        for(int j=1; j <= n-i; j++){
            cout << "*";
        }

    }

    for(int i=1; i <= n; i++){
        cout << '\n';
        for(int j=1; j <=i; j++){
            cout << "*";
        }

        for(int k=0; k < n-i; k++){
            cout << ' ';
        }

        for(int l=0; l < n-i; l++){
            cout << ' ';
        }

        for(int j=1; j <= i; j++){
            cout << "*";
        }

        
    }
}