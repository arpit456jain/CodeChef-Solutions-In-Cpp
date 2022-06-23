# cook your dish here
t = int(input())
while(t):
    n = int(input())
    arr = [int(x) for x in input().split()]
    
    sum1 = sum(arr)
    if(sum1%2 == 0):
        print("YES")
    else:
        print("NO")
    t=t-1