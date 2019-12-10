#include <iostream>
#include <conio.h>
#include "program_stack.h"
#include "queue.h"

using namespace std;

void menuStack() {
	cout << "		Program Penghitung Barang ke Dalam Truk" << endl << endl;
	
	cout << "Menu :" << endl;
	cout << "  1. Masukkan Barang	2. Keluarkan Barang" << endl;;
	cout << "  3. Cek Barang		4. Exit"<< endl;
	cout << "Choice : ";
}

void menuQueue() {
	cout <<"Program Pembelian Tiket Masuk Lampung Fair" << endl << endl;
	cout << "Menu :" << endl;
	cout << "1. Ambil Antrian\n2. Panggil Antrian" << endl;;
	cout << "\n3. Exit"<< endl;
	cout << "Choice : ";
}


int main () {
	Stack s;
	Queue q;
	
	int yn;
	
	do {
		int menuChoice, choice;
		cout << "List Menu  :  1. Stack		2. Queue" << endl;
		cin >> menuChoice;
		system("cls");
		switch (menuChoice) {
			case 1 :
				do {
					s.display();
					menuStack();
					cin >> choice;
					
					switch(choice) {
						case 1 :
							int data;
							cout << "Masukkan no barang = ";
							cin >> data;
							s.push(data);
							break;
						case 2 :
							s.pop();
							break;
						case 3 :
							s.display();
							break;
						case 4:
							break;
						default :
							cout << "Invalid Code" << endl;
							break;
					}
					getch();
					system("cls");
				} while (choice != 4);
				break;
			case 2 :
				do {
					int data;
					q.display();
					menuQueue();
					cin >> choice;
					
					switch(choice) {
						case 1 :
							data++;
							q.enqueue(data);
							break;
						case 2 :
							q.dequeue();
							break;
						case 3:
							return 0;
							break;
						default :
							cout << "Invalid Code" << endl;
					}
					getch();
					system("cls");

				} while (choice != 3);
				break;
			default :
				cout << "Invalid code" << endl;
		}
		
		
		cout << "Wanna do it again(1. yes/2. n0)? " << endl;
		cin >> yn;
	} while (yn == 1);
	
	return 0;
}
