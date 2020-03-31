import pickle
#list = [1,2,3,4,5]
#outfile = open("myfile.ser",'wb')
#pickle.dump(list,outfile)

infile = open("myfile.ser",'rb')
data = pickle.load(infile)
print(data)

