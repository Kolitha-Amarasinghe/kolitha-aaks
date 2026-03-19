def subject():
    L = []
    for i in range(2):
        n = int(input("Enter Your subject marks: "))
        L.append(n)
    return L

def AVG(p):
    T = 0
    for i in range(len(p)):
        T += p[i]
    return T / len(p)   # calculate average

def decision(q):
    for i in range(len(q)):
        if q[i] >= 50:
            print("Subject", i+1, "is Pass")
        else:
            print("Subject", i+1, "is Fail")

x = subject()
print("Marks:", x)

avg = AVG(x)
print("Average:", avg)

decision(x)

    

