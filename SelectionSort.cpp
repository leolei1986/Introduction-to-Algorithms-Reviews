#include<vector>

void SelectionSort(vector<int> a){
	for (int i=0; i<a.size()-1; i++){
		int minIndex = i;
		for (int j=i+1; j<a.size(); j++){
			if (a[j] < a[minIndex]){
				minIndex = j;
			}
		}
		if (i != minIndex){
			int temp = a[i];
			a[i] = a[minIndex];
			a[minIndex] = temp;
		}
	}
}
