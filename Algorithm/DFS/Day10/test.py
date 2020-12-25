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