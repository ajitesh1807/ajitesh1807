def has_two_digits(num):
    if -99 <= num <= -10 or 10 <= num <= 99:
        return True
    return False
num = int(input("Enter a number: "))
if has_two_digits(num):
    print("The number has two digits.")
else:
    print("The number does not have two digits.")  
