A = [1,2]
B = [-2,-1]
C = [-1,2]
D = [0,2]
dic = {}
count = 0
for i in A:
    for j in B:
        Sum = i+j
        if Sum in dic:
            dic[Sum]+=1
        else:
            dic[Sum]=1
print(dic)

for i in C:
    for j in D:
        target = 0 - (i+j)
        if target in dic:
            count += dic[target]
print(count)
