def hamdist(str1, str2,prevMin=None):
    diffs = 0
    if len(str1) != len(str2):
        return max(len(str1),len(str2))
    for ch1, ch2 in zip(str1, str2):
        if ch1 != ch2:
            diffs += 1
            if prevMin is not None and diffs>prevMin:
                return None
    return diffs 

dmin=len(trans[0])
for i in xrange(len(trans)):
    for j in xrange(i+1,len(trans)):
            dist=hamdist(trans[i][:-1], trans[j][:-1])
            if dist is not None and dist < dmin:
                    dmin = dist