#include<iostream>
using namespace std;

int main(){
	int grade[500][500];
	float nilai[500];
	float bobot[500];
 
	for(int k = 1; k <= 3; k++){
	bobot[k] = k;
	}
	for(int a = 0; a < 5 ; a++){
	for(int i = 1 ; i <= 3; i++){
	cout << "Siswa ke-" << a+1 << " , nilai ke-" << i << " : ";
   	cin >> grade[a][i];
	   }
	   nilai[a] = (grade[a][1]*bobot[1] + grade[a][2]*bobot[2] + grade[a][3]*bobot[3])/(bobot[1]+bobot[2]+bobot[3]);
	   cout << endl << endl;
	   }
	   for (int a = 0; a < 5 ; a++){
	   for(int i = 1 ; i <= 3; i++){
	   cout << grade[a][i] << " ";
	   }
	   cout << nilai[a];
	   cout << endl;
	   }
 
 return 0;
}
