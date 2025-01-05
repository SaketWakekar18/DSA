#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> vector1) {
	cout<<"\nVector Elements: ";
	for(int i=0; i<vector1.size(); i++) {
		cout<<vector1[i]<<" ";
	}
}

int main() {
	vector<int> vector1; //--> first way of creating vector
	//push elements
	cout<<"Push elements: ";
	vector1.push_back(10);
	vector1.push_back(20);
	vector1.push_back(30);
	vector1.push_back(40);
	vector1.push_back(50);
	cout<<"\nSize of vector before pop: "<<vector1.size();

	printVector(vector1);

	//pop elements
	cout<<"\nPop elements: ";
	vector1.pop_back();
	vector1.pop_back();
	cout<<"\nSize of vector after pop: "<<vector1.size();
	printVector(vector1);

	vector<int> vector2(5,100); //--> second way
	cout<<"\nSecond Way: ";
	printVector(vector2);

	vector2.pop_back();
	vector2.pop_back();
	cout<<"\nSize of vector after pop: "<<vector2.size();

	vector2.push_back(50);
	cout<<"\nSize of vector after push: "<<vector2.size();
	printVector(vector2);

}