#include <stdio.h>
 
int main()
{   int top=-1;
int t,ch,no,j,m,i,n;
int a[10000]={0};
    scanf("%d\n",&t);
    while(t--)
    {scanf("%d ",&ch);
    if(ch==1){
        scanf("%d\n",&n);
        a[++top]=n;
    }
    else if(ch==2)
    {
        scanf("%d %d\n",&n,&m);
        
        for(i=0;i<n;i++)
        {a[++top]=m;
        
        }
        
        
        }
        
        
    
    else if(ch==3)
    {  no=0;
    if(top>=0)
        {no=a[top--];
    
        printf("%d\n",no);
        }
    else
    printf("0\n");
        no=0;
        
    }
    else if (ch==4)
    {no=0;
        scanf("%d\n",&n);
        
        if(n<=top+1)
        {for(i=0;i<n;i++)
        {if(top>=0)
        no=no+a[top--];
        
        
        }
        }
        else
        {
            while(top>=0)
            no=no+a[top--];
            
            
        }
    
        
        
        printf("%d\n",no);
        }
        
    
    else if(ch==5)
    {no=0;
    j=top;
    while(j>=0)
    {no=no+a[j];
    j=j-1;
    }
    
    printf("%d\n",no);
    no=0;
    
    }
        
    }
    return 0;
}