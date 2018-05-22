#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
using namespace std;
void arr(string,int* arr);
int def(string A, string B) {
	int  arrA[1001] = { 0 };
	int  arrB[1001] = { 0 };
	int count = 0;
	
	 arr(A,arrA);
	 arr(B,arrB);
	for (int i = 0; i < A.size(); i++) {
		if (arrA[i] > arrB[i])
			count++;
	}
	return count;
}
void arr(string S,int * arr) {
	//int arr[1001] = { 0 };
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == 'A')
			arr[i] = 14;
		else if (S[i] == 'T')
			arr[i] = 10;
		else if (S[i] == 'Q')
			arr[i] = 11;
		else if (S[i] == 'K')
			arr[i] = 12;
		else {
			string b;
			b = S[i];
			arr[i] = atoi(b.c_str());
		}
	}
	
	
	
}

void main() {

	cout<< def("AA2QT", "KQ341")<<endl;
}