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

def main():
    print("start of main")
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
    
    print("\n")
    # showing pass by object reference
    print("showing pass by object refernce")
    a,b = input("enter 2 values: ").split()
    
    print(f'the sum of these numbers is {a,b}')
