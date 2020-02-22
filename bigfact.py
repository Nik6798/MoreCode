import math
import os
import random
import re
import sys

# Complete the extraLongFactorials function below.


# def extraLongFactorials(n):
#     if n < 2:
#         return 1
#     return n*extraLongFactorials(n-1)


def extraLongFactorials(n):
    result = n
    for i in range(2, n):
        result *= i
    return result


print(extraLongFactorials(5))
