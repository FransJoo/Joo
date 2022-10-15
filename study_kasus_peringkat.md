```cpp
#include <iostream>
using namespace std;

// Prosedur Predikat
char predikat(int nilai){
    
    if(nilai >=1 && nilai <= 20){
        
        return 'E';
    
    }else if(nilai >= 21 && nilai <= 40){
        
        return 'D';
        
    }else if(nilai >= 41 && nilai <= 60){
         
         return 'C';
         
    }else if(nilai >=61 && nilai <=80){
        
        return 'B';
        
    }else if(nilai >=81 && nilai <=100){
        
        return 'A';
    }
}
//end predikat

// Prosedur Status
string status(int nilai){
    
    if(nilai >= 75){
        
        return "Diatas KKM";

    }else{
        
        return "Dibawah KKM";
    }
}
//end status

int main() {
    
    //tipe data int array
   int angka[] = {80, 90, 75, 85, 70, 95, 65, 40, 35, 77};
   int panjang = sizeof(angka)/sizeof(*angka);
   int sementara;
   // end data int array

    //tipe data string array
   string nama[] = {"Ayyub", "Joo", "Yudha", "Hombing", "Martin", "Fajar", "Farhan", "Rendy", "Yunus", "Joko"};
   string sementara2;
   
   cout << endl;
   // end data string array
   
   // Menampilkan array
   for(int a = 0; a < panjang; a++){
       
       cout << angka[a] << " ";
       
   }
   
   cout << endl;
   // end array
   
   // Mengurutkan nilai(angka) dan nama
   for(int a = 0; a < panjang; a++){
       
       for(int b = 0; b < panjang; b++){
           
           if(angka[a] > angka[b]){
               
               sementara = angka[a];
               angka[a] = angka[b];
               angka[b] = sementara;
               
               sementara2 = nama[a];
               nama[a] = nama[b];
               nama[b] = sementara2;
               
           }
           
       }
       
   }
   
   cout << endl;
   // end Mengurutkan nilai(angka) dan nama
   
   
   // Menampilkan semua hasil
   for(int a = 0; a < panjang; a++){
       
       cout << "Peringkat " << a + 1 << endl;
       cout << "Nama\t\t: " << nama[a] << endl;
       cout << "Nilai\t\t: " << angka[a] << endl;
       cout << "Predikat\t\t: " << predikat(angka[a]) << endl;
       cout << "Status\t\t: " << status(angka[a]) << endl;
       cout << endl;
       
   }
   
}
// end Menampilkan semua hasil
```
