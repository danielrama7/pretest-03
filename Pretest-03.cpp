/*
Nama Program        : Pretest-03
Nama                : Daniel Rama H.
NPM                 :140810180045
Tanggal buat        : 12 Maret 2019
Deskripsi program   :
*/

include<iostream>
using namespace std;

struct r_mhs{
char npm[14];
char nama[40]
float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int&n)
{
   cout<<"Masukkan banyak data : ";cin>>n;
}
void inputMhs(larikMhs& mhs, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"NPM mahasiswa ke-"<<i<<" : ";cin>>mhs[i].npm;
        cout<<"Nama mahasiswa ke-"<<i<<" : ";cin>>mhs[i].nama;
        cout<<"IPK mahasiswa ke-"<<i<<" : ";cin>>mhs[i].ipk;
    }
}
void cetakMhs(larikMhs mhs, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Hasil sorting NPM"<<endl;
        cout<<"NPM mahasiswa ke-"<<i<<" : "<<mhs[i].npm;
        cout<<"Nama mahasiswa ke-"<<i<<" : "<<mhs[i].nama;
        cout<<"IPK mahasiswa ke-"<<i<<" : "<<mhs[i].ipk;
    }
}
void sortNPM(larikMhs& mhs, int n)
{
    for (int i=0; i>n; i--){
        for (int j=0;j<i;j++){
        if (mhs[j].npm < mhs[j+1].npm){
        swap(mhs[j].npm, mhs[j+1].npm);
   }
  }
 }
}
int main(){
banyakData(int&n)
inputMhs(mhs,n)
sortNPM( mhs,n)
cetakMhs(mhs,n)
}
