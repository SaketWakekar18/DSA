#include<iostream>
using namespace std;

void printArrayRowWise(int arr[][4],int row, int col) {
	cout<<"Array Elements: \n";
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void printArrayColWise(int arr[][4],int row, int col) {
	cout<<"Array Elements: \n";
	for(int i=0; i<col; i++) {
		for(int j=0; j<row; j++) {
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
}

bool linearSearch(int arr[][4],int row, int col, int target) {
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			if(arr[i][j]==target) {
				return true;
			}
		}
	}
	return false;
}

void takingInput(int arr[][4], int row, int col) {
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cout<<"\nEnter values for row "<<i<<" and column "<<j<<" :";
			cin>>arr[i][j];
		}
	}
}

int maxElement(int arr[][4], int row, int col) {
	int max = arr[0][0];
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			if(arr[i][j]>max) {
				max = arr[i][j];
			}
		}
	}
	return max;
}

int minElement(int arr[][4], int row, int col) {
	int min = arr[0][0];
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			if(arr[i][j]<min) {
				min = arr[i][j];
			}
		}
	}
	return min;
}

void rowWiseSum(int arr[][4], int row, int col) {
	int sum = 0;
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			sum = sum + arr[i][j];
		}
		cout<<"\nSum of row "<<i<< " is:"<<sum;
	}
}

void columnWiseSum(int arr[][4], int row, int col) {
	int sum = 0;
	for(int i=0; i<col; i++) {
		for(int j=0; j<row; j++) {
			sum = sum + arr[j][i];
		}
		cout<<"\nSum of column "<<i<< " is:"<<sum;
	}
}

void diagonalWiseSum(int arr[][4], int row, int col) {
	int sum = 0;
	for(int i=0; i<row; i++) {
		sum = sum+arr[i][i];
	}
	cout<<"\nDiagonal Sum is: "<<sum;
}

void reverseDiagonalSum(int arr[][4], int row, int col) {
	int sum = 0;
	for(int i=0; i<row; i++) {
		sum = sum+arr[row-i-1][i];
	}
	cout<<"Reverse Diagonal Sum is: "<<sum;
}

void transposeUpperTriangle(int arr[][4], int row, int col) {
	for(int i=0; i<row; i++) {
		for(int j=i; j<col; j++) {
			swap(arr[i][j],arr[j][i]);
		}
	}
}

void transposeLowerTriangle(int arr[][4], int row, int col) {
	for(int i=0; i<row; i++) {
		for(int j=0; j<=i; j++) {
			swap(arr[i][j],arr[j][i]);
		}
	}
}

int main() {
	int arr[][4]= {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int row = 4;
	int col = 4;
	int target = 7;
	printArrayRowWise(arr,row,col);
	printArrayColWise(arr,row,col);
	bool ans = linearSearch(arr,row,col,target);
	if(ans == true) {
		cout<<"Element found";
	}
	else {
		cout<<"Element not found";
	}
	//takingInput(arr,row,col);
	printArrayRowWise(arr,row,col);
	int max = maxElement(arr,row,col);
	cout<<"Maximum Element is: "<<max;

	int min = minElement(arr,row,col);
	cout<<"\nMinimum Element is: "<<min;

	rowWiseSum(arr,row,col);
	columnWiseSum(arr,row,col);
	diagonalWiseSum(arr,row,col);
	reverseDiagonalSum(arr,row,col);

// 	cout<<"\nTranspose Upper Triangle:";
// 	transposeUpperTriangle(arr,row,col);
// 	printArrayRowWise(arr,row,col);

	cout<<"\nTranspose Lower Triangle:";
	transposeLowerTriangle(arr,row,col);
	printArrayRowWise(arr,row,col);
}