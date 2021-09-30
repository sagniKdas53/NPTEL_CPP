num = int(input())

ads = []
adslot = []
for d in range(0, num):
    if d % 3 == 0 and d != 0:
        ads.append(adslot)
        adslot = []
        adslot.append(int(input()))
    else:
        adslot.append(int(input()))
    # print(ads)

if adslot != []:
    ads.append(adslot)


# print(ads)
# print("Slot")
clint = int(input())
res = 0
for k in ads:
    if clint in k:
        res = 1
    else:
        res = 0
        break


print(res)

# print(ads)
