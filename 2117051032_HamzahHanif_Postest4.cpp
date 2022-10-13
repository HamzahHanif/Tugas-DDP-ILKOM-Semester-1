#include <iostream>
using namespace std;

int main() {
	int i;
	int n;
	int x;
	int nilai3;
	int nilai7;
	int nilai37;
	
	nilai7=0;
	nilai37=0;
	nilai3=0;
	
	int arr3[1000];
	int arr7[1000];
	int arr37[1000];
	

	cin>>i;
	cin>>n;
	
	for(int x=i; x<=n;x++){
		if(x%3==0&&x%7==0){
			arr37[nilai37]=x;
			nilai37++;		
		}
		else if(x%7==0){
			arr7[nilai7]=x;	
			nilai7++;
		}
		else if(x%3==0){
			arr3[nilai3]=x;
			nilai3++;
		}	
	}
	
	
	cout<<"Bagi tujuh dan tiga: "<<endl;
	
	for(int x=0;x<nilai37;x++){
		cout<<arr37[x]<<" ";
	}
	cout<<endl;
	
	
	cout<<"Bagi tiga: "<<endl;
	
	for(int x=0;x<nilai3;x++){
		cout<<arr3[x]<<" ";
	}
	cout<<endl;
	
	
	cout<<"Bagi tujuh: "<<endl;
	
	for(int x=0;x<nilai7;x++){
		cout<<arr7[x]<<" ";
	}
	cout<<endl;
	
	return 0;
}
