n=int(input())
money=0

for _ in range(n):
    a, b, c = map(int, input().split())  # 나열해서 쓸 수 있음
    if a == b == c:  # 3개 동일할 경우
        res = 10000 + a * 1000
    elif a == b or b == c:  # 두개만 같을 경우
        res = 1000 + b * 100
    elif c == a:
        res = 1000 + c * 100
    else:  # 3개 다 다를경우
        res = max(a, b, c) * 100  #max 함수 이용

    if res > money:
        money = res

print(money)