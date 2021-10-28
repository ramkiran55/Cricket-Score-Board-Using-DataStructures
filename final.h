#include<stdio.h>
#include<dos.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
HANDLE rHnd, wHnd;
int initializeconsolehandles();
void locate(int,int);
void print();
void initialize();
int runsinoneover[50],runsinprevover=0,flagg=0;
int position=1,undoupdatevariable=0,newbatsmancounter[11],newbatsmanincrement=0,current,extrarunsA,extrarunsB,bowlingcurrent,wicketnumber,teamAtotalruns=0,teamBtotalruns=0,teamAtotalovers=0,teamBtotalovers=0;


void final()//Function to give the input//
{
    int a,key;
    char b;
    char lastinput;
    input='0';
    while(input!=27)//to end the input loop//
    {
        printt();
        while(1)
        {
             locate(0,33);
                printf("Enter runs made |1|2|3|4|5|6|");
                locate(30,33);
           // locate(40,33);
            fflush(stdin);
            if ((input=getche()) == -32)//for arrow key switching//
                input = getche();

            fflush(stdin);
            if(input==75||input==77)
            {
                printf("\b  ");
                if(input==75);
                    //tab5();
                else
                    tab2();
            }
            else  if(input=='\b')
            {
                printf("  ");
                continue;
            }
            else if (input == '\r')//processes the input only when pressed enter//
            {
                input=toupper(lastinput);
                // undoupdate();//excluded in the output//
                tab1();
                break;
            }
            else    if (input=='0'||input=='1'||input=='2'||input=='3'||input=='4'||input=='6'||toupper(input)=='W'||toupper(input)=='N')
                lastinput = input;
            else if(input==27)
            {
                printf("\b ");
                break;
            }
            else
                printf("\a\b ");
            continue;
        }
    }

}


