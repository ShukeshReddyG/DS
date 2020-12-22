 #include <stdio.h> 
#include <stdlib.h> 
typedef struct node 
{ 
int key; 
struct node* next; 
} 
node; 
node* adj[10001]; 
int visited[10001], roads[10001]; 
node* create_node() 
{ 
node* new_node = (node*)malloc(sizeof(node)); 
if (!new_node) 
{ 
perror("malloc failed"); 
exit(1); 
} 
new_node->key = -1; 
new_node->next = NULL; 
return new_node; 
} 
void ll_insert(node** first, int key) 
{ 
node* new_node = create_node(); 
new_node->key = key; 
new_node->next = *first; 
*first = new_node; 
} 
int DFS(int src, int n) 
{ 
if (src == n) 
{ 
return 1; 
} 
if (visited[src]) 
{ 
return roads[src]; 
} 
visited[src] = 1; 
int ans = 0; 
node* p = adj[src]; 
while (p) 
{ 
ans += DFS(p->key, n); 
p = p->next; 
} 
roads[src] = ans; 
return ans; 
} 
int main() 
{ 
int n, x, y; 
scanf("%d", &n); 
scanf("%d%d", &x, &y); 
while (x != 0 && y != 0) 
{ 
ll_insert(&adj[x], y); 
scanf("%d%d", &x, &y); 
} 
int roads = DFS(1, n); 
printf("%d\n", roads); 

return 0; 
}
