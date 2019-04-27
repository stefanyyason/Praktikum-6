#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char kode;
cout<<"Masukkan Kode Barang[A..C]:";
cin>>kode;
switch(kode)

{
case'A':
case'a':
cout<<"Alat Olahraga";
break;
case'B':
case'b':
cout<<"Alat Elektronik";
break;
case'C':
case'c':
cout<<"Alat Masak";
break;
default:
cout<<"Anda Salah Memasukkan kode";
break;
}
getch();
}