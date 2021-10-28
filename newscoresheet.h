void date();//to store todays date//
void printt();//for printing the output//
void filewrite();//for writing to the file//
void fileread();//for accessing from the file//
void fileopen(char);
void limitinput(int);
int limitedinput(int);
FILE *newfile,*filelist;
char filenamewithdirectory[50];//to pass the filename with its directory location//
char output[100];
void newscoresheet()
{
    system("color f4");
    int j,ln,number;
    char text[50],ch;
    system("cls");
    locate(20,8);
    char filename[20],array[100];
    char extension[]=".txt";
    char filenamewithdirectory[]="Files//";
    char filenamecheck[20];
    char filenamecheckvar;
    int i=0,flag=1,n=15;
    system("cls");
    initializeconsolehandles();
    printt();
    flag=0;
    while(1)
    {
        if(flag==0)
        {
            fflush(stdin);
            locate(13,0);
            fflush(stdin);
            limitinput(n);
            strcpy(gamedetailA.competition,output);
            flag=1;
            n=20;
        }
        if (flag==1)
        {
            locate(42,0);
            limitinput(n);
            strcpy(gamedetailA.venue,output);
            fflush(stdin);
            flag=2;
            n=10;
        }
        if(flag==2)
        {
            locate(15,2);
            limitinput(n);
            strcpy(gamedetailA.matchbetween,output);
            fflush(stdin);
            flag=3;
            n=10;
        }
        if(flag==3)
        {
            locate(44,2);
            limitinput(n);
            strcpy(gamedetailA.versus,output);
            fflush(stdin);
            flag=4;
            n=10;
        }
        if(flag==4)
        {
            locate(13,4);
            limitinput(n);
            strcpy(gamedetailA.tosswonby,output);
            fflush(stdin);
            flag=5;
            n=7;
        }
        if(flag==5)
        {
            locate(47,4);
            limitinput(n);
            strcpy(gamedetailA.electedto,output);
            fflush(stdin);
            flag=6;
            n=3;
        }
        if(flag==6)
        {
            locate(11,6);
            number=limitedinput(n);
            gamedetailA.inningsof=number;
            fflush(stdin);
            flag=7;
            n=10;
        }
        if(flag==7)
        {
            locate(53,6);
            printf(" T to enter today's date");
            locate(43,6);
            limitinput(n);
            if(output[0]=='t'||output[0]=='T')
            {
                date();
                locate(43,6);
                printf("         %s              ",gamedetailA.date);
            }
            else
            {
                strcpy(gamedetailA.date,output);
                locate(43,6);
                if(strlen(gamedetailA.date)<2)
                printf("                                       ");
                else
                printf("         %s                  ",gamedetailA.date);

            }
            fflush(stdin);
            flag=8;
            n=15;
        }
        if(flag==8)
        {
            locate(12,10);
            for (i=0; i<11; i++)
            {
                limitinput(n);
                strcpy(teamA[i].batsmanname,output);
                locate(12,11+i);
            }
            flag=9;
        }
        if(flag==9)
        {
            locate(12,24);
            for (i=0; i<8; i++)
            {
                limitinput(n);
                strcpy(teamA[i].bowler,output);
                locate(12,25+i);
            }
            flag=80;
        }
        if (flag==80)
        {
            locate(36,33);
            skip:
            printf("Enter e to edit or c to continue");
            ch=getch();
            if(ch=='e'||ch=='E')
            {
                flag=0;
                 locate(36,33);
                printf("                                                                                                    ");

            }
            else if(ch=='c'||ch=='C')
            {
                locate(36,33);
                printf("                                                                                                    ");
                locate(14,20);
                final();
                filewrite();
            }
            else
            {
              locate(36,33);
               printf("                                                                                                    ");
                flag=80;
            }
        }
    }
}
void printt()
{

    int j,l,i;
    locate(0,0);
    printf("%ccompetition:%s",179,gamedetailA.competition);
    locate(35,0);
    printf("%cVenue:%s",179,gamedetailA.venue);
    locate(0,1);
    for(i=0; i<79; i++)
        printf("%c",205);
    locate(0,2);
    printf("%cMatch Between:%s",179,gamedetailA.matchbetween);
    locate(35,2);
    printf("%cVersus:%s",179,gamedetailA.versus);
    locate(0,3);
    for(i=0; i<79; i++)
        printf("%c",205);
    locate(0,4);
    printf("%cToss won by:%s",179,gamedetailA.tosswonby);
    locate(35,4);
    printf("%cElected To:%s",179,gamedetailA.electedto);
    locate(0,5);
    for(i=0; i<79; i++)
        printf("%c",205);
    locate(35,0);
    for (i=0; i<33; i++)
    {
        locate(34,i);
        printf("%c",182);
    }
    locate(0,6);
    printf("%cInning Of:%d",179,gamedetailA.inningsof);
    locate(35,6);
    printf("%cDate:%s",179,gamedetailA.date);
    locate(0,7);
    for(i=0; i<79; i++)
        printf("%c",205);
    locate(0,21);
    for(i=0; i<79; i++)
        printf("%c",205);
    locate(0,9);
    for(i=0; i<79; i++)
        printf("%c",205);
    locate(5,8);
    printf("Batsmanname");
    locate(0,10);
    for(i=0; i<11; i++)
        printf("%cBatsman %d:%s\n",179,i+1,teamA[i].batsmanname);
    locate(36,8);
    printf("%cTotoal runs",179);
    for(i=0; i<11; i++)
    {
        locate(40,9+(i+1));
        printf("%d\n",teamA[i].totalruns);
    }

    locate(5,22);
    printf("Bowlers");
    locate(0,23);
    for (i=0; i<79; i++)
        printf("%c",205);
    for(i=0; i<8; i++)
    {
        locate(0,23+(i+1));
        printf("%cBowler %d:%s\n",179,i+1,teamA[i].bowler);
    }

    locate(35,22);
    printf("overs");
    locate(42,22);
    printf("Maidens");
    locate(50,22);
    printf("Economy");
    locate(58,22);
    printf("No balls");
    locate(68,22);
    printf("BTICO");
    locate(75,22);
    printf("Runs");
    locate(62,8);
    printf("_4s");
    locate(72,8);
    printf("_6s");
    locate(0,32);
    for (i=0; i<79; i++)
        printf("%c",205);
    locate(61,10);
    for(i=0; i<11; i++)
    {
        printf("%c",179);
        locate(61,10+(i+1));
    }
    locate(63,9);
    for(i=0;i<11;i++)
    {
        locate(63,9+(i+1));
    printf("%d",teamA[i]._4s);
    }
    locate(73,9);
    for(i=0;i<11;i++)
    {
        locate(73,9+(i+1));
    printf("%d",teamA[i]._6s);
    }
    locate(71,10);
    for(i=0; i<11; i++)
    {
        printf("%c",179);
        locate(71,10+(i+1));
    }
    locate(49,10);
    for(i=0; i<11; i++)
    {
        printf("%c",179);
        locate(49,10+(i+1));
    }
    locate(38,23);
    for(i=0; i<8; i++)
    {
        locate(38,23+(i+1));
        printf("%d\n",bowlingteamA[i].overs);
    }
    locate(47,23);
    for(i=0; i<8; i++)
    {
        locate(47,23+(i+1));
        printf("%d\n",bowlingteamA[i].maidens);
    }
    locate(55,23);
    for(i=0; i<8; i++)
    {
        locate(55,23+(i+1));
        printf("%.2f\n",bowlingteamA[i].average);
    }
    locate(62,23);
    for(i=0; i<8; i++)
    {
        locate(62,23+(i+1));
        printf("%d\n",bowlingteamA[i].noballs);
    }
    locate(70,23);
    for(i=0; i<8; i++)
    {
        locate(70,23+(i+1));
        printf("%d\n",bowlingteamA[i].ballthrownincurrentover);
    }
    locate(78,23);
    for(i=0; i<8; i++)
    {
        locate(78,23+(i+1));
        printf("%d\n",bowlingteamA[i].runs);
    }
    locate(0,40);
    for(i=0;i<79;i++)
    {
        printf("%c",205);
    }
    return;


}
void filewrite()
{
    fwrite(&gamedetailA,sizeof(gamedetailA),1,newfile);
    fwrite(&teamA,sizeof(teamA),11,newfile);
    fwrite(&bowlingteamA,sizeof(bowlingteamA),8,newfile);

}

