#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
        
        if (n >= 1 && x <= 100){
            if (n == x){
                cout << n << " == " << x << endl;            
        }
            if (n != x){
            cout << n << " != " << x << endl;
        }
            if(n < x){
            cout << n << " < " << x << endl;    
        }
            if(n <= x){
            cout << n << " <= " << x <<endl;    
        }
            if (n > x){
                cout << n << " > " << x << endl;    
        }
            if (n >= x){
                cout << n << " >= " << x << endl;    
            }
}
        else {
            cout << "INPUTAN SALAH";
        }
    
    return 0;
}

