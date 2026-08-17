#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=i; j <n; j++){
            cout << " ";
        }
        for(int k=1; k<2*i; k++){

            cout << "*";
        }
        cout << "\n";
    }
}