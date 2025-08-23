#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'waiter' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY number
#  2. INTEGER
def isprime(n):
    for j in range(2,int(n/2)+1):
        if n%j==0:
            return False
    return True

def waiter(number, q):
    p=[]
    for n in range(2,10000):
        if (isprime(n)):
            p.append(n)
       
  
    A=[]
    B=[]
    ans=[]
    for i in range(q):
        while(number):
            value=number.pop()
            if value%p[i]==0:
                B.append(value)     
            else:
                A.append(value)
        while(B):
            ans.append(B.pop())
        number=A
        A=[]
    while(number):
        ans.append(number.pop())
    return ans
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    q = int(first_multiple_input[1])

    number = list(map(int, input().rstrip().split()))

    result = waiter(number, q)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
