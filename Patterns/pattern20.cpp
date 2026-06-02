#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1; i <= n; i++){
        for(int j=1; j <= i; j++){
            cout << "*";
        }

        for(int k=1; k <= 2*(n-i); k++){
            cout << ' ';
        }

        for(int j=1; j <= i; j++){
            cout << "*";
        }
        
        cout << '\n';
    }

    for(int p=n-1; p >= 1; p--){
        for(int q=1; q <= p; q++){
            cout << "*";
        }

        for(int r=1; r <= 2*(n-p); r++){
            cout << ' ';
        }

        for(int s=1; s <= p; s++){
            cout << "*";
        }

        cout << '\n';
    }

}