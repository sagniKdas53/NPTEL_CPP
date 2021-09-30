def countSc(St):
    a = 0
    b = 0
    for char in St:
        if char == 'a':
            a += 1
        if char == 'b':
            b += 1
    return (a, b)

def max(a,b):
    if a > b:
        return a
    if a < b:
        return b


def game(scoreWin):
    scoreStr = input()
    # scA,scB += scAdj,scBdj
    scA, scB = countSc(scoreStr)
    #print(scA,scB)
    if scA == scoreWin:
        return 'A',scoreStr
    elif scB == scoreWin:
        return 'B',scoreStr
    elif scA == scB and scB == scoreWin-1:
        #print(scoreWin-max(scA,scB))
        return game(scoreWin)
    elif scA - scB >= 2:
        for i in range(scA-scB):
            scoreStr+='a'
        return 'A',scoreStr
    elif scB - scA >= 2:
        for i in range(scB-scA):
            scoreStr+='b'
        return 'B',scoreStr


for g in range(int(input())):
    print(game(int(input())))
