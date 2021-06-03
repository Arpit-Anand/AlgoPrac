#Arrange 0,1,2 in ascending order withput using sorting algorithm

class Solution:
    def sort012(self,arr,n):
        count0=0
        count1=0
        count2 = 0
        for i in arr:
            if(i == 0):
                count0 += 1
            elif(i == 1):
                count1 +=1
            else:
                count2 +=1
        i = 0
        while(count0>0):
            arr[i] = 0
            i += 1
            count0 -= 1
        while(count1 >0):
            arr[i] = 1
            i +=1
            count1 -=1
        while(count2>0):
            arr[i]  = 2
            i += 1
            count2 -= 1
 
