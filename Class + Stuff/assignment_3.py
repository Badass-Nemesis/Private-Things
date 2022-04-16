from typing import OrderedDict


o=e=0
x=eval(input('Enter 10 integral values : '))
for i in x:
    if (i%2)==0:
        e=e+i
print ('Sum of even is: ', e)
for i in x:
    if (i%2)!=0:
        o=o+i
print ('Sum of odd is: ', o)