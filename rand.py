import random

def generate(numRandoms):
    for i in range(numRandoms):
        num = random.randint(0,1001)
        print num, ",",

generate(32)
