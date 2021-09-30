def func(a):
    if a<=4:
        return func(a+2)
    else:
        return a**2

print(func(2)+4)