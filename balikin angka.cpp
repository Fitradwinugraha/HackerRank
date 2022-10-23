#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  long n,m,o= 0;
  cin>>n;
    
  while (n>0){
      m= n%10;
      n= n/10;
      o= (o*10)+m;
  }
  cout<<""<<o<<endl;
  return 0;
}

//fitra dwi nugraha