void tab1()
{
    int calledfromwide=0,T;
    char a;

start:
    if(input=='0')
    {
        if(calledfromwide==1)
        {
            teamA[current].totalruns=0;
            extrarunsA+=0;
        }
        else
        {
            teamA[current].ballsfaced++;
            bowlingteamA[bowlingcurrent].ballthrownincurrentover++;
            if(bowlingteamA[bowlingcurrent].ballthrownincurrentover==6)
            {
                bowlingteamA[bowlingcurrent].overs++;
                bowlingteamA[bowlingcurrent].ballthrownincurrentover=0;
                ovatglance(bowlingteamA[bowlingcurrent].overs,teamA[current].totalruns);
            }
        }
    }
    if(input=='1')
    {
        if(calledfromwide==1)
        {
            bowlingteamA[bowlingcurrent].runs+=1;
            teamA[current].totalruns++;
            extrarunsA+=1;
        }
        else
        {
            bowlingteamA[bowlingcurrent].runs+=1;
            teamA[current].totalruns+=1;
            teamA[current].ballsfaced++;
            bowlingteamA[bowlingcurrent].ballthrownincurrentover++;
            if(bowlingteamA[bowlingcurrent].ballthrownincurrentover==6)
            {
                bowlingteamA[bowlingcurrent].overs++;
                bowlingteamA[bowlingcurrent].ballthrownincurrentover=0;
                ovatglance(bowlingteamA[bowlingcurrent].overs,teamA[current].totalruns);
            }
        }
    }
    if(input=='2')
    {
        if(calledfromwide==1)
        {
            bowlingteamA[bowlingcurrent].runs+=2;
            teamA[current].totalruns+=2;
            extrarunsA+=2;
        }
        else
        {
            bowlingteamA[bowlingcurrent].runs+=2;
            teamA[current].totalruns+=2;
            teamA[current].ballsfaced++;
            bowlingteamA[bowlingcurrent].ballthrownincurrentover++;
            if(bowlingteamA[bowlingcurrent].ballthrownincurrentover==6)
            {
                bowlingteamA[bowlingcurrent].overs++;
                bowlingteamA[bowlingcurrent].ballthrownincurrentover=0;
                ovatglance(bowlingteamA[bowlingcurrent].overs,teamA[current].totalruns);
            }
        }
    }
    if(input=='3')
    {
        if(calledfromwide==1)
        {
            bowlingteamA[bowlingcurrent].runs+=3;
            teamA[current].totalruns+=3;
            extrarunsA+=3;
        }
        else
        {
            bowlingteamA[bowlingcurrent].runs+=3;
            teamA[current].totalruns+=3;
            teamA[current].ballsfaced++;
            bowlingteamA[bowlingcurrent].ballthrownincurrentover++;
            if(bowlingteamA[bowlingcurrent].ballthrownincurrentover==6)
            {
                bowlingteamA[bowlingcurrent].overs++;
                bowlingteamA[bowlingcurrent].ballthrownincurrentover=0;
                ovatglance(bowlingteamA[bowlingcurrent].overs,teamA[current].totalruns);
            }
        }
    }
    if(input=='4')
    {
        if(calledfromwide==1)
        {
            bowlingteamA[bowlingcurrent].runs+=4;
            teamA[current].totalruns+=4;
            extrarunsA+=4;
            teamA[current]._4s++;
        }
        else
        {
            bowlingteamA[bowlingcurrent].runs+=4;
            teamA[current].totalruns+=4;
            teamA[current].ballsfaced++;
            teamA[current]._4s++;
            bowlingteamA[bowlingcurrent].ballthrownincurrentover++;
            if(bowlingteamA[bowlingcurrent].ballthrownincurrentover==6)
            {
                bowlingteamA[bowlingcurrent].overs++;
                bowlingteamA[bowlingcurrent].ballthrownincurrentover=0;
                ovatglance(bowlingteamA[bowlingcurrent].overs,teamA[current].totalruns);
            }
        }
    }
    if(input=='6')
    {
        if(calledfromwide==1)
        {
            bowlingteamA[bowlingcurrent].runs+=6;
            teamA[current].totalruns+=6;
            extrarunsA+=6;
            teamA[current]._6s++;
        }
        else
        {
            bowlingteamA[bowlingcurrent].runs+=6;
            teamA[current].totalruns+=6;
            teamA[current].ballsfaced++;
            teamA[current]._6s++;
            bowlingteamA[bowlingcurrent].ballthrownincurrentover++;
            if(bowlingteamA[bowlingcurrent].ballthrownincurrentover==6)
            {
                bowlingteamA[bowlingcurrent].overs++;
                bowlingteamA[bowlingcurrent].ballthrownincurrentover=0;
                ovatglance(bowlingteamA[bowlingcurrent].overs,teamA[current].totalruns);
            }
        }
    }
    if(input=='N')//for noballs
    {
        bowlingteamA[bowlingcurrent].runs+=1;
        bowlingteamA[bowlingcurrent].noballs++;
        teamA[current].totalruns++;
        calledfromwide=1;
        locate(0,34);
        printf("Enter the runs made:0/1/2/3/4/6");
        T=0;
        while(T==0)
        {
            scanf(" %c",&input);
            if(input=='0'||input=='1'||input=='2'||input=='3'||input=='4'||input=='5'||input=='6')
            {
                T=1;
                goto start;
            }
            else
            {
                T=0;
                printf("Invalid Input.Input:0/1/2/3/4/6");
            }
        }
    }
    if(input=='W')//for noballs
    {
        bowlingteamA[bowlingcurrent].runs+=1;
        bowlingteamA[bowlingcurrent].wides++;
        teamA[current].totalruns++;
        calledfromwide=1;
        locate(0,34);
        printf("Enter the runs made:0/1/2/3/4/6:");
        T=0;
        while(T==0)
        {
            scanf(" %c",&input);
            if(input=='0'||input=='1'||input=='2'||input=='3'||input=='4'||input=='5'||input=='6')
            {
                T=1;
                goto start;
            }
            else
            {
                T=0;
                locate(0,34);
                printf("Invalid Input.Input:0/1/2/3/4/6 :");
            }
        }
    }

    float overs=bowlingteamA[bowlingcurrent].overs+((bowlingteamA[bowlingcurrent].ballthrownincurrentover)/6.);
   // if(overs==0&&bowlingteamA[bowlingcurrent].ballthrownincurrentover==0)
  //      bowlingteamA[bowlingcurrent].average=0;
  //  else
        bowlingteamA[bowlingcurrent].average=
            bowlingteamA[bowlingcurrent].runs/overs;
    calledfromwide=0;

}

void tab2()
{
    int a;

    while(1)
    {
    locate(28,34);
    printf("How out?");
    locate(28,35);
    printf("Fielding='F'");
    locate(28,36);
    printf("Catch-Out='C'");
    locate(28,37);
    printf("Wicket='W'");
    locate(28,33);
    char temp;

        fflush(stdin);
        if ((input = getche()) == -32)
            input = getche();
        fflush(stdin);
        if(input==75||input==77)
        {
            printf("\b ");
            locate(28,34);
            printf("           ");
            locate(28,35);
            printf("              ");
            locate(28,36);
            printf("               ");
            locate(28,37);
            printf("                ");
            locate(28,33);
            if(input==77)
            {
                tab3();
                //return ;
            }
            else if(input==75)
            {
                fflush(stdin);
                return;

            }
        }
        else  if(input=='\b')
        {
            printf("  ");
            continue;
        }
        else if (input == '\r')
        {
            input=toupper(temp);
            break;
        }

        else if(input=='F'||input=='C'||input=='W'||input=='f'||input=='c'||input=='w')
        {
            temp=input;
            continue;
        }
        else
        {
            printf("\a\b\b  \b");
        }
    }
    locate(28,34);
    printf("           ");
    locate(28,35);
    printf("              ");
    locate(28,36);
    printf("               ");
    locate(28,37);
    printf("                ");
    input=toupper(input);
    if(toupper(input)=='W')
    {
        strcpy(teamA[current].howout,"Wicket");
        wicketnumber++;
        wicketsA[wicketnumber].atruns = teamAtotalruns;
        wicketsA[wicketnumber].overnumber = teamAtotalovers+1;
        locate(28,34);
        printf("Enter the fielder's name:");
        gets(teamA[current].fielder);
        locate(28,34);
        printf("                                     ");
        tab4();
    }
    if(toupper(input)=='C')
    {
        strcpy(teamA[current].howout,"Catchout");
        wicketnumber++;
        wicketsA[wicketnumber].atruns = teamAtotalruns;
        wicketsA[wicketnumber].overnumber = teamAtotalovers+1;
        locate(28,34);
        printf("Enter the fielder's name:");
        gets(teamA[current].fielder);
        locate(28,34);
        printf("                                     ");
        tab4();
    }
    if(toupper(input)=='F')
    {
        strcpy(teamA[current].howout,"Fielding");
        wicketnumber++;
        tab1(input);
        wicketsA[wicketnumber].atruns = teamAtotalruns;
        wicketsA[wicketnumber].overnumber = teamAtotalovers+1;
        locate(28,34);
        printf("Enter the fielder's name:");
        gets(teamA[current].fielder);
        locate(28,34);
        printf("                                     ");
        tab4();
    }
}

