while 1:
    text = input()
    
    if text == '#':
        break
    
    list1 = text.split()   # text 를 공백으로 나눔
    
    alpha_upper = list1[0].upper()   # 대문자 = 맨 앞글자 대문자 만들기
    alpha_lower = list1[0].lower()   # 소문자 = 맨 앞글자 소문자 만들기
    
    s = ' '.join(list1[1:])  #list1 2번째 글자부터 끝까지 공백없이 합치기
    cnt = s.count(alpha_upper) + s.count(alpha_lower) #s 에서 대문자수 + 소문자 수
    print(list1[0], cnt) 