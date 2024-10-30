#include <iostream>
#include <math.h>

using namespace std;

void print(float& x, float& y, float& f){
	for (x=2; x<=8; x+=2){
		for (y=6; y<= 21; y+=3){
			float F = (x*x - y*y) / (x*x + y*y);
			cout << " F = " << F << endl;
		}
	}
}

int main (){
	float x;
	float y;
	float fungsi;
	
	print (x, y, fungsi);
	
	return 0;
	
}
