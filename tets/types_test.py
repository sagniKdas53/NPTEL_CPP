
list_to_chk = [1, int(2.0), 2.0, float(2),
               1/2, 1.0/2, 2.0/1,1//2,1.0//2,1//2.0,12//6,
               True, False, bool(5),
               1+5j, 4j,
               range(2),
               bytes(5), bytearray(6), 
               'd', "d", """d""", ]

print(list_to_chk, type(list_to_chk))

for ele in list_to_chk:
    print(ele, type(ele))
