num=int(input())

for i in range(num):
    print(" "*i,end="")
    print("*"*(2*(num-i)-1))