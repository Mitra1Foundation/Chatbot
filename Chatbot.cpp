#include<iostream.h>
#include<cstring.h>
#include<conio.h>
#include<cstdio.h>
using namespace std;
void main()
{
   system("cls");
   int ans,num1,num2,pass;
   char str[510],search1[10]="add",search2[10]="sum",search3[10]="substract",search4[10]="multiply",search5[10]="product",search6[10]="divide";
   //user input
   int find_word(char string[80],char search_word[10]);
   cout<<"WELCOME BACK ANKUR\nPLEASE TURN OFF CAPS LOCK WHILE USING ME\nAND ALWAYS USE UNDERSCORES(_) INSTEAD OF SPACES\n";
   ask:
   {
   cout<<"ENTER PASSWORD\n";
   cin>>pass;
   }
   switch(pass)
   {
       case 7449:
                {
                system("cls");
                cout<<"WELCOME ANKUR PLEASE FEEL FREE TO SHARE YOUR THOUGHTS \n";
                here:
                cin>>str;
                    if(strcmp ("hello",str)==0)//if both are same
                    {
                    cout<<"HELLO ANKUR SARKAR "<<endl;
                    goto here;
                    }
                    else if(!strcmp ("hi",str))
                    {
                    cout<<"HELLO ANKUR WISH YOU A VERY HAPPY AND BLESSED DAY"<<endl;
                    goto here;
                    }
                    else if(!strcmp ("how_are_you",str))
                    {
                    cout<<"A MACHINE IS GOOD AS LONG AS YOU KEEP IT PREVENTED FROM VIRUS :-) "<<endl;
                    goto here;
                    }
                    else if(!strcmp("i_am_good",str))
                    {
                    cout<<"GLAD TO HEAR THAT"<<endl;
                    goto here;
                    }
                    else if(!strcmp("stop",str))
                    {
                    cout<<"OK USER"<<endl;
                    system("pause");
                    }
	                else if((!find_word (str,search1))or(!find_word (str,search2)))
                    {
                    cout<<"PLEASE ENTER THE NUMBERS AGAIN\n";
                    cin>>num1>>num2;
                    cout<<"THE SUM OF THE NUMBERS IS "<<num1+num2;
                    goto here;
                    }
                    else if(!find_word (str,search3))
                    {
                    cout<<"PLEASE ENTER THE NUMBERS AGAIN\n";
                    cin>>num1>>num2;
                    cout<<"ON SUBSTRACING THE FIRST FROM THE SECOND WE GET "<<num1-num2;
                    goto here;
                    }
	                else if((!find_word (str,search4))or(!find_word (str,search5)))
                    {
                    cout<<"PLEASE ENTER THE NUMBERS AGAIN\n";
                    cin>>num1>>num2;
                    cout<<"THE PRODUCT OF THE NUMBERS IS "<<num1*num2;
                    goto here;
                    }
                    else if(!find_word (str,search6))
                    {
                    cout<<"PLEASE ENTER THE NUMBERS AGAIN\n";
                    cin>>num1>>num2;
                    if(num2==0)
                    {
                    cout<<"SORRY THE SECOND NUMBER CANNOT BE ZERO\nPLEASE TRY AGAIN ";
                    goto here;
                    }
                    else
                    {
                    cout<<"ON DIVIDING THE FIRST NUMBER FROM THE SECOND WE GET "<<num1/num2;
                    goto here;
                    }
                    }
                    else
                    {
                    cout<<"I COULDN'T UNDERSTAND WHAT YOU SAID, SORRY I AM UNDER DEVELOPMENT"<<endl;
                    goto here;
                    }
     }
       default:
                   {
                   cout<<"WRONG PASSWORD PLEASE ENTER THE CORRECT ONE\n";
                   cout<<" OR DO YOU WISH TO ABORT (1: YES/2: NO)\n";
                   cin>>ans;
                   if(ans==2)
                   goto ask;
                   else
                   system("pause");
                   }
   }
   getch();
}


int find_word(char string[80],char search_word[10])
{
             int count1=0, count2=0,i,j,flag;
             while(string[count1]!='\0')
             count1++;
             while(search_word[count2]!='\0')
             count2++;
             for(i=0;i<=count1-count2;i++)
    {
             for(j=i;j<i+count2;j++)
             {
                 flag=1;
                 if(string[j]!=search_word[j-i])
                 {
                    flag=0;
                    break;
                 }
             }
             if(flag==1)
             break;
    }
             if(flag==1)
             return 0;
             else
             return 1;
}
