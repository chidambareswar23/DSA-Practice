#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;

    char m = 'A' + (n-1);
    char p = m;
    // cout << m;
    for(int i=0; i<n; i++){
        
        m = p - i;

        for(int j=0; j<=i; j++){
            cout << m;
            m++;
        }

        cout << '\n';
    }
}