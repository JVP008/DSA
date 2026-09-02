def fun (n):
    count = 1
    while(count<=n):
        yield count
        count+=1;

n = int(input())
for i in fun(n):
    print(i)