#include <iostream>
using namespace std;

void Opmat(int *x, int y, int *z){
    *x = 0;
    *z = 1;
    
    for(int i = 1; i <= y; i++){
        //perkalian untuk nili kuadrat
        *x = *x + (i * i);
        //perkalian utk bil ganjil
        *z = *z * (2 * i - 1);
    }
}

int main(){
    int x = 0, z = 1, y;
    
    cout << "Masukkan jumlah y : ";cin >> y;
    
    Opmat(&x, y, &z);
    
    cout << "Hasil dari *x : " << x << "\n";
    cout << "Hasil dari *z : " << z;
}