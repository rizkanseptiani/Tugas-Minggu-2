/*Rizka Nurul Septiani Hakim 20051397026 2020B */
/*Tugas 3 Menghitung Segitiga Siku-Siku */

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main()
{
char ket [30], yt;
int alas, kode, a, d, e;
float f, g, c;
system ("color FC");


Pertama : 
system ("cls");
	cout << "MENU SEGITIGA SIKU-SIKU : "<< endl;
	cout<<"---------------------------------" << endl;
	cout << "1. Hitung panjang sisi miring" << endl;
	cout << "2. Hitung luas" << endl;
	cout << "3. Hitung keliling" << endl;
	cout << "4. Keluar program" << endl;
	cout << "" << endl;
	cout <<"---------------------------------" << endl;
	cout << "Pilih [1/2/3/4] : ";
kode=getche();
switch (kode)
{
case '1' : {
cout<<"\n- Hitung panjang sisi miring" << endl;
cout<<"Masukkan sisi 1: "; cin >> e;
cout<<"Masukkan sisi 2: "; cin >> d;
c=sqrt(pow(e,2)+pow(d,2));
cout<<"Hasilnya = " << c;
cout <<"\nBalik ke menu? (Y/T)? "; cin >> yt;
if(yt=='Y'||yt=='y') goto Pertama;   if(yt=='T'||yt=='t') goto Akhir1;
cout << endl << "===================================" << endl;

Akhir1 :
cout << endl << "===================================" << endl;
cout << "Terima Kasih" << endl;
break;
}
case '2' : {
cout << "\n- Hitung luas" << endl;
cout << "Alas: "; cin >> d;
cout << "Tinggi: "; cin >> e;
f=(d*e)/2;
cout << "Luas Segitiga Siku-siku : " << f;
cout << "\nBalik ke menu? (Y/T)? "; cin >> yt;
if(yt=='Y'||yt=='y') goto Pertama;   if(yt=='T'||yt=='t') goto Akhir2;
cout << endl << "===================================" << endl;

Akhir2 :
cout << endl << "===================================" << endl;
cout << "Terima Kasih" << endl;
break;
}
case '3' : {
cout << "\n-Hitung keliling" << endl;
cout << "A: "; cin >> d;
cout << "B: "; cin >> e;
cout << "C: "; cin >> a;
g = d+e+a;
cout << "Keliling Segitiga Siku-Siku: " << g;
cout <<"\nBalik ke menu? (Y/T)? "; cin >> yt;
if(yt=='Y'||yt=='y') goto Pertama;   if(yt=='T'||yt=='t') goto Akhir3;
cout <<endl<<"===================================" << endl;

Akhir3 :
cout <<endl<<"===================================" << endl;
cout <<"Terima Kasih"<<endl;
break;
}
case '4' : {
	cout << "\n Program Berhenti" << endl;
	exit(0);
break;
}
getch();
return 0;
}
}
