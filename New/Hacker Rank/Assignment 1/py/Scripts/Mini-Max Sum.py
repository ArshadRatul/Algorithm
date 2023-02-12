#Mini-Max Sum
def miniMaxSum(arr,n):
    max=arr[0]
    min=arr[0]
    maxsum=0
    minsum=0
    for i in range(n):
        if max<arr[i]:
            max=arr[i]
        if min>arr[i]:
            min=arr[i]
    if max == min:
        n=n-1
    for i in range(n):
        if arr[i]!=min:
            maxsum=maxsum+arr[i]
        if arr[i]!=max:
            minsum=minsum+arr[i]
        if max==min:
            maxsum=maxsum+arr[i]
            minsum=maxsum
    print(minsum,maxsum)

arr=list()
a=5
for k in range(a):
    arr.append(int(input()))
miniMaxSum(arr,a)