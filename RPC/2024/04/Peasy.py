'''
Link: https://redprogramacioncompetitiva.com/contests/2024/04
Problem: A
'''
import math 
a, b = map(int, input().split())
if not a or not b: print('H')
elif a < math.ceil(b/2): print('H')
else: print('E')