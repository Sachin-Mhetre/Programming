def valid_date(year, month, day):
    if (year < 1) or (month < 1 or month > 12) or (day < 1):
        return False
        
    max_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    
    if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
        max_days[2] = 29
        
    if day <= max_days[month]:
        return True
        
    return False

year = int(input("Enter the year: "))
month = int(input("Enter the month (1-12): "))
day = int(input("Enter the day: "))

if valid_date(year, month, day):
    print(f"{year}-{month:02d}-{day:02d} is a valid date.")
else:
    print(f"{year}-{month:02d}-{day:02d} is not a valid date.")
