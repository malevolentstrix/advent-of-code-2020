#include<iostream>
#include<conio.h>

using namespace std ;

int main()
    {
        int road[11][66],i;
        for(i=0;i<66;i++)
        {
            road[0][i]=0;
        }
        for(i=2;i<66;i=i+1)
        {
            road[0][i] = 1;
            i=i+1;
            road[0][i] = 1;
        }
         for(i=0;i<66;i=i+3)
        {
            road[1][i] = 1;
            i=i+4;
            road[1][i] = 1;
            i=i+4;
            road[1][i] = 1;
        }
         for(i=0;i<66;i=i+3)
        {
            if(road[0][i]==0)
            cout<<".";
            if(road[0][i]==1)
                cout<<"#";
        }

     /*       i=0;
            i=i+1;
            road[2][i] = 1;
         for(i=1;i<66;i=i+11)
        {

            i=i+5;
            road[2][i] = 1;
            i=i+3;
            road[2][i] = 1;
            i=i+3;
        }
        i[3]=1;
         for(i=3;i<66;i=i+11)
        {

            i=i+2;
            road[3][i] = 1;
            i=i+4;
            road[3][i] = 1;
            i=i+3;
        }
        */

    }
