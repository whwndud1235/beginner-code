def fibonacci(n):  #재귀
  if n <= 1:
    return n
  else:
    return(fibonacci(n-1) + fibonacci(n-2))
    
def prob(num):
  nums = [0 for i in range(num)]  #list 크기설정

  for i in range(0,num):
    nums[i] = fibonacci(i+1)  
  
  return nums

x = int(input('n 번째 항까지의 fibonacci  : '))
print(prob(x))