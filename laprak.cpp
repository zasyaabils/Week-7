#include <iostream>
using namespace std;

class SortingSearching {
	public:
		void CetakData (int size, int data[]) {
			for (int i = 0; i < size; i++) {
				cout << data[i] << " ";
			}
			cout << endl;
		}
		
		void BubbleSort (int size, int data[]) {
			for (int i = 0; i < size-1; i++) {
				for (int j = 0; j < size-i-1; j++) {
					if (data[j] > data[j + 1]) {
						// Tukar Data
						int temp = data[j];
						data[j] = data[j + 1];
						data[j + 1] = temp;
					}
				}
			}
		}
		
		int binarySearch (int key, int size, int data[]) {
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
    int size = 10;
    int data[size] = {42, 17, 8, 23, 56, 34, 90, 12, 5, 29};
    
    SortingSearching ss;
    
    cout << "Data Sebelum Diurutkan : \n";
    ss.CetakData(size, data);
    
    ss.BubbleSort(size, data);
    
    cout << "\nData Setelah Diurutkan : \n";
    ss.CetakData(size, data);
    
    int key;
    cout << "\nMasukkan angka yang ingin dicari : ";
    cin >>key;
    
    int hasil = ss.binarySearch(key, size, data);
    
    if (hasil != -1) {
    	cout << "Angka " << key << " ditemukan pada indeks ke-" << hasil << endl;
	} else {
		cout << "Angka " << key << " tidak ditemukan  dalam data" << endl;
	}
    return 0;
}
