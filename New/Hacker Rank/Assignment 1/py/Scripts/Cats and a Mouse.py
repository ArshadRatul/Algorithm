#Cats and a Mouse
def catAndMouse(x,y,z):
    difx=z-x
    dify=z-y
    if difx<0:
        difx=-difx
    if dify<0:
        dify=-dify
    if dify==difx:
        return "Mouse C"
    elif dify>difx:
        return "Cat A"
    else:
        return "Cat B"

q=int(input())
if q in range(1,100):
    for i in range(q):
        x, y, z = int(input()), int(input()), int(input())
        print(catAndMouse(x,y,z))