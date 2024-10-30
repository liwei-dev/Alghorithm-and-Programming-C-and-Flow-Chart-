#include<iostream>

using namespace std;

int rekFib(int n){
	if(n==1 or n==2)
	return 1;
	else
	return rekFib(n-1)+rekFib(n-2);
}

int itFib(int n){
	int fib = 1;
	int fib1 = 1, fib2=1;
	if(n>2){
		for(int i=3; i<=n;i++){
			fib=fib1+fib2;
			fib2=fib1;
			fib1=fib;
		}
	}
	return fib;
	
}

int main(){
	int n;
	cout<<"masukan n : "; cin>>n;
	cout<<n <<" rekursif = "<< rekFib(n)<<endl;
	cout<< n <<" iteratif = "<<itFib(n);
	return 0;
}
