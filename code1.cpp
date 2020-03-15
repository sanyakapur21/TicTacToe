#include<iostream>
#include<strings.h>
using namespace std;

char mat[10]={0,1,2,3,4,5,6,7,8,9};
char p1='X';
char p2='O';

void gameboard()
{
    cout<<endl;
    cout<<endl;
    cout<<"\t\t TIC TAC TOE"<<endl;
    cout<<endl;
    cout<<"\t Player1:X"<<"Player2:O"<<endl;
    cout<< mat[1]<<"          |         "<<mat[2]<<"        |           "<<mat[3]<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<< mat[4]<<"          |         "<<mat[5]<<"         |           "<<mat[6]<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<< mat[7]<<"          |         "<<mat[8]<<"        |           "<<mat[9]<<endl;
   
}

int winflag()
{
    

    if(mat[1]==mat[5]&& mat[5]==mat[9])
    {
        
        return 1;
    }
    else if(mat[3]==mat[5]&& mat[5]==mat[7])
    {
        
        
        return 1;
    }
    else if(mat[1]==mat[2]&& mat[2]==mat[3])
    {
        
        
        return 1;
    }
    else if(mat[4]==mat[5]&& mat[5]==mat[6])
    {
        
        
        return 1;
    }
    else if(mat[7]==mat[8]&& mat[8]==mat[9])
    {
        
        
        return 1;
    }
    else if(mat[1]==mat[4]&& mat[4]==mat[7])
    {
        
        
        return 1; 
    }
    else if(mat[2]==mat[5]&& mat[5]==mat[8])
    {
        
       
        return 1; 
    }
    else if(mat[3]==mat[6]&& mat[6]==mat[9])
    {
        
        return 1;
    }

    else if (mat[1] != '1' && mat[2] != '2' && mat[3] != '3' && mat[4] != '4' && mat[5] != '5' && mat[6] != '6' && mat[7] != '7' && mat[8] != '8' && mat[9] != '9')
    {
        //break;
        return 0;
    }

    else
    {
        return -1; //ongoing
    }
    
}

int main()
{
    int pl1,pl2, n=0,i, flag;
    string name1,name2;
    cout<<"Player1, Enter your name: ";
        cin>>name1;
        cout<<"Player2, Enter your name: ";
        cin>>name2;
    while(n!=-1)
    {
        //gameboard();
        cout<<name1<<", Enter position:";
        cin>>pl1;
        mat[pl1]=p1;
        gameboard();
         flag=winflag();
        while(flag==-1){
            gameboard();
        }
        if(flag==1){
            cout<<"\t\tYOU WON!!!! "<<name1<<endl<<endl<<endl;
            break;
        }
        cout<<name2<<" ,Enter position:";
        cin>>pl2;
        mat[pl2]=p2;
        gameboard();
        flag=winflag();
        while(flag==-1){
            gameboard();
        }
        if(flag==1){
            cout<<"\t\tYOU WON!!!! "<<name2<<endl<<endl<<endl;
            break;
        }
        
    }
}







