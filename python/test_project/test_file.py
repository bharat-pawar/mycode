import utils
import parsers
from smtplib import SMTP
def test_parsers():
    parsers.parse_xml()

def demo():
    print("This is demo")
    a = {2,3,4,5,6,4,4,4}
    print(a)
    a = [1,2,3,4,5,6,3,2,3,4]
    for each in a:
        print(each)

    utils.calculate_da()
    utils.calculate_hra()

    #Exception handling
    a = 10
    b = 0
    try:
        a/b
        print("new line")
    except Exception as e:
        print("Oops excpetion occured : ", e)
    finally:
        print("I will always execute")
    print("after exception")

demo()
test_parsers()