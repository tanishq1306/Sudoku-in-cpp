#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

char mat[3][3]={'1','2','3','4','5','6','7','8','9'};
char ch1='x';
char ch2='o';
int flag;
int num,num1;

void display(char m[3][3])
{
    for(int i=0;i<3;i++)
    {   for(int j=0;j<3;j++)
        {
        cout<<mat[i][j]<<"  ";
        }
        cout<<endl;
    }
};


void player_1()
{

label:
cout<<"PLAYER 1 enter the no where you want to put your X: ";
cin>>num;

if(num==num1)
{
cout<<"\nSORRY YOU ENTERED WRONG\n";
cout<<"enter the value again\n";
goto label;
}
else
{
if(num==1)
    {
    mat[0][0]=ch1;
    display(mat);
    }

else if(num==2)
    {
    mat[0][1]=ch1;
    display(mat);
    }

else if(num==3)
    {
    mat[0][2]=ch1;
    display(mat);
    }

else if(num==4)
    {
    mat[1][0]=ch1;
    display(mat);
    }

else if(num==5)
    {
    mat[1][1]=ch1;
    display(mat);
    }

else if(num==6)
    {
    mat[1][2]=ch1;
    display(mat);
    }

else if(num==7)
    {
    mat[2][0]=ch1;
    display(mat);
    }

else if(num==8)
    {
    mat[2][1]=ch1;
    display(mat);
    }

else if(num==9)
    {
    mat[2][2]=ch1;
    display(mat);
    }
}
};


void player_2()
{

label:
cout<<"PLAYER 2 enter the no where you want to put your O: ";
cin>>num1;

if(num1==num)
{
cout<<"\nSORRY YOU ENTERED WRONG\n";
cout<<"enter the value again\n";
goto label;
}

else
{

if(num1==1)
    {
    mat[0][0]=ch2;
    display(mat);
    }

else if(num1==2)
    {
    mat[0][1]=ch2;
    display(mat);
    }

else if(num1==3)
    {
    mat[0][2]=ch2;
    display(mat);
    }

else if(num1==4)
    {
    mat[1][0]=ch2;
    display(mat);
    }

else if(num1==5)
    {
    mat[1][1]=ch2;
    display(mat);
    }

else if(num1==6)
    {
    mat[1][2]=ch2;
    display(mat);
    }

else if(num1==7)
    {
    mat[2][0]=ch2;
    display(mat);
    }

else if(num1==8)
    {
    mat[2][1]=ch2;
    display(mat);
    }

else if(num1==9)
    {
    mat[2][2]=ch2;
    display(mat);
    }

}
};


int check()
{
//player1

if(mat[0][0]==ch1&&mat[0][1]==ch1&&mat[0][2]==ch1)
return 1;

if(mat[1][0]==ch1&&mat[1][1]==ch1&&mat[1][2]==ch1)
return 1;

if(mat[2][0]==ch1&&mat[2][1]==ch1&&mat[2][2]==ch1)
return 1;

if(mat[0][0]==ch1&&mat[1][1]==ch1&&mat[2][2]==ch1)
return 1;

if(mat[0][2]==ch1&&mat[1][1]==ch1&&mat[2][0]==ch1)
return 1;

if(mat[0][0]==ch1&&mat[1][0]==ch1&&mat[2][0]==ch1)
return 1;

if(mat[0][1]==ch1&&mat[1][1]==ch1&&mat[2][1]==ch1)
return 1;

if(mat[0][2]==ch1&&mat[1][2]==ch1&&mat[2][2]==ch1)
return 1;



//player 2
if(mat[0][0]==ch2&&mat[0][1]==ch2&&mat[0][2]==ch2)
return 0;

if(mat[1][0]==ch2&&mat[1][1]==ch2&&mat[1][2]==ch2)
return 0;

if(mat[2][0]==ch2&&mat[2][1]==ch2&&mat[2][2]==ch2)
return 0;

if(mat[0][0]==ch2&&mat[1][1]==ch2&&mat[2][2]==ch2)
return 0;

if(mat[0][2]==ch2&&mat[1][1]==ch2&&mat[2][0]==ch2)
return 0;

if(mat[0][0]==ch2&&mat[1][0]==ch2&&mat[2][0]==ch2)
return 0;

if(mat[0][1]==ch2&&mat[1][1]==ch2&&mat[2][1]==ch2)
return 0;

if(mat[0][2]==ch2&&mat[1][2]==ch2&&mat[2][2]==ch2)
return 0;


};

int main()
{
char ch;

cout<<"\t\t\tWelcome to tic tac toe!!!!!!!!!\n";
cout<<"\t\t\t\t _|_____|_ \n";
cout<<"\t\t\t\t1_|__2__|_ 3\n";
cout<<"\t\t\t\t4_|__5__|_ 6\n";
cout<<"\t\t\t\t7_|__8__|_ 9\n";
cout<<"\t\t\t\t  |     | \n";

cout<<"\n\n\t\t\tenter p to quick play: ";
cout<<"\n\t\t\tenter (h or H) for help menu: ";
cout<<"\n\t\t\tenter (q) to quit : ";
ch=getchar();

if(ch=='h'||ch=='H')
    {
    system("clear");
    cout<<"\n\na game in which two players seek in alternate turns to complete a row, a column, or a diagonal with either three O's or three X's drawn in the spaces of a grid of nine squares; noughts and crosses.\n";
    cout<<"\n\nwant to go back (enter s): ";
    }

if(ch=='p'||ch=='P')
    {
    system("clear");
        cout<<"\ngame's initial state is:\n";
        display(mat);
    do{
       // int chr=getchar();
        cout<<endl;
        player_1();
        check();

        flag=check();

        if(flag==1)
        {
        system("clear");
        cout<<"\n_________________________CONGRATULATION PLAYER 1 WINS________________________";
        break;
        }

        if(flag==0)
        {
        system("clear");
        cout<<"\n_________________________CONGRATULATION PLAYER 2 WINS_________________________";
        break;
        }




        cout<<endl;
        player_2();
        check();

        flag=check();

    if(flag==1)
        {
        system("clear");
        cout<<"\n_________________________CONGRATULATION PLAYER 1 WINS________________________";
        break;
        }

    if(flag==0)
        {
        system("clear");
        cout<<"\n_________________________CONGRATULATION PLAYER 2 WINS_________________________";
        break;
        }

}while(flag!=0||flag!=1);

}


        if(ch=='q'||ch=='q')
        {
        system("clear");
        cout<<"\n\n\n___________________________THANK YOU FOR PLAYING_______________________________";
        }

return 0;
}
