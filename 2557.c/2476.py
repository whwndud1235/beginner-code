N = input()
N = int(N)

dice = [[int(input()) for _ in range(3)] for _ in range(N)]
if dice[0] == dice[1] == dice[2]:
    print(10000 + dice[0]*1000)
elif dice[0] == dice[1] or dice[1] == dice[2] or dice[2] == dice[0]:
    print(1000 + dice[0]*100)
elif [dice[i] for i in range(3)]:
    dice[0] = max
    if max < dice[i]:
        max = dice[i]
        print(max*100)
