#include <stdio.h>
#include<string.h>
#define MAX 100
 
int main(){
	int t,x,arr[10000],pos=0,count,r,flag,f=-1,re=-1;
	char a[100],b[100]="E";
	scanf("%d",&t);
	
	while(t--){
	    scanf("%s ",a);
	    if(strcmp(a,b)==0){
	        scanf("%d",&x);
	        if(re<MAX){
	            if(f==-1){
	                f=0;
	            }
	           arr[++re]=x;
	                printf("%d\n",(re-f)+1);
	            
	        
	        }
	    }
	   else{
	      if(f>re||f==-1||re==-1){
	          printf("-1 0\n");
	      }
	      else{
	          printf("%d %d\n",arr[f],(re-f));
	          f=f+1;
	      }
	        
	    }
	}
	
	
}