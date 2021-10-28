//Header Files used in the program//
#include<stdio.h>
#include<dos.h>
#include<windows.h>
#include<winbase.h>
#include<conio.h>
#include<time.h>
#include<string.h>


FILE *fnew;
HANDLE rHnd, wHnd;
//int current,extrarunsA,extrarunsB,bowlingcurrent,wicketnumber,teamAtotalruns=0,teamBtotalruns=0,teamAtotalovers=0,teamBtotalovers=0;
char input;

//List of functions used//
int initializeconsolehandles();//for initializing handles//
void file();//for file IO//
void locate(int,int);//for locating the cursor position//
void tab1(); //for updating the game records//
void tab2();//for how out input//
void tab3();//for new bowler input//
void tab4();//for new batsbaninput//
void tab5();//for end of innings//
void date();//for storing todays date//
/*void timestart();//for  timestart input//
void timestop();//for timestop input//*/

//data structures used in the program//
struct team//for the record of batting team//
{
    char timein[9];
    char timeout[9];
    char batsmanname[50];
    int _4s;
    int _6s;
    int ballsfaced;
    char timeplayed[9];
    char howout[20];
    char fielder[30];
    char bowler[30];
    int totalruns;
    int mtsplayed;
} teamA[11],teamB[11];

struct bowlingteam//for the record of bowling team//
{
    char bowler[30];
    int ballthrownincurrentover;
    int overs;
    int maidens;
    int runs;
    int wickets;
    int noballs;
    int wides;
    float average;
} bowlingteamA[8],bowlingteamB[8];

struct gamedetails//for the records of game details//
{
    char competition[20];
    char playedAt[50];
    char venue[30];
    char matchbetween[30];
    char versus[30];
    char tosswonby[30];
    char electedto[20];
    int inningsof;
    char date[30];
    char input;
    int overs;
} gamedetailA,gamedetailB;

struct wickets
{
    int atruns;
    int overnumber;
} wicketsA[8],wicketsB[8];


struct undo
{
    struct team teamArecord[11];
    struct team teamBrecord[11];
    struct bowlingteam bowlingteamArecord[8];
    struct bowlingteam bowlingteamBrecord[8];
    struct wickets wicketsArecord[8];
    struct wickets wicketsBrecord[8];
} steps[10];


