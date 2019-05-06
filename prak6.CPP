#include <iostream.h>
#include <conio.h>
#include <string.h>

int main()
{
	char kodeproduk[5];
	char *buatan;
	char *processor;

	cout<<"masukkan kode produk: ";cin>>kodeproduk;
	switch(kodeproduk[0])
{
	case 'a':
	buatan="amerika";
	break;
	case 'j':
	buatan="jepang";
	break;
	case 'k':
	buatan="korea";
	break;
	case 'c':
	buatan="china";
	break;
	case 'g':
	buatan="german";
	break;
	case 't':
	buatan="taiwan";
	break;
	default:
	buatan="kode tidak di kenal";
	break;
}

	if (kodeproduk[1]=='3')
	{processor="intel 386mhz";}
	else if (kodeproduk[1]=='4')
	{processor="intel 486mhz";}
	else if (kodeproduk[1]=='5')
	{processor="intel pentium";}
	else
	{processor="kode tidak dikenal";}

cout<<"buatan: "<<buatan<<endl;
cout<<"processor: "<<processor<<endl;
cout<<"kapasitas harddisk: "<<kodeproduk[2]<<kodeproduk[3]<<kodeproduk[4]<<" Gigabyte"<<endl;

getch();
}