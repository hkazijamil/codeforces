def answer(n):
    import math
    n=int(n)
    u=-1
    if n == 1 or n == 2:
        u = -1
    elif n % 3 != 0:
        extra = int(n % 3)
        endloop = 1
        v = int(n)
        while (v):
            div = math.pow(10, endloop)

            if ((v % 10) == extra):
                v = v / 10
                u = (int(n / div)*(div/10)) + (n % math.pow(10, (endloop - 1)))
                break
            elif ((v % 10) - extra) % 3 == 0:
                v = v / 10
                u = (int(n / div)*(div/10)) + (n % math.pow(10, (endloop - 1)))
                break
            v = v / 10
            endloop += 1
    else:
        u = n
    n = u
    print(int(n))


if __name__ == "__main__":
    import fileinput

    f = fileinput.input()

    while (True):
        S = f.readline().strip()
        if S == "":
            break
        # import time
        # start_time = time.time()
        answer(int(S))
        # print int(solution)
        # print("--- %s seconds ---" % (time.time() - start_time))
