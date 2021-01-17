def reverse(s):
    new_str = s[::-1]
    return new_str

s = input('문자열을 입력하시오 :').split()
r_s = reverse(s)
print(' '.join(r_s))

