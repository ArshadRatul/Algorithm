s=input("")
if(s[8]=='P'):
    hr=(int(s[0])*10)+int(s[1])
    if hr!=12:
        hr = str((int(s[0]) * 10) + int(s[1])+12)
    else:
        hr="12"
    minutes=str((int(s[3])*10)+int(s[4]))
    sec=str((int(s[6])*10)+int(s[7]))
    if len(minutes)==1:
        minutes="0"+minutes
    if len(sec)==1:
        sec="0"+sec
    print(hr+":"+minutes+":"+sec)
elif(s[8=='A']):
    if((int(s[0]) * 10) + int(s[1])==12):
        hr="00"
    else:
        hr = str((int(s[0]) * 10) + int(s[1]))
    minutes = str((int(s[3]) * 10) + int(s[4]))
    sec = str((int(s[6]) * 10) + int(s[7]))
    if len(minutes)==1:
        minutes="0"+minutes
    if len(sec)==1:
        sec="0"+sec
    if len(hr)==1:
        hr="0"+hr
    print(hr + ":" + minutes + ":" + sec)
