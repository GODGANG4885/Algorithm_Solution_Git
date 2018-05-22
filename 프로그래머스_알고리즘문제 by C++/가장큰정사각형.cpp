#include<iostream>
#include<vector>
#include<utility>
#include<algoritm>
using namespace std;

int findLargestSquare(vector<vector<char>> board)
{
	int answer = 0;
	int row = board.size();
	int col = board[0].size();
	int dp[row][col];
	int cpboard[row][col];
	for (int i = 0; i<row; i++)
		for (int j = 0; j<col; j++) {
			dp[i][j] = 0;
			if (board[i][j] == 'O')
				cpboard[i][j] = 1;
			else
				cpboard[i][j] = 0;
		}
	for (int i = 1; i<row; i++)
		for (int j = 1; j<col; j++)
			if (board[i][j] == 'O')
				dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
	for (int i = 0; i<row; i++)
		for (int j = 0; j<col; j++)
			answer = max(answer, dp[i][j]);
	return answer*answer;
}
int main()
{

	vector<vector<char>> board{
		{ 'X','O','O','O','X' },
		{ 'X','O','O','O','O' },
		{ 'X','X','O','O','O' },
		{ 'X','X','O','O','O' },
		{ 'X','X','X','X','X' } };

	//아래는 테스트 출력을 위한 코드입니다.
	cout << findLargestSquare(board);
}
