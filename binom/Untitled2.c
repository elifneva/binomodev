
#include <stdio.h>
int main(int argc,char*argv[])
{
    int ndegeri;
    printf("binom acilimi(n)degeri");
    scanf("%d",&ndegeri);
    int nbinomacilimi[ndegeri+1][ndegeri+1];
    for (int i=0;i<ndegeri+1;i++)
{
    nbinomacilimi[i][i]=0;
    nbinomacilimi[i][0]=1;
}
    for (int i=0;i<ndegeri+1;i++)
    for (int j=1;j<ndegeri+1;j++)
    nbinomacilimi[i][j]=0;
    for (int i=1;i<ndegeri+1;i++)
{
    for(int j=1;j<ndegeri+1;j++)
{
    nbinomacilimi[i][j]=0;
    nbinomacilimi[i][j]=nbinomacilimi[i-1][j-1]+nbinomacilimi[i-1][j];
}
}

    for (int i=0;i<ndegeri+1;i++)
{
    for (int j=0;j<ndegeri+1;j++)
{
    if (nbinomacilimi[i][j]!=0)
      printf("%d",nbinomacilimi[i][j]);
}

    printf("\n");
    printf("\n");
}
    int x=ndegeri;
    int y=0;
    for (int j=0;j<ndegeri+1;j++)
{
    if(nbinomacilimi[ndegeri][j]!=0)
{
    if (nbinomacilimi[ndegeri][j]==1)
   {
    if(x!=0)
        printf("x%d",x);
    else
        printf("+ y%d",y);
}
    else
{
    if(x==1)
       printf("+ x.y%d", y);
    else if (y==1)
        printf("+ x%d.y",x);
    else
        printf("+ x%d.y%d",x,y);
}
}
    x--;
    y++;
}

    system("PAUSE");
    return 0;
}
