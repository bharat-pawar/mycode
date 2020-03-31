import sys
filename = sys.argv[1]
#dict = {"\"helicopter\"":0, "\"small_airport\"":0, "\"medium_airport\"":0, "\"large_airport\"":0, "\"closed\"":0, "\"heliport\"":0}
#print(dict)

helicopter_list = []
small_airport_list = []
file = open(filename)
row = file.readline()

while(row):
    row = file.readline()
    list = row.split(",")
    type = list[2]
    if type == "\"helicopter\"":
        helicopter_list.append("")
    elif type == "\"small_airport\"":
        small_airport_list.append("")

print("Number of helicopters",len(helicopter_list))
print("Number of small airports",len(small_airport_list))






