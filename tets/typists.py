typ = int(input())
ech = [1/int(input()) for i in range(typ)]
sum = 0
for gg in ech:
    sum+=gg
print(1/sum)