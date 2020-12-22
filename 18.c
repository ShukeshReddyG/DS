#include <stdio.h>
 
long long int fact(long long int n){
	if(n<2)return n;
	else return n*fact(n-1);
}
 
int main(){
	long long int b1, g1;
	scanf("%lld %lld", &b1, &g1);
 
	int arrangements=0;
	if(g1>=b1)printf("0");
	else if(b1<3)printf("%d", b1);
	else {
		int b=11;int g=11;
		int dp[b+1][g+1];
		for(int i=0;i<=b;i++){
			for(int j=0;j<=g;j++){
				if(j==0)dp[i][j]=1;
				else dp[i][j]=0;
			}
		}
		dp[0][0]=0;
		for(int i=1;i<=b;i++){
			for(int j=1;j<i;j++){
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		long long int ans = 1;
		ans = ans*dp[b1][g1]*fact(b1)*fact(g1);
		printf("%lld", ans);//*fact(b)*fact(g));
	}
}