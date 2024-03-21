// UCP1Algoritma.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//1.algoritma Bubble sort yang menggunakan variabel yang menangkap input dan
// output kedalam algoritma[coding] sehingga elemen elemennya ke input dan 
// ke output semua.
// 
// 2.algoritma shell sort menggunakan variable array sehingga program bisa di
// di input dan bisa menggambungkan elemen2 kedalam algoritma tersebut.
// 
// 3.jika data sudah berurutan, maka algoritma selection sort dan insertion 
// sort karane algoritma yang dua ini langsung otomatis ke input proses output
//  
#include <iostream>
using namespace std;

int fahrezi[39];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan  Elemen Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> fahrezi[i];
	}
}

void InsertionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) {

		temp = fahrezi[i];

		j = i - 1;

		while (j >= 0 && fahrezi[j] > temp)
		{
			fahrezi[j + 1] = fahrezi[j];
			j--;
		}
		fahrezi[j + 1] = temp;
	}
}

void display() {
	cout << endl;
	cout << "====================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "====================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << fahrezi[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	InsertionSort();
	display();

	system("pause");
	return 0;
}