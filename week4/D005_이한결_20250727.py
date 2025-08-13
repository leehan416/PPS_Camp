import sys

n, m = map(int, sys.stdin.readline().split())
l = set()
li = []
for _ in range(n):
    l.add(sys.stdin.readline().strip())
for _ in range(m):
    temp = sys.stdin.readline().strip()
    if temp in l:
        li.append(temp)
li.sort()
print(len(li))
for i in li:
    print(i)