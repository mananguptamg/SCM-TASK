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
