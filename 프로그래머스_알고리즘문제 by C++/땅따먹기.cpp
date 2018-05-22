/*����� �����Ա� ���ӿ� ǫ �������ϴ�. �����Ա� ������ ���� �� N�� 4���� �������� �ְ�, 
��� ĭ���� ������ ���� �ֽ��ϴ�. ���� �����鼭 �� �྿ ������ ��, ����� �� ���� 4ĭ �� 1ĭ�� �����鼭 ������ �� �ֽ��ϴ�. 
�����Ա� ���ӿ��� ���� ���� �����ؼ� ���� ���� ���� Ư�� ��Ģ�� �ֽ��ϴ�. 
��, 1�࿡�� (5)�� ��Ҵٸ�, 2���� (8)�� ���� ���� ���� �˴ϴ�. ������ ����� ��� �������� ��, 
������ ���� ���� ����� ������ ���ڰ� �˴ϴ�. �������� hopscotch �Լ��� �����Ͽ� ���� �ִ� �� ���� ���� �� �ִ��� �˷��ּ���. 
���� ���
1 2 3 5
5 6 7 8
4 3 2 1
�� ���� �ִٸ�, ����� �� �ٿ���(5), (7), (4) ���� ��� 16���� �ְ������� ���� �� ������, hopscotch �Լ������� 16�� ��ȯ���ָ� �˴ϴ�.*/

#include<iostream>
#include<vector>
#include<algorithm>
#pragma warning(disable : 4996)
using namespace std;

int board[3][4]= { { 1,2,3,4 },{ 5,6,7,8 },{ 9,10,11,12 } };

int solution(vector<vector<int> > board) {
		
	int dp[10001][4] = { 0 };
	int size = board.size();
	for (int i = 0; i < 4; ++i)
		dp[0][i] = board[0][i];
	for (int i = 1; i < size; ++i)
		for (int j = 0; j < 4; ++j)
			dp[i][j] = max(dp[i][j], dp[i - 1][j] + board[i][j]);
	int ans = 0;
	for (int i = 0; i < 4; i++)
		ans = max(ans, dp[size - 1][i]);
	
	return ans;

}
void main() {
	vector<vector<int> > board{ { 1,2,3,4 },{ 5,6,7,8 },{ 9,10,11,12 } };
	vector<vector<int> > board1{ { 1,2,3,4 },{ 5,6,7,8 },{ 9,10,11,12 },{1,2,3,4} };
	cout << solution(board) << endl;
	cout << solution(board1) << endl;

}
