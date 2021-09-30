end = int(input())


ads = []
adslot = []
for d in range(0, end):
    if d % 3 == 0 and d != 0:
        ads.append(adslot)
        adslot = []
        adslot.append(d)
    else:
        adslot.append(d)
    # print(ads)

if adslot != []:
    ads.append(adslot)

print(ads)

lisss = list(range(end))
# print(lisss)

final = []
for i in zip(lisss[0::3], lisss[1::3], lisss[2::3]):
    # print(list(i))
    final.append(list(i))
print(final)

if ads == final:
    print(True)
else:
    print(False)


"""for i in range(0,end,3):
    print('\n')
    for j in range(i,i+3):
        print(j)
"""

"""main = []
for i in range(0,end,3):
    sub = []
    for j in range(3):
        sub.append(j)
    main.append(sub)
diff = end - i
if diff > 0:
    for i in range(diff):
        sub= []
        sub.append(i)
    main.append(sub)
    
print(main)"""
