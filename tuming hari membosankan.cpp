#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int a;
   int j;
   int m;
   int d;
    int x; 
   
    cin>>a;
  if (a>=1 && a<=100000){
    
   
   j=a/3600;
   x=a-((60*60)*j)
   m=x/60;
   d=x-(60*m);

   cout<<j<<" jam "<<m<<" menit "<<d<<" detik ";
}
   else{
   cout<<"";
   }
   
  
}
