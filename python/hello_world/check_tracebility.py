"""
@file      check_tracebility.py

@brief     checks integrity of tracebility documents

@author    bpwr Bharat Pawar  <bharat.pawar@siemens.com>

@par        Verification:
@par        Validation:
@par        Code-Review:
@note       COPYRIGHT (c) Siemens Mobility GmbH 2020
*/
"""
import sys

def check_tracebility(file):
    """
    checks if each line is valid in tracebility documents
    """
    line = file.readline()
    list_of_tokens = line.split(';')
    expected_count = len(list_of_tokens)
    line_no = 1
    correction_count = 0;
    while line:
        line = file.readline()
        tokens = line.split(";")
        line_no = line_no + 1
        if(len(tokens) != expected_count and line):
            print(line_no, line)
            correction_count = correction_count + 1
    print("Total corrections : ", correction_count)

file_name = open(sys.argv[1])
check_tracebility(file_name)
