#include<iostream>
using namespace std;

class arr
{
    int n,a[100];
    public:
    void particular(int b[], int &n, int size);
    void deleteavalue(int b[], int &n, int size);
    void search(int b[], int &n, int size);
    void display(int b[],int &n,int size);
    void deleteatpos(int b[],int &n,int size);
};
void arr::particular(int b[], int &n, int size)
{
    if(n>size)
    {
        cout<<"overflow";
    }
    else
    {
     cout<<"enter the number and index number which you want to insert?";
        int no=0, index=0;
        cin>>no;
        cin>>index;
        for(int i=n;i>=index;i--)
        {
            b[i+1]=b[i];
        }
        b[index]=no;
        n=n+1;
    }
}
void arr::deleteavalue(int b[], int &n, int size)
{
    int s;
   cout<<"enter the no you want to delete.";
   int no;
   cin>>no;
   for(int i=0;i<n;i++)
   {
       if(b[i]==no)
       {
           s=i;
           break;
       }
   }
   for(int i=s;i<n;i++)
   {
       b[i]=b[i+1];
   }
   n=n-1;
}
void arr::search(int b[], int &n, int size)
{
    int item;
    cout<<"enter the item to be searched:\n";
    cin>>item;
    int i;
    int flag=0,loc=0;
    for(i=0;i<=n;i++)
    {
        if(b[i]==item)
        {
        flag=1;
        loc=i;
        break;
        }
    }
