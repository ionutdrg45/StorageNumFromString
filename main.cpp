#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int pSkins[312],k=-1,j=0;
char str[1600],skin[3];

int main()
{
    cin.get(str,sizeof(str));
    cin.get();
    for(int i=0;i<strlen(str);i++)
    {
        if(strchr("|",str[i]))
        {
            k++;
            pSkins[k]=atoi(skin);
            while(j) {skin[j]=' ';j--;}
        }
        else {
            skin[j]=str[i];
            j++;
            str[i]=' ';
        }
    }
    for(int j=0;j<=k;j++)
        cout<<pSkins[j]<<" ";
    return 0;
}
