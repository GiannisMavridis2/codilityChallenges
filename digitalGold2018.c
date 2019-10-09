#include <stdio.h>

int solution(int N, int M, int X[], int Y[], int K){
	int j,i,left,right,up,down,ways=0;
	for (j=1;j<=M-1;j++){
		left=0;
		right=0;
		for(i=0;i<=K-1;i++){
			if (X[i]<j){
			    left++;
			}else{
				right++;
			}
		}
		if (left==right) ways++;
	}
	for (i=1;i<=N-1;i++){
		up=0;
		down=0;
		for(j=0;j<=K-1;j++){
			if (Y[j]<i){
			    up++;
			}else{
				down++;
			}
		}
		if (up==down) ways++;
	}
	return ways;
}



int main(){
	int N=5,M=5,K=4;
	int X[4]={0,4,2,0};
	int Y[4]={0,0,1,4};
	int lysh;
	lysh=solution(N,M,X,Y,K);
	printf("%d",lysh);
	return 0;
}