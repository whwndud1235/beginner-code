# 파이썬 연습지
T = int(input())

for x in range(T):
    N, word = input().split()
    N = int(N)
    
    for s in word:
        print(s*N, end = '') #end = ''공백없이 출력!
    print() #enter