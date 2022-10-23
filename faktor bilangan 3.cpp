#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int A;
    cin>> A;
    for(int i=A; i>0; i--){
        if(A%i== 0){
            cout<<i<<endl;
        }
    }

    return 0;
}

//fitra dwi nugraha
//fakktor bilnagan 3
