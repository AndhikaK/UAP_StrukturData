#include <iostream>
using namespace std;
#define MAX 10

struct Queue {
	private:
	int data = -1;
	int A[MAX];
	
	public:
	bool isEmpty() {
		if (data == -1)
			return true;
			
		return false;
	}
	
	bool isFull() {
		if (data >= 9)
			return true;
			
		return false;
	}
	
	void enqueue(int inputData) {
		if (isFull() == false) {
			data++;
			A[data] = inputData;
			cout << "No-" << inputData << " masuk ke antrian" << endl;
		} else 
			cout << "ANTRIAN PENUH" << endl;
	}
	
	void dequeue() {
		int harga=10000;
		int bayar;
		int jml;
		if (isEmpty())
			cout << "Belum ada antrian" << endl;
		else {
			cout << "Antrian no-" << A[0] << " silakan menuju loket tiket" << endl;
			cout<<"Jumlah tiket = ";cin>>jml;
			cout<<"\nUang yang harus di bayar = "<< jml*harga;
			cout<<"\nBayar = "; cin>>bayar;
			if(bayar==jml*harga){
				cout<<"Terima kasih\n";
			}else if(bayar>jml*harga){
				cout<<"Kembalian = "<<bayar-(jml*harga);
				cout<<"\nTerima Kasih\n";
			}else{
				int tambah=0,sisa=0;
				cout<<"Uang anda kurang sebesar = " ;
				sisa=-1*(bayar-(jml*harga));
				cout<<sisa;
				cout<<"\nTambahan uang = ";cin>>tambah;
				while(tambah!=sisa){ 
					cout<<"\nTambahan uang = ";cin>>tambah;
					system("cls");
				}
				cout<<"\nTerima Kasih\n";
				
			}
			for (int i = 0; i <= data; i++) 
				A[i] = A[i+1];
				
			data--;
		}
	}
	
	void display() {
		if (isEmpty()) {
			cout << "Jumlah Antrian = 0" << endl;
			cout << "KOSONG" << endl;
		} else {
			cout << "Jumlah Antrian = " << data + 1 << endl;
			cout << "Antrian = ";
			for (int i = 0; i <= data; i++) {
				cout << A[i] << " ";
			}
			cout << endl;
		}
	}
};
