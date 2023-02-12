import string
def designerPdfViewer(h,word):
    alpha=list(string.ascii_lowercase)
    maximum=0
    for j in range(len(word)):
        for i in range(26):
            if (word[j] == alpha[i]):
                maximum = h[i]
    return (len(word)*maximum)

h=list()
for i in range(26):
    a=input()
    h.append(int(a))
word=input()
if len(word)<=10:
    print(designerPdfViewer(h, word))