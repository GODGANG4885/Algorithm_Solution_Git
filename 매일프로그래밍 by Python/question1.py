'''
정수 배열과 타겟 숫자가 주어지면, 합이 타겟값이 되는 두 원소의 인덱스를 찾으시오.

단, 시간복잡도 O(n) 여야 합니다.



예제)

Input: [2, 5, 6, 1, 10], 타겟 8

Output: [0, 2] // 배열[0] + 배열[2] = 8'''
import copy
def solution(board,target):
    arr = []
    k=0
    arr=board
    for i in range(len(board)):
        arr[k]+=board[i]
print(solution([2,5,6,1,10],9))
