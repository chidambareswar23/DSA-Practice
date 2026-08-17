#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=(n-i); j++){
            cout << " ";
        }

        char m = 'A';

        for(int k=1; k<=i; k++){
            cout << m;
            m++;
        }

        m = m-2;
        for(int l=i; l>1; l--){
            cout << m;
            m--;
        }
        cout << "\n";
    }
}