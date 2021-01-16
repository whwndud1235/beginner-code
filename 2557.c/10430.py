a, b, c = input().split()  #split 함수로 공백으로 문자열 잘라 저장
a, b, c = int(a), int(b), int(c) #자료형 형변환!
print((a+b) % c)
print(((a % c)+(b % c)) % c)
print((a*b) % c)
print(((a % c)*(b % c)) % c)
