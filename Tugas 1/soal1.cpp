#include <iostream>
using namespace std;

void jumlahganjil(int *x, int y){
    *x = 0;
    for(int i = 1; i <= y; i++){
        if(i % 2 != 0){
            *x = *x + i;
        }
    }
}

int main(){
    int y, hasil;
    
    cout << "Nilai y : ";cin >> y;
    
    jumlahganjil(&hasil, y);
    
    cout << "Hasil jumlah : " << hasil;
    
return 0;
}