void tab3()
{
    while(1)
    {

    char temp;
    fflush(stdin);
    locate(37,34);
    printf("Select the bowler no.");
        fflush(stdin);
        locate(37,33);
        if ((input=getche()) ==-32)
            input = getche();
        fflush(stdin);
        if(input==75||input==77)
        {
            printf("\b ");
            locate(37,34);
            printf("                       ");
            if(input==75)
                //tab2();
                return;
            if (input==77)
                tab4();
        }
        else  if(input=='\b')
        {
            printf("  ");
            continue;
        }
        else if (input == '\r')
        {
            input=temp;
            break;
        }
        else if(input=='1'||input=='2'||input=='3'||input=='4'||input=='5'||input=='6'||input=='7'||input=='8')
        {
            temp=input;
            continue;
        }
        else
        {
            printf("\a\b\b  \b");
        }
    }
    bowlingcurrent = input-49;
    locate(37,33);
    printf("   ");
    locate(37,34);
    printf("                                      ");
    return;
}

void tab4()
{
    int currentinput = -1,number = 0;
    fflush(stdin);

    while (1){
    locate(52,34);
    printf("Select the new ");
    locate(52,35);
    printf("batsman no.from ");
    locate(52,36);
    printf("above list.");
    if (currentinput == -1) locate(52,33) ; else locate (53,33);
    if ((input=getch()) == -32)
        input = getch();
    fflush(stdin);

    if(input==75||input==77)
    {
        printf("\b\b   ");
        locate(52,34);
        printf("                 ");
        locate(52,35);
        printf("                 ");
        locate(52,36);
        printf("              ");
        if(input==75)
            //tab3();
            return;
        if (input==77)
        {
            tab5();
            //return;
        }
    }
    else if(input >= '0' && input <='9' && number !=1)

    {
            if (currentinput == -1)
            {
                    printf ("%c",input);
                    currentinput= input - '0';
                    currentinput *= 10;
            }
            else{
                if ((currentinput <10) || ( (input =='0' || input == '1') && currentinput>9))
                {printf ("%c",input);
                                currentinput += input - '0';
                number = 1;     //Two numbers entered
            }}
    }


    else if (input == '\b')
    {
        if (number ==1 )printf ("\b  \b\b"); else printf ("\b \b");
        currentinput = -1;
        number = 0;
    }
    else if (input == '\r')
    {current=currentinput -1;
    //printf("%d",current);
    fflush(stdin);

    }
    }
}
void tab5()
{
    while(1)
    {

    char ch;
    fflush(stdin);
    locate(68,34);
    printf("Do you want ");
    locate(68,35);
    printf("to  end the ");
    locate(68,36);
    printf("inning?");
        locate(68,33);
        if ((input=getch()) == -32)
            input = getch();
        ch=input;
        fflush(stdin);
        if(input==75||input==77)
        {
            printf("\b ");
            locate(68,34);
            printf("             ");
            locate(68,35);
            printf("              ");
            locate(68,36);
            printf("            ");
            if(input==75)
                //tab4();
                return;
            if (input==77)
            {
                fflush(stdin);
                //tab1();
                //return;
            }
        }
        if(toupper(input)=='Y')
        {
            locate(68,34);
            printf("             ");
            locate(68,35);
            printf("              ");
            locate(68,36);
            printf("            ");
            return;
        }
        else
            printf("\a\b ");
    }
    fflush(stdin);
    return;
}

int initializeconsolehandles()
{
    rHnd = GetStdHandle(STD_INPUT_HANDLE);
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    if (rHnd && wHnd)
        return TRUE;
    else
        return FALSE;
}

void locate(int x, int y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition (wHnd,pos);

}

int ovatglance(int overs,int runs)
{

    int i=1;
    runsinoneover[overs]=runs-runsinprevover;
    runsinprevover=runs;
    if(runsinoneover[overs]==0)
        bowlingteamA[bowlingcurrent].maidens++;
    return;
}
