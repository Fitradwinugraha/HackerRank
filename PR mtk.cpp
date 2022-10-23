#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c,d1,e1,f1,g4,h4,i4,j5,k5,l5;
    float h1,h2,h3;
    
    char pertama = '('; 
    char kedua = ')';
    char tambah = '+'; 
    char kali = '*'; 
    char kurang = '-';
    
    cin >> pertama >> a >> tambah >> b >> kedua >> kali >> pertama >> c >> kurang >> d1 >> kedua;
    cin >> pertama >> e1 >> tambah >> f1 >> kedua >> kali >> pertama >> g4 >> kurang >> h4 >> kedua;
    cin >> pertama >> i4 >> tambah >> j5 >> kedua >> kali >> pertama >> k5 >> kurang >> l5 >> kedua;
    
    h1 = (a+b)*(c-d1);
    h2 = (e1+f1)*(g4-h4);
    h3 = (i4+j5)*(k5-l5);
        
    cout << h1 << " " << h2<< " " << h3;
        
    return 0;
    
}
