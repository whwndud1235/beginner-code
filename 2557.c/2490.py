dic = {0:'D' , 1:'C', 2:'B', 3:'A',4:'E'}
for _ in range(3):
    yoot1 = input('').split()
    num = yoot1.count('1')
    print(dic.get(num))