#include <iostream>
using namespace std;

class Karyawan {
private:
	int id[99], notelp[99];
	int n;
	string nama[99], jabatan[99];
	
public:
	void input() {
		
		cout << "\nMasukkan jumlah data : ";
		cin >> n;
		
		for (int i = 0; i < n; i++) {
			cout << "\nMasukkan Data ke-" << i+1 << endl;
			cout << "Masukkan ID		: ";
			cin >> id[i];
			cout << "Masukkan Nama		: ";
			cin >> nama[i];
			cout << "Masukkan Jabatan	: ";
			cin >> jabatan[i];
			cout << "Masukkan No Telp	: ";
			cin >> notelp[i];
			cout << endl;
		}
		
	}
	
	void tampil() {
		cout << "\n-----------------------------\n";
		cout << "	Data Karyawan\n";
		cout << "-----------------------------\n";
		for (int i = 0; i < n; i++) {
			cout << "ID	: " << id[i] << endl;
			cout << "Nama	: " << nama[i] << endl;
			cout << "Jabatan	: " << jabatan[i] << endl;
			cout << "No Telp	: " << notelp[i] << endl;
			cout << endl;
		}
		cout << "-----------------------------\n\n";
		
	}
	
	void ascending() {
		cout << "\n----------------------------------------\n";
		cout << "	Data Diurutkan berdasarkan Asceding\n";
		cout << "-----------------------------------------\n";
		for (int i = 0; i < n-1; i++) {
				for (int j = 0; j < n-i-1; j++) {
					if (id[j] > id[j + 1]) {
						// Tukar Data
						int temp = id[j];
						id[j] = id[j + 1];
						id[j + 1] = temp;
					}
				}
			}
	}
	
	void descending() {
		
	}
	
	int cari() {
		
		int key;
	    cout << "\nMasukkan ID yang ingin dicari : ";
	    cin >>key;
	    
		int left= 0, right = n - 1;
			
			while (left <= right) {
				int mid = (left + right) / 2;
				
				if (id[mid] == key)
					return mid; // Ditemukan 
				else if (id[mid] < key)
					left = mid + 1;
				else
					right = mid - 1;
			}
			
			return -1; // Tidak Ditemukan
	}
	
	void menu() {
		int pilMenu;
		
		do {
			cout << "-----------------------------\n";
			cout << "	PT. Quairo\n";
			cout << "-----------------------------\n";
			cout << "1. Input Data Karyawan\n";
			cout << "2. Tampilkan Data Karyawan\n";
			cout << "3. Sorting Data secara Ascending\n";
			cout << "4. Sorting Data secara Descending\n";
			cout << "5. Cari Data berdasarkan ID\n";
			cout << "6. Keluar\n";
			cout << "-----------------------------\n";
			cout << "Pilih Menu : ";
			cin >> pilMenu;
			
			switch(pilMenu) {
				case 1:
					input();
					break;
				case 2:
					tampil();
					break;
				case 3:
					ascending();
					break;
				case 4:
					descending();
					break;
				case 5:
					cari();
					break;
				default:
					cout << "Terima Kasih!.\n";
					break;
			}
		} while (pilMenu != 6);
	}
};

int main() {
	Karyawan k;
	
	k.menu();
	
	return 0;
}
