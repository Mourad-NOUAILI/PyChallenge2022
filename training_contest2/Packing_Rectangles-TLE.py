''' 
Verdict: TLE
Time complexity: O(n)
Space complexity: O(1)
'''

w,h,n = map(int,input().split())

ans = int(1e9)
for i in range(1,n+1):
    q = n // i
    r = n % i
    rows = q
    if r != 0: rows += 1
    H = h * rows
    W = w * i
    ans = min(ans,max(H,W))
    print(i,W,H)
print(ans)