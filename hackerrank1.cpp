#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    int b;
    int x;
    
    cin>>a;
    cin>>b;
    
    if (a<=b)
    {
        for(int a;a<=b;a++)
        {
            if(a<=9 && a>=1){
                if(a==1){
                    cout<<"one"<<endl;
                }
                else if(a==2){
                    cout<<"two"<<endl;
                }
                else if(a==3){
                    cout<<"three"<<endl;
                }
                else if (a==4){
                    cout<<"four"<<endl;
                }
                else if (a==5){
                    cout<<"five"<<endl;
                }
                else if (a==6){
                    cout<<"six"<<endl;
                }
                else if (a==7){
                    cout<<"seven"<<endl;
                }
            }
            
        }
    }
    
    return 0;
}

