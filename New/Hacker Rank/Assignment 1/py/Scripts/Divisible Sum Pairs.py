def divisibleSumPairs(ar,n,k):
    c=0
    for i in range(n-1):
        j=i+1
        for j in range(n-1):
            if((ar[i]+ar[j])%k==0):
                c = c + 1
                print(c)
    return c

n=int(input())
ar=list()
if n in range(2,100):
    k=int(input())
    for i in range(n):
        ar.append(int(input()))
    print(divisibleSumPairs(ar,n,k))