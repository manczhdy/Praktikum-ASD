#include <iostream>
using namespace std;

//subprogramnya
void jumlahganjil(int *x, int y){
   //inisialisasi nilai awal
    *x = 0;
   
   //perulangan untuk pengecekan dan operasi bilangannya
    for(int i = 1; i <= y; i++){
        if(i % 2 != 0){
            *x = *x + i;
        }
    }
}

int main(){
    int y, hasil;

   //masukkan y sebagai bil ganjilnya
    cout << "Nilai y : ";cin >> y;

   //pemanggilan subprogram
    jumlahganjil(&hasil, y);
    
    cout << "Hasil jumlah : " << hasil;
    
return 0;
}
