n = -1
while n < 0:
    n = int(input("Enter the number upto which terms should be generated: "))
    if n < 0:
        print("Negative numbers not allowed!")

print("\nseries generated: ", end="")
sum = 0
i = 1
while i <= n:
    sum += i
    print(i, end=" ")
    i *= 2

print("\n\nsum of above series: ", sum)
