#include <bits/stdc++.h>
using namespace std;

int f(int n){
	if (n <= 0)
		return 0;
	else
		return f(n - 1) + 2;
}

int main (){
	int x;
	cout << "Input: ";
	cin >> x;
	cout << "Output: " << f(x);
}


