#include <stdio.h>

int solution(int A[],int B[],int N,int F){
	int i,j,cntrFE=0,mustToGiveFE=0,sum1=0,sum2=0;
	// -> greedy
	for (i=0;i<N;i++){
		//an den exo fullarei se frontend devs
		if (cntrFE<F){
			mustToGiveFE=F-cntrFE;
			if (mustToGiveFE<(N-i)){
				//free choice..dose to max
				if (A[i]>=B[i]){
					sum1+=A[i];
					cntrFE++;
				}else{
					sum1+=B[i];
				}
			}else if (mustToGiveFE==N-i){
				//osoi apomenoun assign them frontend
				for (j=N-1-i;j<N;j++){
					sum1+=A[j];
				}
				break;
			}
		}else if (cntrFE==F){
			    //osoi apomenoun assign them backend
				for (j=N-1-i;j<N;j++){
					sum1+=B[j];
				}
				break;
		}
	}
	//<- greedy
	cntrFE=0;
	for (i=N-1;i>=0;i--){
		//an den exo fullarei se frontend devs
		if (cntrFE<F){
			mustToGiveFE=F-cntrFE;
			if (mustToGiveFE<i+1){
				//free choice..dose to max
				if (A[i]>=B[i]){
					sum2+=A[i];
					cntrFE++;
				}else{
					sum2+=B[i];
				}
			}else if (mustToGiveFE==i+1){
				//osoi apomenoun assign them frontend
				for (j=i;j>=0;j--){
					sum2+=A[j];
				}
				break;
			}
		}else if (cntrFE==F){
			    //osoi apomenoun assign them backend
				for (j=i;j>=0;j--){
					sum2+=B[j];
				}
				break;
		}
	}
	if (sum1>=sum2)
		return sum1;
	else 
		return sum2;
}


