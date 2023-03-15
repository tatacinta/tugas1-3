#include <iostream>

using namespace std;

//fungsi tambah
void tambah (int x,int y){
    cout<< x+y;
}
//prosedur tambah
int tambah1 (int x,int y){
    return x+y;
}


//fungsi kurang
void kurang (int x,int y){
    cout<< x-y;
}
//prosedur tkurang
int kurang1 (int x,int y){
    return x-y;
}


//fungsi kali
void kali (int x,int y){
    cout<< x*y;
}
//prosedur tambah
int kali1 (int x,int y){
    return x*y;
}

//fungsi jmlh array
void jmlarray( ){
    int h;
    int a;
    cout<<"------------------------------"<<endl;
    cout<<"--jumlah array dan rata rata-- "<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"masukan jumlah nilai : ";cin>>a;

    int n [a];
    for( int i = 0; i < a ; i++){
       cout<<"masukan nilai ke"<<i+1<<" : " ; cin >> n[i];
    }
    float total = 0;
    for(int i = 0; i < a; i++){
        total = total+n[i];
    }
    float r = total / a ;
    cout<<"hasil jumlah     : "<<total<<endl;
    cout<<"hasil rata rata  : "<<r;
    cout<<"------------------------------"<<endl;
}




int main()
{
    int a,b;
    //output untuk fungsi & prosedur pertambahan
    cout << "masukan nilai 1: " ;cin>>a;
    cout << "masukan nilai 2: " ;cin>>b;
    cout<<"------------------------------"<<endl;
    cout<<"---          hasil        ----"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"hasil (fungsi tambah ) : ";
    tambah(a,b);
    cout<<endl;
    cout<<"hasil (prosedur tambah) : "<<tambah1(a,b);
    cout<<endl;
    cout<<"------------------------------"<<endl;

    //output untuk fungsi & prosedur pengurangan
    cout<<"hasil (fungsi kurang) : ";
    kurang(a,b);
    cout<<endl;
    cout<<"hasil (prosedur kurang) : "<<kurang1(a,b);
    cout<<endl;

    cout<<"------------------------------"<<endl;

    //output untuk fungsi & prosedur perkalian
    cout<<"hasil (fungsi kali) : ";
    kali(a,b);
    cout<<endl;
    cout<<"hasil (prosedur kali) : "<<kali1(a,b);
    cout<<endl;

    cout<<"------------------------------"<<endl;

    jmlarray();

    return 0;
}
