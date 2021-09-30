
tuple1 = (('a',40),('b',86),('c',1),('d',9))

tuple1 = tuple1(sorted(list(tuple1),key=lambda x:x[1]))

print(tuple1)