//Author: Rayen Strasser-King
#include<iostream>
#include<string>
using namespace std;

int main()
{
        string list[5]; //array of 5 strings
        int numItems = 0;
        char input;
        string nm1;



        do{
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if (input == 'A' || input == 'a')         
                {
                        cout<<"What is the item?\n";
                        cin>>nm1;
                        if (numItems<5)
                        { list[numItems] = nm1;
                                numItems++;
                        }
                        else
                { cout<<"You'll need a bigger list!\n";}

                }


        }
        while (input != 'q' && input != 'Q');
        cout<<"==ITEMS TO BUY=="<<endl;
for (int index = 0; index<5; index++)
        cout<<index+1<<" "<< list[index]<<endl;

        return 0;
}

