# function to calculate substrings
def substr(s):
    l = []
    n = len(s)
    for i in range(2**n - 1):
        temp = ""
        # if n = 3
        # i = 0, 1, 2, 3.. 7
        for j in range(n):
            if(i & 1<<j):
                temp+=s[j]
        
        if temp not in l:
            l.append(temp)

    return l

def count_substr(substrings, pat):
    c=0
    for i in substrings:
        if(i == pat):
            c+=1
    return c


def calc(text, pat):
    max_count = 0
    for i in range(len(pat)):
        for j in range(len(text)+1):
            temp_text = text[:j] + pat[i] + text[j:]
            # find substrings
            substrings = substr(temp_text)
            max_count = max(max_count, count_substr(substrings, pat))
    return max_count


text = input()
pat = input()
print(calc(text, pat))
