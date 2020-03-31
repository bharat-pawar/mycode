

list = [1, 2, 100, 200, 400, 900, 50]

def print_numbers(numbers, filters):
    print("****** numbers ******")
    for n in numbers:
         if(filters(n)):
              print(n)

def less_than_100(num):
    return num < 100

def more_than_100(num):
    return num > 100

print_numbers(list, more_than_100)
print_numbers(list, less_than_100)

