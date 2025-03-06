#include <iostream>
using namespace std;
int main () {
	//initializing variables
	int N, c=1;
	float num, sum=0, avg=0 ;
	//the count of numbers required by the user
	cout<<"Enter the value of N :";
	cin>>N ;
	//Checking number using while condition
	while(c<=N){
		//input values for the count of numbers required by the user
		cout<<"Enter the number "<<c<<" :" ;
		cin>>num ;//input number
		sum= sum+num ;//calculate  the sum by adding the numbers one by one
		c= c+1 ;
	}
	avg= sum/N ;//calculate the average
	cout<<"Average is "<<avg<<endl ;//display the average	
return 0;
}

