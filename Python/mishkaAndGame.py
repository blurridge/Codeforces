cases = int(input())
aScore = 0
bScore = 0
for i in range (cases):
    a, b = input().split()
    if a > b:
        aScore+=1
    elif b > a:
        bScore+=1
if aScore > bScore:
    print("Mishka")
elif bScore > aScore:
    print("Chris")
else:
    print("Friendship is magic!^^")