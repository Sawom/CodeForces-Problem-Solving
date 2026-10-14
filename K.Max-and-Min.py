first, second, third = map(int, input().split() )

min = first
max = first

if (second < min ):
    min = second
if (third < min):
    min = third

if (second > max):
    max = second
if (third > max):
    max = third

print(min, max)