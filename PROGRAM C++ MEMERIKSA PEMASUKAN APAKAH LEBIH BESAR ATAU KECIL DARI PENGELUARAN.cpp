#include<iostream>
using namespace std;
int main(){
int pemasukan ,pengeluaran;

cout<<"PROGRAM UNTUK MENGETAHUI PEMASUKAN DAN PENGELUARAN"<<endl;

cout<<"Masukan Jumlah Pemasukan   = ";
cin>>pemasukan;
cout<<"Masukan Jumlah Pengeluaran = ";
cin>>pengeluaran;

if(pemasukan<pengeluaran)
{
    cout<<"Pemasukan Lebih Kecil Dari Pengeluaran\n";
}

else if(pemasukan>pengeluaran)
{
    cout<<"Pemasukan lebih besar dari pengeluaran\n";

}
else
    cout<<"error";




}
