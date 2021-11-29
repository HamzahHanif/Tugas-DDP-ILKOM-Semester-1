#include <iostream>
using namespace std;

int main (){
	float bb;
	float tb;
	float tb2;
	float bmi;
	
	
	cin>>bb;
	cin>>tb;
	
	tb2=tb*tb;
	bmi=bb/tb2;
	cout<<bmi<<endl;
	
	if(bmi<18.5){
		cout<<"Underweight"<<endl;
	}
	else if(bmi>=18.5&&bmi<=24.9){
		cout<<"Normal weight"<<endl;
	}
	else if(bmi>=25.0&&bmi<=29.9){
		cout<<"Overweight"<<endl;
	}
	else if(bmi>=30.0&&bmi<=34.9){
		cout<<"Obesity class I"<<endl;
	}
	else if(bmi>=35.0&&bmi<=39.9){
		cout<<"Obesity class II"<<endl;
	}
	else if(bmi>40){
		cout<<"Obesity class III"<<endl;
	}
	
	return 0;
}
