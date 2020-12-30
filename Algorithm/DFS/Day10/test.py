from collections import deque
q = deque()
begin = "hit"
q.append((begin,1))
word, dep = q.popleft()
print(word)

a = [1,1,2,2,3,3]
b = set(a)
print(b)

for i in range(0,10):
    if i<5:
        continue
    print(i)

C = sum(a)
print(C)

for i in range(0,3):
    print(i)

print([1 for i in range(5)])

c=[1,2,3]
d=[4,5,6]
e = zip(c,d)
for i in e:
    print(i)
f = [1,1,2,3,1,4]
print(set(f))