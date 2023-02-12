#Simple Array Sum
def simpleArraySum(ar,n):
    sum=int(0)
    for i in range(n):
        sum=sum+ar[i]
    return sum

n=int(input())
ar=list()
for i in range(n):
    ar.append(int(input()))
results=simpleArraySum(ar,n)
print(results)