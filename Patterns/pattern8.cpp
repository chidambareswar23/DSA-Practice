#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<2*i; j++){
            cout << "*";
        }
        cout << "\n";
        for(int k=n; k>=i; k--){
            cout << " ";
        }
    }
}