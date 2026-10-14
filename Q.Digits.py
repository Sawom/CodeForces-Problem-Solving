test = int(input())

for i in range(test):
    numbers = int(input())

    if numbers == 0:
        print(0)
        continue

    while numbers  > 0:
        print(numbers%10, end=' ')
        numbers = numbers // 10
    print()