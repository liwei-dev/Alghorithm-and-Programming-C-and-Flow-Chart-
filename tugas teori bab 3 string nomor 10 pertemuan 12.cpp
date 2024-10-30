#include <bits/stdc++.h>
using namespace std;

int polindrome_iteratif (string kata){
    int x, i;
    x = kata.length();
    for(i = 0; i < x; i++){
        if(kata[i] != kata[x-i-1]){
              cout << "Kata " << kata << " bukanlah kata polindrome " << endl;
              return 0;
        }
    }
    cout << "Kata " << kata << " merupakan kata polindrome ";
    return true;
}

int polindrom_rekursif(char str[],int s, int e)
{
if (s == e)
    return true;
if (str[s] != str[e])
    return false;
if (s < e + 1)
    return polindrom_rekursif (str, s + 1, e - 1);
    return true;
}
int polindrom(char str[])
{
    int n = strlen(str);
     if (n == 0)
        return true;

    return polindrom_rekursif(str, 0, n - 1);
}

int main(){
    string kata;
 
    cout << "Program Untuk Menentukan Kata Polindrome" << endl << endl;
    cout << "Input Kata : ";
    cin >> kata;

    cout << polindrome_iteratif (kata);

    char string1[20];
     cout << "Masukkan kata: "; 
    cin >> string1;

    if (polindrom(string1))
    cout << "Kata " << string1 << " merupakan kata polindrom";
    else
    cout << "Kata l" << string1 <<  " bukan kata polindrom";

return 0;
}
