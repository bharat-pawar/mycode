file = open("D:/Workplace/ESF_H3SZSAdpVer_003.001_BP/ESF_H3SZSADP/ver/result/Summary/req_tracing_sas_results.csv")
line = file.readline()
lits_of_tokens = line.split(';')
expected_count =

while(line):
    line = file.readline()
    list = line.split(";")
    if(list.count() != expected_count):
        print(line.count())
    print(list)