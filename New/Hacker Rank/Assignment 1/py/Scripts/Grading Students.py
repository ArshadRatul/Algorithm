#Grading Students
def gradingStudents(grade,n):
    for i in range(n):
        if grade[i]>=38:
            if (grade[i]+1)%5==0:
                grade[i]=grade[i]+1
            elif (grade[i]+2)%5==0:
                grade[i]=grade[i]+2

n=int(input())
grades=list()
if n<=60 and n>=1:
    for i in range(n):
        grades.append(int(input()))
    gradingStudents(grades,n)
    for j in range(n):
        print(grades[j])