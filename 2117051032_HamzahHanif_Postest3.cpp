#include <iostream>
using namespace std;

int main (){
	int a;
	float r;
	float t;
	float k;
	float v;
	double p;
		
	p=22/7.0;
		
	cin>>a;
	
	if(a==1){
	cout<<"Masukan Jari jari tabung = ";
	cin>>r;
	
	k=2*p*r;
	cout<<"Hasil dari keliling alas tabung adalah "<<k<<endl;
 	}
 	else if(a==2){

	cout<<"Masukan Jari jari tabung = ";
	cin>>r;
	
	cout<<"Masukan Tinggi tabung = ";
	cin>>t;
	
	v=p*(r*r)*t;
	cout<<"Hasil dari volume tabung adalah = "<<v<<endl;
	}
	else{
	cout<<"Syntax Error";
	}
	return 0;
	
}
	
	

