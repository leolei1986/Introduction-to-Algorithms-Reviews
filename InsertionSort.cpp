#include <vector>

void InsertionSort(vector<int> a){
	for  (int i=1; i<a.size(); i++){
		int key = a[i];
		int j = i-1;
		for (; j>=0 && a[j] > key; j--){
			a[j+1] = a[j];
		}
		a[j+1] = key;
}
