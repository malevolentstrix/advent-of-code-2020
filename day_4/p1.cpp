#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i=0,j=0,k=0;
    char pass[100],temp1[15],temp[15];
    gets(pass);
    for(i=0;i!='  ';i++)
    {
        while(pass[i]!=':')
        {
            temp1[i]=pass[i];
            i++;
        }

        while(pass[j]!=' ')
            {j++;}

        while(pass[i]!=':')
        {
            temp2[j]=pass[i];
            i++;j++;
        }
        while(pass[j]!=' '){}
        {
          cout<<temp2[j];
          j++;
        }
    }
return 0;
}
