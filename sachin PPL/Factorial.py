def fac(n):
    f = 1
    for i in range(1,n+1):
        f = f * i
    return f
        
a = int(input("Enter the number : ")) 
result = fac(a)
print("Factorial is " , result)
