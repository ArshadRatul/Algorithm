def hurdleRace(height,n,k):
    maximum,dif=height[0],0
    for i in range(n):
        if height[i]>maximum:
            maximum=height[i]
    if maximum>k:
        dif=maximum-k
    return dif

n,k=int(input()),int(input())
height=list()
for i in range(n):
    height.append(int(input()))
print(hurdleRace(height,n,k))