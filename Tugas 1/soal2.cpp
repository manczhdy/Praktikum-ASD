#include <iostream>
using namespace std;

//subprogramnya
void Opmat(int *x, int y, int *z){
   //deklarasi nilai awal
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

   //memasukkan batasan
    cout << "Masukkan jumlah y : ";cin >> y;

   //pemanggilan ssubprogram
    Opmat(&x, y, &z);

   //menunjukkan hasilnya
    cout << "Hasil dari *x : " << x << "\n";
    cout << "Hasil dari *z : " << z;
}
