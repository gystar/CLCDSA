n = int(input())
ans = []
if n == 1:
  print(0)
else:
  for h in range(1,n):
    w = n // h #???????????????
    tmp = abs(h-w) + (n-h*w) #?????????????
    ans.append(tmp)
    
  print(min(ans))