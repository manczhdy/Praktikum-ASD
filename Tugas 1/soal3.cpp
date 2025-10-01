#include <iostream>
using namespace std;

//subprogramnya
void tukar(int *ptr, int n){
    for(int i = 0; i < n/2; i++){
        int temp = *(ptr + i); //inisialisasi temp sebagai wadah penukaran
        *(ptr + i) = *(ptr + (n - 1 - i));
        *(ptr + (n - 1 - i)) = temp;
    }
}

int main(){
    int n;
    
    cout << "Masukkan jumlah n : "; cin >> n; //user memasukkan jumlah n / array
    
    int *ptr = new int[n]; //array dinamis dengan pointer
    
    cout << "Masukkan elemen arrayy : "; //memasukkan elemen / array pointer
    for(int i = 0; i < n; i++){
        cin >> *(ptr + i);
    }
    
    cout << "Array sebelum dibalik : "; //menampilkan sebelum
    for(int i = 0; i < n; i++){
        cout << *(ptr + i) << " ";
    }
    
    cout << "\n";
    
    tukar(ptr, n); //pemanggialn
    
    cout << "array setelah dibalik : ";  //kalo yang ini sesudah
    for(int i = 0; i < n; i++){
        cout << *(ptr + i) << " ";
    }
    cout << "\n";
    
return 0;
}