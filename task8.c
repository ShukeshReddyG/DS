#include<stdio.h>
#include<malloc.h>
typedef struct {
    int x;
    int y;
}node;
int T;
int arr[1000][1000];
int N, M;
int ans;
int head, tail, max;
node *n;
void add_Neighbours(int i, int j){
    // -1, -1
    if (i-1 >=0 && j-1 >=0 && arr[i - 1][j - 1] == 1){
        n[tail].x = i-1;
        n[tail].y = j - 1;
        arr[i - 1][j - 1] = 2;
        tail++;
    }
    // -1, 0
    if (i-1 >= 0 && arr[i - 1][j] == 1){
        n[tail].x = i - 1;
        n[tail].y = j;
        arr[i - 1][j] = 2;
        tail++;
    }
    // -1, +1
    if (i-1 >= 0 && j+1<M && arr[i - 1][j + 1] == 1){
        n[tail].x = i - 1;
        n[tail].y = j + 1;
        arr[i - 1][j + 1] = 2;
        tail++;
    }
    // 0, -1
    if (j-1 >=0 && arr[i][j - 1] == 1){
        n[tail].x = i;
        n[tail].y = j - 1;
        arr[i][j - 1] = 2;
        tail++;
    }
    // 0, +1
    if (j+1 <M && arr[i][j + 1] == 1){
        n[tail].x = i;
        n[tail].y = j + 1;
        arr[i][j + 1] = 2;
        tail++;
    }
    // +1, -1
    if (i+1 <N && j-1 >=0 && arr[i + 1][j - 1] == 1){
        n[tail].x = i + 1;
        n[tail].y = j - 1;
        arr[i + 1][j - 1] = 2;
        tail++;
    }
    // +1, 0
    if (i+1 < N && arr[i + 1][j] == 1){
        n[tail].x = i + 1;
        n[tail].y = j;
        arr[i + 1][j] = 2;
        tail++;
    }
    // +1, +1
    if (i+1 < N && j+1 < M && arr[i + 1][j + 1] == 1){
        n[tail].x = i + 1;
        n[tail].y = j + 1;
        arr[i + 1][j + 1] = 2;
        tail++;
    }
}
void connected(){
    int i, j, a, b;
    int count = 0;
    head = 0; tail = 0;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++){
            if (arr[i][j] == 0)
                continue;
            else if (arr[i][j] == 1){
                arr[i][j] = 2; //visited
                add_Neighbours(i, j);
                count++;
                a = i;
                b = j;
                while (head < tail){
                    count++;
                    a = n[head].x;
                    b = n[head].y;
                    add_Neighbours(a, b);
                    head++;
                }
                if (max == 0)
                    max = count;
                else if (count > max)
                    max = count;
                ans++;
                count = 0;
                head = tail = 0;
            }
        /*  printf("\n----- %d %d %d %d %d ------ \n", ans, ans, ans ,ans, ans);
            for (int a = 0; a < N; a++){
                for (int b = 0; b < M; b++){
                    if (arr[a][b] == 2)
                        printf("%d ", arr[a][b]);
                    else
                        printf(" ");
                }
                printf("\n");
            }*/
        }
    printf("%d %d\n", ans, max);
    ans = 0;
    max = 0;
}
void scan_data(){
    int i, j, k;
    scanf("%d", &T);
    for (k = 0; k < T; k++){
        scanf("%d %d", &N, &M);
        for (i = 0; i < N; i++){
            for (j = 0; j < M; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        n = (node *)malloc(sizeof(node) *N *M);
        connected();
        free(n);
    }
}
int main(){
    scan_data();
    scanf("%d", &T);
    return 0;
}
