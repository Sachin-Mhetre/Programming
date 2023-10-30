number = [1,2,3,4,5,6,7,8,9,10]

def square(x):
    return x**2
    
squared_number = list(map(square,number))

def even(x):
    return x%2 == 0
    
even_number = list(map(even,number))

print("Original Numbers:", number)
print("Squared Numbers:", squared_number)
print("Even Numbers:", even_number)
