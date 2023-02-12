cgpa=float(input("Enter you CGPA: "))
orphan = input("Enter \"yes\" if you are an orphan else enter \"no\": ")
sch=0
if cgpa>=3.0 and cgpa<=3.5:
    if orphan=="yes":
        sch=80
    else:
        fincome = float(input("Enter your family income: "))
        if fincome<40000:
            sch=50
        elif fincome in range(40001,70001):
            sch=30
        elif fincome in range(70001,100001):
            sch=10
        elif fincome>100000:
            sch=0
elif cgpa>3.5 and cgpa<=3.9:
    if orphan=="yes":
        sch=100
    else:
        fincome = float(input("Enter your family income: "))
        if fincome < 40000:
            sch = 60
        elif fincome in range(40001, 70001):
            sch = 40
        elif fincome in range(70001, 100001):
            sch = 30
        elif fincome > 100000:
            sch = 10
elif cgpa>3.9 and cgpa<=4.0:
    sch=100

print("You have ",sch,"% scholarship")
