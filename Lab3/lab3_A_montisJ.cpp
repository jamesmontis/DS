// James Montis
// DS Lab 3 - Part A - templates
// September 3rd, 2020

#include <iostream>
using namespace std;

template<class T>

class Array{
	T *ptr;
	int size;
public:
	Array(T arr[],int s);
	void print();
	void sort();
	Array(int size){
		for (int i = 0 ; i < size ; i++){
			ptr[i]=0;
		}
	}
	Array(T a, int size){
		for (int i = 0 ; i < size ; i++){
			ptr[i]=a;
		}
	}
};

template <class T>
Array<T>::Array(T arr[], int s){
	ptr = new T[s];
	size = s;
	for (int i = 0 ; i < size ; i++){
		ptr[i]= arr[i];
	}
}

template <class T>
void Array<T>::print(){
	for (int i =0 ; i <size ;i++)
		cout << " "<<ptr[i];
	cout << endl;
}

template <class T> // sorting here 
void Array<T>::sort(){
	int mindex=0;
	for (int i =0 ; i <size ;i++) {
		mindex = i;
		for (int j = i+1 ; j < size ; j++){
			if (ptr[j]<ptr[mindex]){
				mindex=j;
			}
		}
	if (mindex !=i){
		swap(ptr[i],ptr[mindex]);
	}
	cout << endl;
	}
}


int main(){
	
	int arr[5]={3,5,4,1,2};
	string arr1[4]={"Hello","2437","Fall"," 20!"};
	Array<int> a(arr,5);
	Array<string> s(arr1,4);
	a.print();
	s.print();	
	a.sort();
	a.print();
	
	return 0;
}









