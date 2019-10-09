#include <stdlib.h>

int solution(int A[],int N){
	int i,j,cntr=0;
	//for each disk
	for (i=0;i<N-1;i++){
		//if d(C1,C2)<= R1+R2 then they intersect
		for (j=i+1;j<N;j++){
			if (abs(i-j)<=(A[i]+A[j])) cntr++;
		}
	}
	return cntr;
}

