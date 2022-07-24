# cohen nichols
# final project
# for this project i will be comparing dynamic memory, parameter passing
# and recursion in c++ and python

# in python those topics would look like

# start with recurrsion
# fibbonacci sequence 
def fib(x):
    if x <= 2:
        return 1
    else:
        return fib(x-1) + fib(x-2)
#################################################################################################
# pass by object reference
def add(*a):
    totalSum: int = 0
    for num in a:
        totalSum += num
    print("the sum is", totalSum)
#################################################################################################

def main():
    print("showing recursion")
if __name__ == "__main__":
    main()
    
    num = int(input("enter a number to see the value of the fibonacci sequence until then: "))
    #num = 10
    if num <= 0:
        print("enter a positive number: ")
    else:
        print("Fib sequence:")
        for i in range(num):
            print(fib(i))
 
 #################################################################################################  
    print("\n")
    # showing pass by object reference
    print("showing pass by object reference")
    a = int(input("enter a value: "))
    b = int(input("enter a value: "))
    add(a,b)
#################################################################################################

print("\n")
print("showing dynamic memory")
import random
mem = int(input("enter a number for heap size: "))
randNum = random.sample(range(1,100),mem)
print(randNum)
