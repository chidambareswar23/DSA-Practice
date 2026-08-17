#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        int x = i + 2*(n-i);
        for(int j=1; j <= x; j++){
            if(j <= i){
                cout << j;
            }
            else{
                cout << " ";
            }
        }
        for(int k=i; k>=1; k--){
            cout << k;
        }
        cout << "\n";
    }

}