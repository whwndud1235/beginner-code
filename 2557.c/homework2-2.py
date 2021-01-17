def metrix(r,c):
    metrix = [['★' if (j+i) % 2 == 0 else '☆' for j in range(c)] for i in range(r)]
    return metrix

r,c = input('행 & 열 : ').split()
r = int(r)
c = int(c)

arr = metrix(r,c)
print(arr)

