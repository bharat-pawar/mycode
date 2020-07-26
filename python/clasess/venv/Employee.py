class Employee:
    def __init__(self, username, password):
        print("Constructor")

    def __del__(self):
        print("Desctructor")

    def __str__(self):
        print("Employee")

e = Employee('aaa','bbb')
print(Employee)
print(e)
