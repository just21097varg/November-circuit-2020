n,q=map(int,input().split())
l=list(map(int,input().split()))
l1=[]
for i in range(len(l)):
    c=l[i]
    s=0
    while c!=0:
        s=s+c%10
        c=int(c/10)
    l1.append(s)

while q!=0:
    q=q-1
    s=int(input())
    i=s-1
    while s<n and (l1[i]<=l1[s] or l[i]>=l[s]):
        s=s+1
        if s==n:
            break
    if s==n:
        print("-1")
    else:
        print(s+1)            
