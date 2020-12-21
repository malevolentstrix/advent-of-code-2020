#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i=0,j,k,l,m,typenum,countl = 0,minimum,maximum, valid=0 ;
    char sent[100],num[100],letter;
    for(i=0;i<10;i++)
        {
            gets(sent);
            for(j=0;sent[j]!='\0';j++)
                while(sent[i]!='-')
                {
                  num[i] = sent[i];
                  i++;
                }
                typenum = std::atoi(num);
                minimum = typenum;
                i=0;
            while(sent[i]!=' ')
                {
                  num[i] = sent[i];
                  i++;
                }
                typenum = std::atoi(num);
                maximum = typenum;
             letter = sent[i];
             i=i+2;
             while(sent[i]!='\0')
                {
                  if(letter == sent[i])
                  {
                      countl++;
                  }
                }
            if(countl<=maximum&&countl>=minimum)
                valid++;


        }
        cout<<"Valid statements are = "<<valid;
    return 0;
}
