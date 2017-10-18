#include<iostream>
using namespace std;
class iubatbus
{
private:
    int bus_no;
public:
    void insert(int b)
    {
        bus_no=b;
    }
    void getinfo()
    {
        cout<<"Bus no = "<<bus_no<<endl;
    }
    void editinfo(int b)
    {
         if(b==1)
            cout<<"Road=savar";
        else if(b==2)
            cout<<"Road=razbari";
            else if(b==3)
            cout<<"Road=mirpur";
            else if(b==4)
            cout<<"Road=simultoli";
            else if(b==5)
            cout<<"Road=rajindropur";
            else if(b==6)
            cout<<"Road=kaligonj";
            else if(b==7)
            cout<<"Road=konabari";
            else if(b==8)
            cout<<"Road=college gate";

        else
            cout<<"Not applicable";
    }

};
int main()
{
    iubatbus B;
    int b;
    cout<<"enter the bus no : ";
    cin>>b;
    B.insert(b);
    B.getinfo();
    B.editinfo(b);

    return 0;
}


