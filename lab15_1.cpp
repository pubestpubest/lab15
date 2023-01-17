#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	int i=1,j=1;
	while(i<N){
		j=i;
		while(d[j]>d[j-1]&&j>0){
			T temp=d[j];
			d[j]=d[j-1];
			d[j-1]=temp;
			j--;
		}
		cout<<"Pass "<<i<<":";
		for(int i = 0; i < 10; i++) cout << d[i] << " ";
		cout<<"\n";
		i++;
	}
	cout << "\n";
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
