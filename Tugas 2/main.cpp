//Cinta Berliana Putri
//A11.2022.14268
//4207

#include <iostream>

using namespace std;

//deklarasi
bool isEven (int x);
bool isOdd (int x);
bool isFactor(int x, int y);
int maxN(int a,int b);
int minN(int a, int b);
int maxArray(int a[]);
int minArray(int a[]);
bool isFound(int x, int a[]);
void swapN(int a,int b);


int jumlah;
void arr(int myArray[]);

int main()
{
    //Kamus
    int bil1,bil2,x;

    //Algoritma
    cout << "Masukkan nilai pertama : ";
    cin >> bil1;
    cout << "Masukkan nilai Kedua : ";
    cin >> bil2;
    cout << "===================================================================================" << endl;
    cout << "Bilangan Pertama bernilai = "<< bil1 <<" genap ?\t: " << isEven(bil1) << endl;
    cout << "Bilangan Kedua Bernilai= "<< bil2 <<" genap ?\t: " << isEven(bil2) << endl;
    cout << "Bilangan Pertama Bernilai= "<< bil1 <<" ganjil ?\t: " << isOdd(bil1) << endl;
    cout << "Bilangan Kedua Bernilai= "<< bil2<<" ganjil ?\t: " << isOdd(bil2) << endl;
    cout << "Apakah Bilangan Kedua  = "<< bil2 <<" adalah faktor dari bilangan Pertama = "<< bil1 <<" ?\t: " << isFactor(bil1,bil2) << endl;
    cout << "Apakah bilangan Pertama  = "<< bil1 <<" adalah faktor dari bilangan Kedua = "<< bil2 <<" ?\t: " << isFactor(bil1,bil2) << endl;
    cout << "bilangan yang lebih besar ?, antara bilangan pertama = "<< bil1 <<" dan Bilangan Kedua = "<< bil2 << "\t: "<< maxN(bil1,bil2) <<endl;
    cout << " bilangan yang lebih kecil ?, antara bilangan Pertama = "<< bil1 <<" dan Bilangan Kedua = "<< bil2 << "\t: "<< minN(bil1,bil2) <<endl;
    cout << "======================================================================================"<<endl;

    cout << endl<<endl;
    cout << "masukkan Jumlah array = ";
    cin >> x;
    int a[x];
    for (int i=0; i<x ; i++){
        cout << "Masukkan bilangan index ke-"<<i+1<<"["<<i<<"] : ";
        cin >> a[i];
    }
    jumlah = sizeof(a)/sizeof(int);
    cout << "==============================================================================" << endl;
    cout << "Berapa bilangan terbesar dalam ";arr(a);
    cout << " ?\t: " << maxArray(a) << endl;
    cout << "Berapa bilangan terkecil dalam ";arr(a);
    cout << " ?\t: " << minArray(a) << endl;
    cout << "Apakah bilangan Pertama = "<< bil1 << " ada dalam ";arr(a);
    cout << " ?\t: " << isFound(bil1,a) << endl;
    cout << "Apakah bilangan Kedua ="<< bil2 << " ada dalam ";arr(a);
    cout << " ?\t: " << isFound(bil2,a) << endl;
    swapN(bil1,bil2);
    cout << endl << "=======================================================================================";

    return 0;
}

bool isEven (int x) {
    return x % 2 == 0;
}

bool isOdd (int x){
    return x % 2 == 1;
}

bool isFactor(int x, int y){
    return x % y == 0;
}

int maxN(int a,int b){
    int m=0;
    if(a>b) {
        m=a;
    } else {
        m=b;
    }
    return m;
}

int minN(int a, int b){
    int m;
    if(a<b) {
        m=a;
    } else {
        m=b;
    }
    return m;
}

int maxArray(int a[]){
    int m=0;
    for (int i=0; i<jumlah ; i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}


int minArray(int a[]){
    int m=a[0];
    for (int i=0; i<jumlah ; i++){
        if(a[i]<m){
            m=a[i];
        }
    }
    return m;
}

bool isFound(int x, int a[]){
    bool m = false;
    for (int i=0; i<jumlah ; i++) {
        if (x == a[i]){
            m = true;
        }
    }
    return m;
}

void swapN(int a,int b){
    cout << "Tukar nilai bilangan X = "<< a <<" dan Y = "<< b << "\t\t\t: ";
    int temp = a;
    a = b;
    b = temp;
    cout << "X = " << a << " dan Y = "<< b;
}

void arr(int myArray[]){
    cout <<"Array[" << jumlah << "] = {";
    for (int i=0; i < jumlah; i++){
        cout << myArray[i];
        if (i < jumlah-1){
            cout << ",";
        } else {
            cout << "";
        }
    }
    cout << "}";
}
