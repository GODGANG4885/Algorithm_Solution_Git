
# 매일프로그래밍 2
# 피보나치를 재귀함수 사용하지않고 짜보기
def evenFibSum(N):
    nextval = 0
    sum = 0
    plist = [0,1]
    while(nextval<N) :
        plist.append((plist[-2]+plist[-1]))
        nextval = plist[-1]
        if (nextval % 2 ==0) : sum += nextval
    return sum
print(evenFibSum(100))
# for i in range(5):
#     print(pibonacci(i))
