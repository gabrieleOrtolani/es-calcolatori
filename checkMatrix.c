/*verifica se , per ogni riga di A, esiste una colonna di B i cui elementi sono uguali a quelli della riga di A*/
#include <stdio.h>

int main(void)
{
    int c1=1,c2=1;
    int n[2][5]={{1,2,3,7,12},{4,5,6,8,13}};
    //int m[3][2]={{4,1},{5,2},{6,3}};
    int m[5][2]={{1,4},{2,5},{3,6},{7,8},{12,13}};
    for(int y=0;y<2;y++){
    for(int x=0;x<5;x++)
    {
        c1=c1&&(m[x][y]==n[y][x]);
        c2=c2&&(m[x][y]==n[1-y][x]);
    }
    if (!c1&&!c2)
    	break ;
}

    if(c1||c2)printf("condizione soddisfatta\n");
    else printf("condizione non soddisfatta\n");
    return 0;
}


