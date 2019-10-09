

def solution(A):
    cntr=0
    temp=[]
    triplets=[]
    if (len(A)<3) :
        return 0
    for i in range(0,N-2):
        for j in range(i+1,N-1):
            for k in range(j+1,N):
                temp=[A[i],A[j],A[k]]
                if (temp not in triplets):
                    triplets.append(temp)
                    cntr=cntr+1
    return cntr                    


A=[2,2,1,2,2]
N=5  
lysh=solution(A)
print (lysh)


