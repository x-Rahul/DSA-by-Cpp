from cgi import print_directory
from cmath import pi
import math
import time

cycles = 3
print(pi)
def sin(x):
    return math.sin(x)

x = 0

while x < (cycles * 2 * pi):
    bar = int (20*sin(x)) # -20 to 20
    x += 0.4
    print((21+bar)* '*') # shift by 21 to grt positive value
    time.sleep(0.03)