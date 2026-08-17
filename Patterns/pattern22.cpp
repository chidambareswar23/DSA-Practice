#include <iostream>
using namespace std;

int main(){
    int n;
    int p,q;
    int a,b;
    int c;
    cin >> n;

    for(int i=n; i >= 1; i--){
        for(int j=1; j < 2*i; j++){
            cout << i;
        }

        q = i+1;
        for(int x=1; x <= (n-i);x++){
            cout << q;
            q++;
        }
        cout << '\n';
        if(i != 1){

            p = n;
            for(int k=i; k <= n; k++){
                cout << p;
                p--;
            }

        }
    }

    for(int y=n-1; y >= 1; y--){
        

            a = n;
            for(int k=y; k > 1; k--){
                cout << a;
                a--;
            }
            
        for(int z=1; z <= 2*(n-y)+1; z++){
            cout << n-y+1;
        }
        // c = y;
        // for(int r=1; r < y; r++){
            
        //     cout << c;
        //     c++;
        // }


        cout << '\n';
    }

}