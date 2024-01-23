import math
while True:
    try:
        read = input().split()
        n = int(read[0])
        m = int(read[1])
        if n > m:
            print("1")
        else:
            print(int(((1-2*n)+math.sqrt((2*n-1)**2+8*m))/2)+1)
    except:
        break
