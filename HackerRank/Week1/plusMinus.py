#!/bin/python3

import math
import os
import random
import re
import sys



def plusMinus(arr):
     CountPos=0
     CountNeg=0
     Countzero=0
     length=len(arr)
     for i in range (length):
        if arr[i] >0:
            CountPos+=1
        elif arr[i]==0:
            Countzero+=1
        else:
            CountNeg+=1
     print(round(CountPos/length,6))
     print(round(CountNeg/length,6))
     print(round(Countzero/length,6))
           
        
if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
