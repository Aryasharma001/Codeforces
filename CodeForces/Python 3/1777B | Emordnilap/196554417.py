# cook your dish here
import math
t=int(input())
for t in range(0,t):
    n=int(input())
    print((n*(n-1)*math.factorial(n))%(10**9+7))