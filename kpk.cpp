#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //if else if   
    int x, y;
    cin >> x>> y;
    
    if(x<0 || y<0 || x>y || x==y || x>=1000){
        cout<<"Input Salah";    
    }
    
    else{
        for (int a = x; a <= y; a++){
            if (a % 5 == 0 && a % 3 == 0){
                if (a == 0){
                    cout<<"0 ";
                }
                else {
                    cout<<"Lima Belas ";    
                }
            }
            else if(a % 2 == 0 && a % 9 == 0){
                cout<<"Delapan Belas ";
            }
            else {
                cout<<a<<" ";
                
            }
        }
    }
    return 0;
}
//fitra dwi nugraha
