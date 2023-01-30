#include <iostream>

using namespace std;

struct Booking{
	char nama [20][20], tgl[20][20];
	int jml, lama [20], tot, menu;
}book;

void header(){
	cout << "=================================" << endl;
	cout << "PROGRAM PENYEWAAN LAPANGAN FUTSAL" << endl;
	cout << "=================================" << endl;
}

int main(){
	header();
	cout << "Masukan juamlah pembooking :";
	cin >> book.jml;
	for (int i=0;i<book.jml;i++){
		cout << endl;
		cout << "Masukan nama :";
		cin >> book.nama [i];
		cout << "Masukan lama penyewaan :";
		cin >> book.lama [i];
		cout << "Masukan Tanggal penyewaan :";
		cin >> book.tgl [i];
		cout << "Masukan Biaya penyewaan :";
		
	}
	cout << endl;
	header ();
	cout << "#1 Lihat daftar pembooking" << endl;
	cout << "#2 Keluar" << endl;
	cin >> book.menu;
	if (book.menu == 1){
		for (int j=0;j<book.jml;j++){
			cout << endl;
			cout << "Nama pembooking :" << book.nama[j] << endl;
			cout << "Lama penyewaan :" << book.lama [j] << endl;
			cout << "Tanggal sewa :" << book.tgl [j] << endl;
			cout << "Biaya sewa :" << book.tot;
			book.tot =75000*book.lama[j];
			
		}
	}
	else if (book.menu ==2){
		exit(0);
	}
	else{
		cout << "Menu tidak ada !";
	}
}
