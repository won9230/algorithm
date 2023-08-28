import sys

def binary_search(target,data):
    start = 0
    end = len(data) - 1
    
    while start <= end:
        mid = (start + end) // 2
        
        if data[mid] == target:
            return 1
        elif data[mid] < target:
            start = mid + 1
        else:
            end = mid - 1
            
    return 0

n = input()
a = list(map(int,sys.stdin.readline().split()))
m = int(input())
b = list(map(int,sys.stdin.readline().split()))
a.sort()

for i in range(m):
    if(binary_search(b[i],a)):
        print(1,end=' ')
    else:
        print(0,end=' ')