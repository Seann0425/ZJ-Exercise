data = int(input())
for i in range(0, data):
    digitSum = 1
    num = int(input())
    if num is 0:
        digitSum = 0
    while num > 0:
        digitSum *= num % 10
        num //= 10
    print(digitSum)
