#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int solution(vector<int> &A, int K, int L) {
	int sum = 0;
	int max=0;
	int index = 0;
	for (int i = 0; i < A.size()-(K-1); i++) {
		sum = 0;
		for (int j = i; j < i+K; j++)
			sum += A[j];
		if (max < sum) {
			max = sum;
			index = i;
		}
	}
	cout << index << " max: " << max;
	return max;
}
void main() {
	vector<int> A{6, 1, 4, 6, 3, 2, 7, 4};
	solution(A, 3, 2);
}