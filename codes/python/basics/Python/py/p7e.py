


def count_letters(text ):
    result ={}
    r = text.split()
    nn =["hu","me","be"]
    for word in r:
        if word not in nn:
            if word not in result:
                result[word]=0
            result[word] +=1
    return result
s ="dayscholar hu me be kya ukhad lega"

print(count_letters(s))