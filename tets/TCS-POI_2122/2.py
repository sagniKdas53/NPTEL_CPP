num =19
while(not(num>>9)):
    num**=2
    num = num >> 1
    print(num)
else:
    num//=2
    print(num)


print(num)