#include <stdio.h>
typedef struct a
{
    long long height, start, end;
}C;
 
typedef struct z
{
    long long height, t;
}person;
 
C crew[100001] = {0};
long long c_size = 0;
 
void enqueue(long long height, long long start, long long end)
{
    crew[c_size].height = height;
    crew[c_size].start = start;
    crew[c_size].end = end;
    c_size++;
}
 
int check(person z)
{
    int flag = 1;
    for(long long i = 0; i < c_size; i++)
    {
        if(z.t <= crew[i].end)
        {
            if(z.t >= crew[i].start)
            {
                if(z.height <= crew[i].height)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    return flag;
}
 
int main()
{
    long long hour, c, q, tallest = 0;
    scanf("%lld %lld %lld", &hour, &c, &q);
    
    while(c--)
    {
        long long height, start, end;
        scanf("%lld %lld %lld", &height, &start, &end);
        if(height > tallest)
        {
            tallest = height;
        }
        enqueue(height, start, end);
    }
    
    while(q--)
    {
        person z;
        scanf("%lld %lld", &z.height, &z.t);
        if(z.height > tallest)
        {
            printf("YES\n");
        }
        else 
        {
            int flag = check(z);
            if(flag)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
