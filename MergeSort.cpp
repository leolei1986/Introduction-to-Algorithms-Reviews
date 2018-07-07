#include <vector>
#include <iostream>

using namespace std;

void Merge(vector<int> & a, int start, int mid, int end);

void MergeSort(vector<int> & a, int start, int end){
	if (start >= end){
		return ;
	}
	int mid = (start + end )/2;
	MergeSort(a, start, mid);
	MergeSort(a, mid + 1, end);
	Merge(a, start, mid, end);
}

void Merge(vector<int> & a, int start, int mid, int end){
	vector<int> temp;
	temp.reserve(end - start + 1);
	int i=start;
	int j=mid + 1;
	while (i <= mid || j <= end){
		if (i <= mid && j <= end){
			if (a[i] <= a[j]){
				temp.push_back(a[i]);
				i++;
			}
			else{
				temp.push_back(a[j]);
				j++;
			}
		}
		else if (i <= mid){
			temp.push_back(a[i]);
			i++;
		}
		else{
			temp.push_back(a[j]);
			j++;
		}
	}
	for (int k=0; k<end - start + 1; k++){
		a[start + k] = temp[k];
	}
}

int main(){
	vector<int> a;
	a.push_back(9);
	a.push_back(8);
	a.push_back(7);
	a.push_back(5);
	a.push_back(1);
	a.push_back(2);
	a.push_back(2);
	a.push_back(3);
	MergeSort(a, 0, a.size() - 1);
	for (int i=0; i<a.size(); i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
