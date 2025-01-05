#include<iostream>
#include<vector>
using namespace std;

void printVector(vector< vector<int> > vector1) {
	for(int i=0; i<vector1.size(); i++) {
		for(int j=0; j<vector1[i].size(); j++) {
			cout<<vector1[i][j]<< " ";
		}
		cout<<endl;
	}
}

int main() {
	vector< vector<int> > vector1(5, vector<int>(10,1));
	// 2D Vector created with 5 rows and 10 columns, with all elements initialized to 1.
	cout<<"2-D Vector elements: "<<endl;
	printVector(vector1);

	//jagged array;
	vector< vector<int> > vector2;

	vector<int> vec1(5,9);
	vector<int> vec2(7,3);
	vector<int> vec3(4,10);
	vector<int> vec4(3,7);
	vector<int> vec5(9,2);

	vector2.push_back(vec1);
	vector2.push_back(vec2);
	vector2.push_back(vec3);
	vector2.push_back(vec4);
	vector2.push_back(vec5);
	cout<<"\nJagged Array: "<<endl;
	printVector(vector2);
}