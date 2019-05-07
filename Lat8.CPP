#include <iostream.h>
#include <conio.h>

char nama[21], kelas[8], abs[10];
void main ()
{
int data[5];
int i, total, rata, tmp;
clrscr();
cout<<"Aplikasi Nilai Hitung Rata2"<<endl;
cout<<"============================================"<<endl;
cout<<"Masukkan Nama: ";cin>>nama;
cout<<"============================================"<<endl;
cout<<"Masukkan Nilai Ulangan Mahasiswa"<<endl;
total=0;
for(i=0; i<5; i++)
{
cout<<"Masukkan Nilai ke-"<<(i+1)<<" : ";cin>>data[i];
total=total+data[i];
}
cout<<endl;
cout<<"============================================"<<endl;
cout<<"Mahasiswa dengan "<< nama<< " Punya Nilai Sebagai Berikut:\n"<<endl;
rata=total/5;
cout<<"Rata - Rata: "<<rata<<endl;
getch();
}