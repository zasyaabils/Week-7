#include <iostream>
using namespace std;


class SortingSearching {
	public:
		void CetakData (int size, string data[]) {
			for (int i = 0; i < size; i++) {
				cout << data[i] << " ";
			}
			cout << endl;
		}
		
		void BubbleSort (int size, string data[]) {
			for (int i = 0; i < size-1; i++) {
				for (int j = 0; j < size-i-1; j++) {
					if (data[j] > data[j + 1]) {
						// Tukar Data
						string temp = data[j];
						data[j] = data[j + 1];
						data[j + 1] = temp;
					}
				}
			}
		}
		
		int binarySearch (string key, int size, string data[]) {
			int left= 0, right = size - 1;
			
			while (left <= right) {
				int mid = (left + right) / 2;
				
				if (data[mid] == key)
					return mid; // Ditemukan 
				else if (data[mid] < key)
					left = mid + 1;
				else
					right = mid - 1;
			}
			
			return -1; // Tidak Ditemukan
		}
};

int main() {
	int n;
	cout << "Masukkan jumlah data : " ;
	cin >> n;
	cout << endl;
	
	string data[n];
	
	for (int i = 0; i < n; i++) {
		cout << "Masukkan data [" << i+1 << "] : ";
		cin >> data[i];
		
	}
	cout << endl;
	
	SortingSearching ss;
    
    cout << "Data Sebelum Diurutkan : \n";
    ss.CetakData(n, data);
    
    ss.BubbleSort(n, data);
    
    cout << "\nData Setelah Diurutkan : \n";
    ss.CetakData(n, data);
    
    
    char ulang;
    do {
    	string key;
    	cout << "\nMasukkan nama buah yang ingin dicari : ";
	    cin >>key;
	    
	    int hasil = ss.binarySearch(key, n, data);
	    
	    if (hasil != -1) {
	    	cout << "Buah " << key << " ditemukan pada indeks ke-" << hasil << endl;
		} else {
			cout << "Buah " << key << " tidak ditemukan  dalam data" << endl;
		}
		
		cout << "\nIngin mencari lagi ? (y/n) : ";
		cin >> ulang;
	} while (ulang == 'y' || ulang == 'Y');
    
}
