#include<stdio.h>
#include<string.h>
main()
{
    int i,j=0,n,t,k,l;
    char temp[100][1000];
    char name[100][1000];
    scanf("%d",&t);

    while(t--){

        scanf("%d",&n);
        for(k=0;k<n;k++){
            scanf("%s",name[k]);
        }

        for(j=0;j<n-1;j++){
    for(i=j;i<n;i++){
    if(strcmp(name[j],name[i])>0){
        strcpy(temp[0],name[j]);
        strcpy(name[j],name[i]);
        strcpy(name[i],temp[0]);
    }
    }
    }

    for(l=0;l<n;l++)
    {
        printf("%s\n",name[l]);
    }
        printf("\n");
    }

    return 0;
}