void fileopen(char ch1)
{
    int j,ln;
    char text[50],ch;
    system("cls");
    locate(20,8);
    char filename[20],array[50];
    char extension[]=".txt";
    char filenamewithdirectory[]="Files//";
    char filenamecheck[20];
    char filenamecheckvar;
    int i=0,flag=1,n=15;
    if(ch1=='1')
    {
        filelist=fopen("Files//filelist.txt","a+");
        if(filelist==NULL)
        {
            printf(" File Listing Error...");
            exit(1);
        }
        while(flag==1)
        {
            if (flag==1)
            {
                printf("\nPlease enter the new file name:");
                scanf(" %[^\n]",filename);
                i=0;
            }
            rewind(filelist);
            while(filenamecheckvar!=EOF)
            {
                filenamecheckvar=fgetc(filelist);
                filenamecheck[i]=filenamecheckvar;
                if(filenamecheckvar=='\n')
                {
                    filenamecheck[i]='\0';
                    i=-1;
                    if(strcmp(filenamecheck,filename)==0)
                    {
                        printf("Filename already exists.Please give new filename:");
                        flag=1;
                        break;
                    }
                }
                i++;
                flag=0;
            }
        }
        fseek(filelist,0,SEEK_END);
        fprintf(filelist,"%s",filename);
        fprintf(filelist,"\n");
        fclose(filelist);
        strcat(filename,extension);
        strcat(filenamewithdirectory,filename);
        newfile=fopen(filenamewithdirectory,"w");
        if(newfile==NULL)
            printf("Error...");
        printf("Creating file...\n");
        Sleep(3000);
        printf("File Created.");
        Sleep(1000);
        newscoresheet();
    }
    if(ch1=='2')
    {
        printf("Enter the name of the existing file to open");
        scanf(" %[^\n]",filename);
        strcat(filename,extension);
        strcat(filenamewithdirectory,filename);
        newfile=fopen(filenamewithdirectory,"r");
        if(newfile==NULL)
        {
            system("cls");
            printf("Error...no such existing file");
            exit(0);
        }
        system("cls");
        fread(&gamedetailA,sizeof(gamedetailA),1,newfile);
        fread(&teamA,sizeof(teamA),11,newfile);
        fread(&bowlingteamA,sizeof(bowlingteamA),8,newfile);
        printt();
        getch();
        system("cls");
        main();
    }

}

