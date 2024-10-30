#include <bits/stdc++.h>
using namespace std;

int *bil_acak (int num)
{
	int *ar;
	if (num <= 0){
		return NULL;
	}
	
	ar = new int;
	srand(time(NULL));
	for (int c=0; c<num; c++){
		ar[c] = rand();
	}
	return ar;
}

int main (){
	int *bil;
	int num = 5;
	
	bil = bil_acak(num);
	for (int c=0; c<num; c++){
		cout << bil[c] << endl;
	}
	delete [] bil;
	
	return 0;
}
