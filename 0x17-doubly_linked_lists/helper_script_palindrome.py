def is_palindrome(number):
    str_number = str(number)
    return str_number == str_number[::-1]

maxx = 0
for i in range(100, 999, 1):
    for j in range(100, 999, 1):
        if is_palindrome(i * j) and i * j > maxx:
            maxx = i * j
with open('102-result', 'w') as file:
    file.write(str(maxx))
