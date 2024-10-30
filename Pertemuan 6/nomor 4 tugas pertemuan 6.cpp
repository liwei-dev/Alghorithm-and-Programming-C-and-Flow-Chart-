#include<iostream>
using namespace std;

int main(){
	int grade[500][500];
	float akhir[500];
	float bobot[500];
 
	for(int k = 1; k <= 3; k++){
	bobot[k] = k;
	}
	for(int i = 0; i < 5 ; i++){
	for(int f = 1 ; f <= 3; f++){
	cout << "Siswa ke-" << i+1 << " , nilai ke-" << f << " : ";
   	cin >> grade[i][f];
	   }
	   akhir[i] = (grade[i][1]*bobot[1] + grade[i][2]*bobot[2] + grade[i][3]*bobot[3])/(bobot[1]+bobot[2]+bobot[3]);
	   cout << endl << endl;
	   }
	   for (int i = 0; i < 5 ; i++){
	   for(int f = 1 ; f <= 3; f++){
	   cout << grade[i][f] << " ";
	   }
	   cout << akhir[i];
	   cout << endl;
	   }
 
 return 0;
}