void date ( )
{
    time_t now;
    struct tm *tm_now;
    char buff[BUFSIZ];
    now = time ( NULL );
    tm_now = localtime ( &now );
    strftime ( buff, sizeof buff, "%a %d %m %Y", tm_now );
    strcpy(gamedetailA.date,buff);

}
void limitinput(int n)
{
    int i,j;
    char array[100];
    for(i=0;; i++)
    {
        if(i>=n)
            array[i]=getch();
        else
            array[i]=getche();
        if(array[i]=='\b')
        {
            if(i>(n-1))
                printf("\b \b");
            else
                printf(" \b");
            if(i>=n)
                i=n-1-1;
            else
            {
                for(j=1;; j++)
                {
                    if(i==n-j)
                    {
                        if(i==0)
                            i=-1;
                        else
                            i=n-(j+1)-1;
                        break;
                    }
                }
            }
        }
        if(array[i]=='\r')
            break;
    }
    int number=0;
    for(i=0; i!=n; i++)
    {
        if(array[i]=='\r')
        {
            output[i]='\0';
            break;
        }
        output[i]=array[i];
    }
}
int limitedinput(int n)
{
    int a,i,j,array[100];
start:
locate(11,6);
    for(i=0;; i++)
    {
        if(i>=n)
            array[i]=getch();
        else
            array[i]=getche();
        if(array[i]=='\b')
        {
            if(i>(n-1))
                printf("\b \b");
            else
                printf(" \b");
            if(i>=n)
                i=n-1-1;
            else
            {
                for(j=1;; j++)
                {
                    if(i==n-j)
                    {
                        if(i==0)
                            i=-1;
                        else
                            i=n-(j+1)-1;
                        break;
                    }
                }
            }
        }
        if(array[i]=='\r')
            break;
    }
    int number=0;
    for(i=0; i!=n; i++)
    {
        if(array[i]=='\r')
            break;
        if(isdigit(array[i])!=0)
        {
            (int) array[i];
            number=number*10+(array[i]-48);
        }
        else
        {
            locate(15,6);
            printf("  Invalid input.");
            goto start;
        }
    }
    locate(15,6);
    printf("                  ");
    return number;
}

