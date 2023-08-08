
def display(n):
    months = ["January", "February", "March", "April", "May", "June",
              "July", "August", "September", "October", "November", "December"]
    if 1 <= n <= 12:
        print("Month:", months[n - 1])
    else:
        print("Invalid month number!")

n = int(input("Enter a number between 1 and 12: "))
displayMonth(n)
