#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t;
   int b;
   int u;
   
  if (t>1&&t<100&&u>1&&u<1000&&b>1&b<1000){
   cin>>t>>b>>u;
   
   if(t>170 && b>55 && u>15){
       cout<<"Lolos"<<endl;
   }
   else{
       cout<<"Tidak Lolos"<<endl;
   }
  }
       return 0;    
}
