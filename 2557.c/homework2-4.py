import random as rm

dic = {1:'도', 2:'개', 3:'걸',4:'윷',0:'모'}   #switch -case 문 처럼 사용

result = [rm.choice(['O','X']) for _ in range(4)] #random 하게 O,X 뽑기

f_res = ''.join(result)   #공백없이 문자열로 저장

num = f_res.count('O') # O 의 갯수세기
print(f_res,':',end='')  # end = '' -> enter 제거 
print(dic.get(num))   # get -> key 찾아가서 출력 !