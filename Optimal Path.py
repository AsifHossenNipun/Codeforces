def sum(n,a,p):
	return (n / 2) * (a + p)


t = int(input())
for i in range(0,t):
	a,b = map(int, input().split())
	ans = sum(b,1,b) + sum(a,b,a*b) - b
	print(int(ans))
	
