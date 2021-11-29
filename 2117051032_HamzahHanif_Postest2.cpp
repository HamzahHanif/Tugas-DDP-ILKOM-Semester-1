#include <iostream>
using namespace std;

int main (){
	float n;
	float a;
	float b;
	float Sn;
	
	cin>>n;
	cin>>a;
	cin>>b;
	
	Sn=n/2*(2*a+(n-1)*b);
	cout<<"Jumlah bilangan hingga suku ke- "<<n<<" dari barisan Aritmatika ini adalah "<<Sn<<endl;
	
	return 0;
}
