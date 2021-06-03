#This program is used to find maximum and minimum element in an array

def getMinMax( a, n):
    
    max=a[0]
    min=a[0]
    for i in a:
        min = min if min < i else i
        max = max if max > i else i
    p =[min,max]
    return p
