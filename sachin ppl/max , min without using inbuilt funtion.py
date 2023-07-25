lst = []
n = int(input("Enter number of elements : "))
for i in range(0, n):
    ele = int(input())
    lst.append(ele) 
 
print(lst)
max = lst[0]
min = lst[0]
for i in range(n):
    if lst[i]>max:
        max = lst[i]
    elif lst[i]<min:
        min = lst[i]
        
print(max)
print(min)
