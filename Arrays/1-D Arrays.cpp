#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
	cout<<"\nprintArray:";
	for(int i=0; i<size; i++) {
		cout<<arr[i]<<" ";
	}
}

void rightShiftArray(int arr[], int size) {
	cout<<"\nRight Shift:";
	int temp = arr[size-1];
	for(int i=size-1; i>=1; i--) {
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
}

void rightShiftArrayByKPosition(int arr[], int size, int k) {
	int temp[k];
	for(int i=0; i<k; i++) {
		temp[i]=arr[size-k+i];
	}
	for(int i=size-1; i>=k; i--) {
		arr[i]=arr[i-k];
	}
	for(int i=0; i<k; i++) {
		arr[i]=temp[i];
	}

}

void leftShiftArray(int arr[], int size) {
	cout<<"\nLeft Shift:";
	int temp = arr[0];
	for(int i=0; i<size; i++) {
		arr[i]=arr[i+1];
	}
	arr[size-1]=temp;
}

void leftShiftArrayByKPosition(int arr[], int size, int k) {
	int temp[k];
	for(int i=0; i<k; i++) {
		temp[i]=arr[i];
	}
	for(int i=0; i<size; i++) {
		arr[i]=arr[i+k];
	}
	for(int i=0; i<k; i++) {
		arr[size-k+i]=temp[i];
	}
}

int main()
{
	int arr[5]= {1,2,3,4,5};
	int size = 5;
	int pos = 2;
	printArray(arr,size);
	// rightShiftArray(arr,size);
	//leftShiftArray(arr,size);
	rightShiftArrayByKPosition(arr,size,pos);
	//leftShiftArrayByKPosition(arr,size,pos);
	printArray(arr,size);
	return 0;
}