try:
    while True:
        amount = int(input())
        numbers = input().split()
        for i in sorted([int(x) for x in numbers]):
            print(i, end = " ")
        print()
except:
    pass
