#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <iostream>
  
using namespace std;
  
int main() {
    int i,j,n;
 

    cin >> n;
 if (n>=1 && n<10){
    for (i=n;i>=1;i--) {
        for (j=1;j<=i;j++) {
            cout << i<<" ";
        }
        cout << endl;
    }
}else{
    cout<<"Bilangan tidak sesuai!"<<endl;
}
    return 0;
}
