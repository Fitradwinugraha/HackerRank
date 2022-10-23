#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    float n;
    cin >> n;
    
    cout << n << " plus " << n << " is " << n + n << endl;
    cout << "Minus one is " << n + n-1 << endl;
    cout << "Multiple three is " << (n + n-1) * 3 << endl;
    cout << "divide two is " << ( n + n-1) * 3 / 2;
    
    return 0;
}
