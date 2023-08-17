def TransformString(str1, str2):
    if(str1 == str2):
        return 0

    cpystr1 = str1
    cpystr2 = str2
    if(sorted(cpystr1) != sorted(cpystr2)):
        return -1

    ans = 9999999
    curr_count = 0
    tmp = str1 + str2
    index = tmp.find(str1)
    curr_count += index
    ans = min(curr_count, ans)
    return ans


print(TransformString("hello", "hleol"))
