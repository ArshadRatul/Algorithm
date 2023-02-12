def repeatedString(a,n):
    c=0
    for i in range(n):
        if 'a' in a[i]:
            c = c + 1
    return c

s=input()
if len(s) in range(1,101):
    n=int(input())
    a=s*n
    print(repeatedString(a,n))
