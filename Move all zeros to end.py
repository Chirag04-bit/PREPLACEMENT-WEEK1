arr = [0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0]
for i in arr:
    if i == 0:
        arr.remove(0)
        arr.append(0)
print(arr)
