from collections import deque
queue = deque([(1,0),(0,0),(0,1)])
print(queue.popleft())

a = [chr(i) for i in range(ord('a'), ord('z') + 1)]
print(a)

b = (1,2,3)
c = (4,5,6)
d = zip(b,c)
for i, j in d:
    print(i)
    print(j)
e = [False] * 3
print(e)
S = "ababcbacadefegdehijhklij"
last_idx = {c: i for i, c in enumerate(S)}
print(last_idx)