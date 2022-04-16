#include <stdio.h>
#include <conio.h>

struct Edge
{
    int src;
    int dest;
    int wt;
};

void sort_asc(struct Edge edge[], int count)
{
    struct Edge temp_edge;
    int iter, jter, t_wt;

    for (iter = 2; iter <= count; iter++)
    {
        temp_edge = edge[iter];
        t_wt = edge[iter].wt;
        jter = iter - 1;
        while (jter > 0 && edge[jter].wt > t_wt)
        {
            edge[jter + 1] = edge[jter];
            jter--;
        }
        edge[jter + 1] = temp_edge;
    }
}

int G_find(int parent[], int node)
{
    if (parent[node] > -1)
        return parent[node] = (G_find(parent, parent[node]));
    else
        return node;
}

void G_union(int parent[], int p_src, int p_dest)
{
    if (parent[p_src] > parent[p_dest])
    {
        parent[p_dest] += parent[p_src];
        parent[p_src] = p_dest;
    }
    else
    {
        parent[p_src] += parent[p_dest];
        parent[p_dest] = p_src;
    }
}

int main()
{
    int parent[20], iter, count, MST_count, p_src, p_dest, tot_wt;
    struct Edge edge[20], MST[20], next_edge;

    printf("Enter total number of edges in graph : ");
    scanf("%d", &count);

    for (iter = 1; iter <= count; iter++)
    {
        printf("Enter Source Node for edge %d : ", iter);
        scanf("%d", &edge[iter].src);
        printf("Enter Destination Node for edge %d : ", iter);
        scanf("%d", &edge[iter].dest);
        printf("Enter Weight for edge %d : ", iter);
        scanf("%d", &edge[iter].wt);
    }

    sort_asc(edge, count);

    for (iter = 0; iter <= count; iter++)
        parent[iter] = -1;

    MST_count = 0;

    for (iter = 1; iter <= count; iter++)
    {
        next_edge = edge[iter];

        p_src = G_find(parent, next_edge.src);
        p_dest = G_find(parent, next_edge.dest);

        if (p_src != p_dest)
        {
            G_union(parent, p_src, p_dest);
            MST[++MST_count] = next_edge;
        }
    }

    printf("MST edges\n");
    tot_wt = 0;
    for (iter = 1; iter <= MST_count; iter++)
    {
        printf("Source Node, Dest Node, Weight: %c-%c %d\n", MST[iter].src+'A'-1, MST[iter].dest+'A'-1, MST[iter].wt);
        tot_wt = tot_wt + MST[iter].wt;
    }
    printf("Total MST weight %d\n", tot_wt);

    return 0;
}