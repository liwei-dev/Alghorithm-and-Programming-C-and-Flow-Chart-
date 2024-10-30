#include <iostream>
using namespace std;

int main (){
    int x;
    int i;
    int z = 0;

    cout << "Program untuk menentukan suatu bilangan prima atau bukan" << endl << endl;
    cout << "Masukkan suatu bilangan : ";
    cin >> x;
    cout << endl;

    for (i = 1; i <= x; i++){ 
        if (x % i == 0){ 
        z++;
        } 
    }
        if (z == 2){ 
            cout << x << " merupakan bilangan prima"; 
        }
        else {
            cout << x << " bukan bilangan prima"; 
        }
    return 0;
}
