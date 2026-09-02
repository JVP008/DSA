def romanToInt(s: str) -> int:
    summ = 0
    d = {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
    for i in range(len(s)-1):
            if d[s[i]] >= d[s[i+1]]:
                summ+= d[s[i]]
            else:
                summ-= d[s[i]]
    summ+=d[s[i]]
           
    return summ

print(romanToInt("LVIII")) #-> 58