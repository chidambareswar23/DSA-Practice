#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    for(int y=1; y <= n-1; y++){
        

            int a = n;
            for(int k=1; k <= n-y-1; k++){
                cout << a;
                a--;
            }
            
        for(int z=1; z <= 2*y+1; z++){
            cout << y+1;
        }
        // c = n-2;
         for(int r=1; r <= n-y-1; r++){
            
             cout << r;
            // c++;
         }


        cout << '\n';
    }

}