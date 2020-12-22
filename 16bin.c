#include <stdio.h>
 
int top=-1;
 
void push(char stack[],char bit){
	top++;
	stack[top]=bit;
}
 
void pop(){
	top--;
}
 
void check(char S[],char stack[]){
	int i=0;
 
	//traverse string and check for same consecutive bits
	while(S[i]!='\0'){
		if(top!=-1 && stack[top]==S[i]){
			pop();
		}
		else{
			push(stack,S[i]);
		}
		i++;
	}
	
	//print result
	if(top==-1){
		printf("KHALI\n");
	}
	else{
		i=0;
		while(i<=top){
			printf("%c",stack[i]);
			i++;
		}
		printf("\n");
	}
}
 
int main(){
	char stack[100000];
	char S[100000];
	int T;
	scanf("%d",&T);
	while(T--){
		top=-1;
		scanf("%s",S);
		check(S,stack);
	}
	return 0;
}