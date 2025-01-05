#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[], int size)
{
	cout<<"Array Elements:";
	for(int i=0; i<size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

bool linearSearch(int arr[], int size, int target) {
	for(int i=0; i<size; i++) {
		if(arr[i]==target) {
			cout<<"Element found at location:"<<i+1;
			return true;
		}
	}
	cout<<"Element not found";
	return false;
}

void countZeroAndOnes(int arr[], int size) {
	int zeros = 0;
	int ones = 0;
	for(int i=0; i<size; i++) {
		if(arr[i]==0) {
			zeros++;
		}
		if(arr[i]==1) {
			ones++;
		}
	}
	cout<<"\nZeros:"<<zeros;
	cout<<"\nOnes:"<<ones;
}

void minimumElement(int arr[], int size) {
	int mini = INT_MAX;
	for(int i=0; i<size; i++) {
		if(arr[i]<mini) {
			mini=arr[i];
		}
	}
	cout<<"\nMinimum Element:"<< mini;
}

void maximumElement(int arr[], int size) {
	int mini = INT_MIN;
	for(int i=0; i<size; i++) {
		if(arr[i]>mini) {
			mini=arr[i];
		}
	}
	cout<<"\nMaximum Element:"<< mini<<endl;
}

void reverseArray(int arr[], int size) {
	int left = 0;
	int right = size-1;
	while(left<=right) {
		swap(arr[left],arr[right]);
		left++;
		right--;
	}
	cout<<"reverseArray: ";
	printArray(arr,size);
}

void extremeElements(int arr[], int size) {
	int left = 0;
	int right = size-1;
	cout<<"extremeElements:";
	while(left<=right) {
		if(left==right) {
			cout<<arr[left];
		}
		else {
			cout<<arr[left]<<" "<<arr[right] <<" ";
		}
		left++;
		right--;
	}
}

int main()
{
	int arr[] = {1,19,81,47,0,11,29};
	int size = 7;
	int target = 47;
	printArray(arr,size);
	bool ans = linearSearch(arr,size,target);
	countZeroAndOnes(arr,size);
	minimumElement(arr,size);
	maximumElement(arr,size);
	//reverseArray(arr,size);
	extremeElements(arr,size);
	// if(ans == true){
	//     cout<<"Element found";
	// }
	// else{
	//     cout<<"Element not found";
	// }
	//return ans;
}