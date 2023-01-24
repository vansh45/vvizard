# longest common prefix

def longestCommonPrefix( strs):
        for i in range(len(strs[0])):
            sym = strs[0][i]
            print( "sym is ",sym)
            for s in strs:
                try:
                    if s[i] != sym:
                        return strs[0][:i]
                except IndexError:
                    return strs[0][:i]
        return strs[0]

l =['cat','calf','cap']

print(longestCommonPrefix(l))