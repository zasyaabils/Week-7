#include <iostream>
#include <string>

using namespace std;
 void sorting (int arr[])
{
   for (int i = 0; i < 8-1; i++) {
   	cout << "\nLangkah " << i+1 << endl;
				for (int j = 0; j < 8-i-1; j++) {
					if (arr[j] > arr[j + 1]) {
						
						// Tukar Data
						int temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
					cout << "Tukar " << j << " -> " << j+1 << endl;
				}
				
			}
}
int main()
{
   int arr[8] = {9, 2, 1, 4, 11, 10, 18, 6};
   
   cout << "Data Sebelum Diurutkan : \n";
   
   for (int i = 0; i < 8; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
			
	
	sorting(arr);
	cout << "\nData Setelah Diurutkan : \n";
	for (int i = 0; i < 8; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;

   return 0;
}
