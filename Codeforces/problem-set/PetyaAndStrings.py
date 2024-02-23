import string

def arrangeStrings(str1, str2):

    for a, b in zip(str1.lower(),str2.lower()):
        idxA = string.ascii_lowercase.index(a)
        idxB = string.ascii_lowercase.index(b)
        # print(f"Index of A: {str(idxA)} \n Index of B: {str(idxB)}")
        if a == b:
            # print("Iguales")
            continue
        elif max(idxA, idxB) == idxA:
            # print("Str 1 goes before Str2")
            return 1
        else:
            # print(f"Str 2 goes before Str1")
            return -1
    
    return 0


if __name__ == "__main__":
    m = input()
    n = input()
    x = arrangeStrings(m, n)
    print(x)