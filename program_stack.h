#include <iostream>
using namespace std;
#define MAX 5

struct Stack {
	private :
		int data = -1;
		int A[MAX];
		
	public :
		bool isEmpty() {
			if (data == -1)
				return true;
				
			return false;
		}
		
		bool isFull() {
			if (data >= 4)
				return true;
				
			return false;
		}
		
		void push (int inputData) {
			if (isFull())
				cout << "Truk sudah penuh" << endl;
			else {
				data++;
				for (int i = data; i >= 0; i--) {
					A[i] = A[i-1];
				}
				A[0] = inputData;
				cout << "Barang no-" << inputData << " dimasukkan ke dalam truk" << endl;
			}
		}
		
		void pop () {
			if (isEmpty())
				cout << "Truk masih kosong" << endl;
			else {
				cout << "Barang no-" << A[0] << " berhasil dikeluarkan" << endl;
				
				for (int i = 0; i <= data; i++) {
					A[i] = A[i+1];
				}
				data--;
			}
		}
		
		void display() {
			if (isEmpty()) {
				cout << "Total Barang = 0" << endl;
				cout << "Barang  = Kosong" << endl;
			} else {
				cout << "Total Barang = " << data + 1 << endl;
				cout << "Barang = ";
				
				for (int i = 0; i <= data; i++)
					cout << A[i] << " ";
					
				cout << endl << endl;;
			}
		}
};
