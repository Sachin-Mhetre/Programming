
def reverse(num):
    rev = 0
    while num > 0:
        last = num % 10
        rev = rev * 10 + last
        num = num // 10
    return rev

num = int(input("Enter number: "))
rev = reverse(num)
print("Reversed:", rev)
