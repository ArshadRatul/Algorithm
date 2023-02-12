#Staircase
n=int(input())
j=n-1
for i in range(n):
    print(" "*j,end="")
    print(("#"*int(i+1)))
    j=j-1
