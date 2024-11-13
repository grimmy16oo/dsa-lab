#include<iostream>
using namespace std;

void tower(int n,char beg,char aux,char End)
{
    if( n==1 )          //base case
    {
        cout<<"disk moves from : "<<beg<<"->"<<End<<endl;
        return;
    }

    tower(n-1,beg,End,aux);     //A->B
    cout<<"disk moves from : "<<beg<<"->"<<End<<endl;       //A->C
    tower(n-1,aux,beg,End);     //B->C

}
int main()
{
    int n;
    cout<<"enter number of disks : ";
    cin>>n;

    tower(n,'A','B','C');

    return 0;
}
