#include <iostream>
using namespace std;
class batch{
    public:
    void input(int a[])
    {for(int i=0;i<5;i++)
      cin>>a[i];}

    void Count(int a[])
      {  int ount=0;
          for(int i=0;i<5;i++)
         {
           if(a[i] >= 50  && a[i] <=70)
             {ount++;}
         }
      }
   void display()
    {   int ount;
        cout<<ount;}
};


int main() {
    cout << "enter theb input:";
    int a[40];
    batch b;
    b.input(a);
    b.Count(a);
    b.display();
    return 0;
}
