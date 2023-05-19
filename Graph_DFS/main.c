//
//  main.c
//  Graph_DFS
//
//  Created by Mustafa UZUN on 19.05.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int array[6][6];
bool visited[6];

void readMatrix(){
    
    int i = 0;
    FILE *fp = fopen("matrix.txt", "r");
    if(fp == 0) {
        perror("fopen");
        exit(1);
    }
    while(fscanf(fp, "%d %d %d %d %d %d",
                 
                 &array[i][0],
                 &array[i][1],
                 &array[i][2],
                 &array[i][3],
                 &array[i][4],
                 &array[i][5]
                 ) != EOF)
    {
        i = i + 1;
    }
    fclose(fp);
}


int main(int argc, const char * argv[]) {
    readMatrix();
    return 0;
}
