#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout << "    Test Continue/Break" << endl;
    cout << "n: ";
    cin >> n;
    
    //break
    cout << "Contoh Break" << endl;
    for (int i=0; i<10; i++){
        if (i==n){
            break;
        }
        cout << i+1 << endl;
    }
    
    cout << endl;
    
    //continue
    cout << "Contoh Continue" << endl;
    for (int i=0; i<10; i++){
        if (i==n){
            continue;
        }
        cout << i+1 << endl;
    }
    return 0;
}
