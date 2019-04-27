#include <conio.h>
#include <iostream.h>

main(){
int Op1,Op2,Pilih;
float Hasil;
cout<<"Operand 1: ";
cin>>Op1;
cout<<"Operand 2: ";
cin>>Op2;
cout<<"1. Operator+\n";
cout<<"2. Operator-\n";
cout<<"3. Operator*\n";
cout<<"4. Operator/\n";
cout<<"Pilih Operator: ";
cin>>Pilih;
switch (Pilih) {
case 1: {Hasil=Op1+Op2; break;}
case 2: {Hasil=Op1-Op2; break;}
case 3: {Hasil=Op1*Op2; break;}
case 4: {if (Op2!=0)
cout<<Op1/Op2;
else
cout<<"error";
break;}
}
cout<<"Hasil dari perhitungan tersebut adalah "<<Hasil;
getch();
return 0;
}

