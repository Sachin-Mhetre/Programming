phoneBook = {}

def add_num(phoneBook,n):
    for i in range(n):
        name = input("Enter the name of person : ")
        num = input("Enter the number : ")
        if len(num)!=10 or num[0]=='0':
            print("Entered number is wrong")
            num = input("Enter the number : ")
        num = int(num)
        phoneBook[name] = num
    return "Phone Numbers Saved!"  
    
def Search(phoneBook, n):
    SearchNum = int(input("Enter number to Search Person: "))
    for key, value in phoneBook.items():
        if(SearchNum == value):
            return f'Person name: {key}'
    return "Person Not found!"

n = int(input("Enter how many number you want to add :"))
print(add_num(phoneBook,n))
print(Search(phoneBook, n))
