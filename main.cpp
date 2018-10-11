//Author: Rayen Strasser-King
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector<string> list;
        int numItems = 0;
        char input;
        string nm1;



        do{
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                if (list.size()>0)
                {
                cout<<"\n (D)elete last item";
                }
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if (input == 'A' || input == 'a')         
                {
                        cout<<"What is the item?\n";
                        cin>>nm1;
                        list.push_back(nm1);
                }
                if ((input== 'd' || input== 'D') && list.size()>0)
                  {
                    //list.pop_back();
                    cout<<list[list.size()]<<" was deleted from the list.\n";
                    list.pop_back();
                    //nm1 = list[list.size()-1];
                  }
          }
        while (input != 'q' && input != 'Q');
        
        if (list.size()==0)
        {
                cout<<"No items to buy!\n";
        }
        else
        {
        cout<<"==ITEMS TO BUY=="<<endl;
        for (int index = 0; index<list.size(); index++)
        cout<<index+1<<" "<< list[index]<<endl;
        }

        return 0;
}

