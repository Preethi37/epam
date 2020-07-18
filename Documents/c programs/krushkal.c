#define INFINITY 99999
int i,j,x,y,z,e,u,w;
int** initialize_cost(int n) {
    int **cost = (int**) calloc(n + 1, sizeof(int));
    for( i = 0; i <= n; i++)
        cost[i] = (int*) calloc(n + 1, sizeof(int));
    for( i = 1; i <= n; i++)
        for( j = 1; j <= n; j++)
            if(i != j)
                cost[i][j] = INFINITY;
    return cost;
}

void update_cost(int **cost, int e) {
    printf ( "Enter %d edges",e);
   
    for( i = 0; i < e ; i++) {
       
        //printf("enter edges with their cost\n");
        scanf("%d%d%d",&x,&y,&z);
        cost[x][y] = z;
    }
}

int find(int *dist, int *visited, int n) {
    int i, min;
    for(i = 1; i <= n; i++)
        if(visited[i] != 1) {
            min = i; break;
        }
    for(; i <= n; i++) {
        if(visited[i] != 1 && dist[i] < dist[min])
            min = i;
    }
    return min;
}

void dijkstras(int **cost, int *visited, int *dist, int n, int sv) {
    for(i = 1; i <= n; i++) {
        dist[i] = cost[sv][i];
    }
    visited[sv] = 1;
    for( i = 2; i <= n; i++) {
         u = find(dist, visited, n);
        visited[u] = 1;
        for( w = 1; w <= n; w++) {
            if(cost[u][w] != INFINITY && visited[w] != 1) {
                if(dist[w] > dist[u] + cost[u][w])
                    dist[w] = dist[u] + cost[u][w];
            }
        }
    }
}

int main() {
int n,e,**cost,*visited,*dist,sv;
printf("emter no of vertices");
scanf("%d",&n);
    cost = initialize_cost(n);
   printf("enter no of edges");
   scanf("%d",&e);
    update_cost(cost, e);

 visited = (int*) calloc(n + 1, sizeof(int));
    dist = (int*) calloc(n + 1, sizeof(int));
    printf("enter starting vertex:");
    scanf("%d",&sv);

    dijkstras(cost, visited, dist, n, sv);
    for(i = 1; i <=n; i++) {
        if(i != sv) {
            printf("%d : %d",i,dist[i]);
            printf("\n");
        }
    }
    return 0;
}



