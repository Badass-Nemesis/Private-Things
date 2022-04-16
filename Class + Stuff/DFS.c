// #include <stdio.h>

// int AdjMat[20][20], visited[20];
// void dfs_visit(int, int);

// int main()
// {
//     int iter, jter, v_count, e_count;

//     printf("Enter total number of vertices in graph");
//     scanf("%d", &v_count);

//     for (iter = 1; iter <= v_count; iter++)
//     {
//         for (jter = 1; jter <= v_count; jter++)
//             AdjMat[iter][jter] = 0;
//         visited[iter] = 1;
//     }

//     for (iter = 1; iter <= v_count; iter++)
//     {
//         for (jter = 1; jter <= v_count; jter++)
//             if (iter != jter)
//             {
//                 printf("If node %d and node %d are connected, please enter 1, else 0 :", iter, jter);
//                 scanf("%d", &AdjMat[iter][jter]);
//             }
//     }

//     for (iter = 1; iter <= v_count; iter++)
//     {
//         if (visited[iter] == 1)
//             dfs_visit(iter, v_count);
//     }

//     return 0;
// }

// void dfs_visit(int node, int v_count)
// {
//     int iter;
//     visited[node] = 2;
//     printf("Node Visited %d\n", node);

//     for (iter = 1; iter <= v_count; iter++)
//     {
//         if (AdjMat[node][iter] != 0)
//         {
//             if (visited[iter] == 1)
//                 dfs_visit(iter, v_count);
//         }
//     }

//     visited[node] = 3;
// }

#include<stdio.h>
#include<conio.h>

int main()
{
    // for(int i = 0, i<100;i++)
    // {
    //     printf("i");
    // }
    int a=7;
    int b=5;
    // // int c= a+b; 
    // printf("%d",a+b);
    if(a%2==0 || b%2==0){
        printf("number is even");
    }
    else{
        printf ("number is odd");
    }

}
    