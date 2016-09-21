///T H E   H E A D E R   F I L E S

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<math.h>
#define PI acos(-1)

///PROTOTYPES.........................................................................................

///for MENU
///for logos
int message_logo(int ar_r,int ar_c);
int contact_logo(int ar_r,int ar_c);
int log_logo(int ar_r,int ar_c);
int apps_logo(int ar_r,int ar_c);
int games_logo(int ar_r,int ar_c);
int simmanager_logo(int ar_r,int ar_c);

///FOR PHONEBOOK
void phonebook();
void call(int index,char num[51]);
int save_search();
void save();
int all_contacts();
void edit(int index);
void del(int index);
void search();
int option(int index);

///FOR CALL LOG
void call(int index, char num[51]);
int delete_log(int choice);
int log_option(int choice);
int call_log();

///FOR MESSAGE
void message();
int msg_menu();
int sent();
int new_message();
void inbox();

///FOR GAMES
void games();
int main_menugames();

///prototypes for rocketrise

void rocket_down();
void rocket_go();
void rocket_stand();
void rocket_last();
void rocket_mid();
void explosion1st();
void explosion2nd();
int rocket_menu();
void rocket();
void instruction_rr();
int rocket_rise();

///protypes for pair match

int pairmatch();
int random_pm(int high);
void shuffle();
int play_again_pm();
int game_over_pm(int starttime,int endtime);
int get_symbol(int r, int c);
int draw_grid_pm(char grid[24][43]);
int game_pair_match();
int highscore_pm();
int instruction_pm();
int main_menu_pair_match();
int shut_down_pm();
void start1();
void start2();
void start3();
void start4();

///protypes for pair match smilies in hole

int smilies_in_hole();
int rand_num();
void sm_strtanim();
void sm_nameanim();
void blank();
void refference();
void point1();
void point2();
void point3();
void point4();
void point5();
void point6();
void point7();
void point8();
void point9();
void jerk1();
void jerk2();
void jerk3();
void jerk4();
void jerk5();
void jerk6();
void jerk7();
void jerk8();
void jerk9();
int logic();
int play_again_smh();
int gameover_smh();
int play_smh(int turn, char press);
int instruction_smh();
int main_menu_smh();
int the_game_smh();
void highscore_smh();

///for tic tac toe

int draw_grid_ttt(int r, int c, char name1[], char name2[]);
void save_name_ttt();
void dots();
char result_ttt(int count_press);
int multiplayer_1(char name1[], char name2[]);
int random_ttt();
int single_player_2(char name1[]);
int single_player_1(char name1[]);
int play_again_ttt();
int multiplayer_ttt();
int single_player_ttt();
int instruction_ttt();
int game_menu_ttt();
int main_menu_ttt();
int start_animation_ttt();
int tic_tac_toe();

///for main menu

int main_menugames();

///FOR APPS

///for apps menu
int main_menuapps();

///for converter
void converter();
int weight_menu_conv();
int vol_menu_conv();
int length_menu_conv();
int temp_menu_conv();
void temp_conv();
void length_conv();
void area_conv();
void vol_conv();
void weight_conv();
int main_menu_conv();

///for calendar
void calendar();
int check();
int input(int day);
int display(int day);

///for friendship intensity meter
void love_calc();
int sum(int n);
int try_againl();
void draw_heart(int ratio);

///for calculator
void calculator();
void fib_ser_calc();
void combinations_calc();
void permutations_calc();
int menu_combi_calc();
void combi_calc();
int trigon_menu_calc();
void trigon_func_calc();
int eqn_option_calc();
void equ_type2_calc();
void equ_type1_calc();
void equation_solver_calc();
int options_calc();
void matrix_calc();
int factorial( int i);
double operation(char oprtr, double num1, double num2);
void operations_calc();
int main_menu_calc();


///for phonebook
void phonebook();
void call(int index,char num[51]);
int save_search();
void save();
int all_contacts();
void edit(int index);
void del(int index);
void search();
int option(int index);

///for starting animation
void test1();
void test2();
void test3();
void test4();
void last();
void os();
void animation();

///for interface
int wallpaper();

///for gotoxy &color
void gotoXY(int x,int y);
void col(int ForgC, int BackC);
///for time
int get_time();


///Global variables......

///for phnbook
struct phnbook
{
    char name[100];
    char number[20];
};
typedef struct phnbook phnbook;

struct phnbook user[300];
int balance=0,cnt_cntct,cnt_log;

///for log
struct history
{
    char name[51];
    char num[51];
    int date;
    int month;
    int year;
    int hour;
    int minute;
    int dur_min;
    int dur_sec;
};
struct history clog[50];

///for time
struct tm *systime;

///global for rocketrise
float v, g;
float k=1;

///global for tic tac toe
char a[3][3];

///global for pair match
int besttime;

///the symbols
int symbol[6][6]= {2,14,6,4,2,4,12,4,3,
                   6,12,11,1,3,5,1,11,11,
                   3,14,12,4,6,2,2,1,1,
                   12,5,5,11,3,14,6,14,5
                  };

///global for smilies in hole
int pnt_jerk;
int life=3;
int score=0;
int high;
int speed=1500;
int flag[4]= {0};

///global for apps

///for calendar
struct tm *systime;
int y;
int m;
int limit;

///for time
struct tm *systime;

int main()
{
    int j;
    FILE *fp;
    fp=fopen("phonebookdata.txt","r");
    for(cnt_cntct=0; fgets(user[cnt_cntct].name,sizeof(user[cnt_cntct].name),fp)!=0; cnt_cntct++)
    {
        int len=strlen(user[cnt_cntct].name);
        user[cnt_cntct].name[len-1]='\0';
        fgets(user[cnt_cntct].number,sizeof(user[cnt_cntct].number),fp);
        len=strlen(user[cnt_cntct].number);
        user[cnt_cntct].number[len-1]='\0';
    }
    fclose(fp);
    FILE *bal;
    bal=fopen("balance.txt","r");
    fscanf(bal,"%d",&balance);
    fclose(bal);
    animation();
    col(1,0);
    int i,l,index;
    char press,number[51];
    while(1)
    {
        wallpaper();
        while(1)
        {
            gotoXY(44,10);
            col(12,0);
            get_time();
            printf("%.2d-%.2d-%d\n\n",systime->tm_mday,systime->tm_mon+1,systime->tm_year+1900);
            col(14,0);
            printf("\t\t\t\t\t     %.2d:%.2d:%.2d",systime->tm_hour, systime->tm_min, systime->tm_sec);
            if(kbhit())
            {
                press=getch();
                if((press=='m'||press=='M'||press=='p'||press=='P')||(press>='0'&&press<='9'))break;
            }
            Sleep(100);
        }
        gotoXY(0,27);
        if(press=='m'||press=='M')menu();
        else if(press=='p'||press=='P')phonebook();
        else if(press>='0'&&press<='9')
        {
            system("cls");
            col(10,0);
            printf(" ____\t\t\t\t\t\t\t\t\t\t\t     %c\n|%c%c%c |:\t\t\t\t\t\t\t\t\t\t\t     %c,|%c\n ''''\n",209,254,254,254,179,179,179,179);
            printf("\n\n\n\n\n\n\t\t\t  ");
            col(12,0);
            printf(" --------------------------------------------\n\t\t\t  ");
            printf("|                                            |\n\t\t\t  ");
            printf("|                                            |\n\t\t\t  ");
            printf("|                                            |\n\t\t\t  ");
            printf("|                                            |\n\t\t\t  ");
            printf("|                                            |\n\t\t\t  ");
            printf(" --------------------------------------------\n");
            col(11,0);
            printf("\n\n\n\n\n\n\n\n\n\n C\t\t\t\t\t\tS\t\t\t\t\t        Esc\n(call)\t\t\t\t\t      (save)\t\t\t\t\t      (exit)");
            gotoXY(27,12);
            for(i=0;;)
            {
                if(press>='0'&&press<='9'&&i<20)
                {
                    number[i]=press;
                    col(14,0);
                    printf("%c",number[i]);
                    i++;
                }
                press=getch();
                if(press==8)
                {
                    i--;
                    number[i]='\0';
                    printf("\b%c\b",0);
                    if(i==0)break;
                }
                if(press=='c'||press=='C'||press=='s'||press=='S'||press==27)break;
            }
            number[i]='\0';
            gotoXY(0,27);
            if(press=='c'||press=='C')
            {
                for(i=0; i<300; i++)
                {
                    if(strcmp(number,user[i].number)==0)break;
                }
                index=i;
                call(index,number);
            }
        }
        bal=fopen("balance.txt","w");
        fprintf(bal,"%d",balance);
        fclose(bal);
    }

}

COORD coord= {0,0};
void gotoXY(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void col(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
    return;
}
///Starting animation ...
void test1()
{
    int i;
    char ar[]= {10,10,10,10,10,9,9,9,32,
                32,32,32,32,32,95,95,95,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,95,95,95,32,32,32,32,32,10,
                9,9,9,32,32,32,32,32,47,92,
                32,32,92,32,32,32,32,32,32,32,
                32,32,32,95,95,95,32,32,32,32,
                32,32,32,32,47,92,32,32,92,32,
                32,32,32,10,9,9,9,32,32,32,
                32,47,58,58,92,32,32,92,32,32,
                32,32,32,32,32,32,47,92,32,32,
                92,32,32,32,32,32,32,47,58,58,
                92,32,32,92,32,32,32,10,9,9,
                9,32,32,32,47,58,47,92,58,92,
                32,32,92,32,32,32,32,32,32,32,
                92,58,92,32,32,92,32,32,32,32,
                47,58,47,92,58,92,32,32,92,32,
                32,10,9,9,9,32,32,47,58,58,
                92,126,92,58,92,32,32,92,32,32,
                32,32,32,32,47,58,58,92,95,95,
                92,32,32,47,58,58,92,126,92,58,
                92,32,32,92,32,10,9,9,9,32,
                47,58,47,92,58,92,32,92,58,92,
                95,95,92,32,32,95,95,47,58,47,
                92,47,95,95,47,32,47,58,47,92,
                58,92,32,92,58,92,95,95,92,10,
                9,9,9,32,92,47,95,124,58,58,
                92,47,58,47,32,32,47,32,47,92,
                47,58,47,32,32,47,32,32,32,32,
                92,47,95,95,92,58,92,47,58,47,
                32,32,47,10,9,9,9,32,32,32,
                32,124,58,124,58,58,47,32,32,47,
                32,32,92,58,58,47,95,95,47,32,
                32,32,32,32,32,32,32,32,32,92,
                58,58,47,32,32,47,32,10,9,9,
                9,32,32,32,32,124,58,124,92,47,
                95,95,47,32,32,32,32,92,58,92,
                95,95,92,32,32,32,32,32,32,32,
                32,32,32,32,92,47,95,95,47,32,
                32,10,9,9,9,32,32,32,32,124,
                58,124,32,32,124,32,32,32,32,32,
                32,32,92,47,95,95,47,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,10,9,9,9,32,
                32,32,32,32,92,124,95,95,124,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void test2()
{
    int i;
    char ar[]= {10,10,10,10,10,9,9,9,32,
                32,32,32,32,32,95,95,95,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,95,95,95,32,32,32,10,9,9,
                9,32,32,32,32,32,47,92,32,32,
                92,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,47,92,32,32,92,32,32,10,
                9,9,9,32,32,32,32,47,58,58,
                92,32,32,92,32,32,32,32,32,32,
                32,95,95,95,32,32,32,32,32,32,
                32,32,32,47,58,58,92,32,32,92,
                32,10,9,9,9,32,32,32,47,58,
                47,92,58,92,95,95,92,32,32,32,
                32,32,47,92,95,95,92,32,32,32,
                32,32,32,32,47,58,47,92,58,92,
                95,95,92,10,9,9,9,32,32,47,
                58,47,32,47,58,47,32,32,47,32,
                32,32,32,47,58,47,95,95,47,32,
                32,32,32,32,32,47,58,47,32,47,
                58,47,32,32,47,10,9,32,9,9,
                32,47,58,47,95,47,58,47,95,95,
                47,95,95,95,32,47,58,58,92,32,
                32,92,32,32,32,32,32,47,58,47,
                95,47,58,47,32,32,47,32,10,9,
                32,9,9,32,92,58,92,47,58,58,
                58,58,58,47,32,32,47,32,92,47,
                92,58,92,32,32,92,95,95,32,32,
                92,58,92,47,58,47,32,32,47,32,
                32,10,9,9,9,32,32,92,58,58,
                47,126,126,47,126,126,126,126,32,32,
                32,126,126,92,58,92,47,92,95,95,
                92,32,32,92,58,58,47,95,95,47,
                32,32,32,10,9,9,9,32,32,32,
                92,58,92,126,126,92,32,32,32,32,
                32,32,32,32,32,32,92,58,58,47,
                32,32,47,32,32,32,92,58,92,32,
                32,92,32,32,32,10,9,9,9,32,
                32,32,32,92,58,92,95,95,92,32,
                32,32,32,32,32,32,32,32,47,58,
                47,32,32,47,32,32,32,32,32,92,
                58,92,95,95,92,32,32,10,9,9,
                9,32,32,32,32,32,92,47,95,95,
                47,32,32,32,32,32,32,32,32,32,
                92,47,95,95,47,32,32,32,32,32,
                32,32,92,47,95,95,47,32,32,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void test3()
{
    int i;
    char ar[]= {10,10,10,10,10,9,9,9,32,
                32,32,32,32,32,95,95,95,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,95,95,95,32,32,32,10,9,9,
                9,32,32,32,32,32,47,32,32,47,
                92,32,32,32,32,32,32,32,32,95,
                95,95,32,32,32,32,32,32,32,32,
                32,32,47,32,32,47,92,32,32,10,
                9,9,9,32,32,32,32,47,32,32,
                47,58,58,92,32,32,32,32,32,32,
                47,32,32,47,92,32,32,32,32,32,
                32,32,32,47,32,32,47,58,58,92,
                32,10,9,9,9,32,32,32,47,32,
                32,47,58,47,92,58,92,32,32,32,
                32,47,32,32,47,58,47,32,32,32,
                32,32,32,32,47,32,32,47,58,47,
                92,58,92,10,9,9,9,32,32,47,
                32,32,47,58,47,126,47,58,47,32,
                32,32,47,95,95,47,58,58,92,32,
                32,32,32,32,32,47,32,32,47,58,
                47,126,47,58,47,10,9,9,9,32,
                47,95,95,47,58,47,32,47,58,47,
                95,95,95,32,92,95,95,92,47,92,
                58,92,95,95,32,32,47,95,95,47,
                58,47,32,47,58,47,32,10,9,9,
                9,32,92,32,32,92,58,92,47,58,
                58,58,58,58,47,32,32,32,32,92,
                32,32,92,58,92,47,92,32,92,32,
                32,92,58,92,47,58,47,32,32,10,
                9,9,9,32,32,92,32,32,92,58,
                58,47,126,126,126,126,32,32,32,32,
                32,32,92,95,95,92,58,58,47,32,
                32,92,32,32,92,58,58,47,32,32,
                32,10,9,9,9,32,32,32,92,32,
                32,92,58,92,32,32,32,32,32,32,
                32,32,32,32,47,95,95,47,58,47,
                32,32,32,32,92,32,32,92,58,92,
                32,32,32,10,9,9,9,32,32,32,
                32,92,32,32,92,58,92,32,32,32,
                32,32,32,32,32,32,92,95,95,92,
                47,32,32,32,32,32,32,92,32,32,
                92,58,92,32,32,10,9,9,9,32,
                32,32,32,32,92,95,95,92,47,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                92,95,95,92,47,32,32,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void last()
{
    int i;
    char ar[]= {10,10,10,10,10,9,9,9,9,
                32,47,58,58,58,58,58,58,58,32,
                32,32,32,32,32,47,58,58,58,58,
                58,58,32,32,32,32,32,47,58,58,
                58,58,58,58,58,32,10,9,9,9,
                9,124,32,58,58,95,95,32,32,58,
                58,32,32,32,32,124,95,32,32,58,
                58,95,47,32,32,32,32,124,32,58,
                58,95,95,32,32,58,58,10,9,9,
                9,9,124,32,58,58,32,32,92,32,
                58,58,32,32,32,32,32,32,124,32,
                58,58,32,32,32,32,32,32,124,32,
                58,58,32,32,92,32,58,58,10,9,
                9,9,9,124,32,58,58,58,58,58,
                58,58,47,32,32,32,32,32,32,124,
                32,58,58,32,32,32,32,32,32,124,
                32,58,58,58,58,58,58,58,47,10,
                9,9,9,9,124,32,58,58,95,95,
                32,32,58,58,32,32,32,32,32,32,
                124,32,58,58,32,32,32,32,32,32,
                124,32,58,58,95,95,95,95,47,32,
                10,9,9,9,9,124,32,58,58,32,
                32,92,32,58,58,32,32,32,32,32,
                32,124,32,58,58,32,32,32,32,32,
                32,124,32,58,58,32,32,32,32,32,
                32,10,9,9,9,9,124,32,58,58,
                32,32,124,32,58,58,32,47,58,58,
                32,47,58,58,58,58,58,58,32,47,
                58,58,124,32,58,58,32,32,32,32,
                32,32,10,9,9,9,9,124,95,95,
                47,32,32,124,95,95,47,124,95,95,
                47,124,95,95,95,95,95,95,47,124,
                95,95,47,124,95,95,47,32,32,32,
                32,32,32,10,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                10,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,10,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void os()
{
    int i;
    char ar[]= {10,10,9,9,9,9,9,32,32,
                47,58,58,58,58,58,58,32,32,32,
                47,58,58,58,58,58,58,32,10,9,
                9,9,9,9,32,47,58,58,95,95,
                32,32,58,58,32,47,58,58,95,95,
                32,32,58,58,10,9,9,9,9,9,
                124,32,58,58,32,32,92,32,58,58,
                124,32,58,58,32,32,92,95,95,47,
                10,9,9,9,9,9,124,32,58,58,
                32,32,124,32,58,58,124,32,32,58,
                58,58,58,58,58,32,10,9,9,9,
                9,9,124,32,58,58,32,32,124,32,
                58,58,32,92,95,95,95,95,32,32,
                58,58,10,9,9,9,9,9,124,32,
                58,58,32,32,124,32,58,58,32,47,
                58,58,32,32,92,32,58,58,10,9,
                9,9,9,9,124,32,32,58,58,58,
                58,58,58,47,124,32,32,58,58,58,
                58,58,58,47,10,9,9,9,9,9,
                32,92,95,95,95,95,95,95,47,32,
                32,92,95,95,95,95,95,95,47,32,
                10,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,10,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,10,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void test4()
{
    int i;
    char ar[]= {10,10,10,10,10,9,9,9,32,
                32,32,32,32,32,95,95,95,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                10,9,9,9,32,32,32,32,32,47,
                32,32,47,92,32,32,32,32,32,32,
                32,32,32,32,32,95,95,95,32,32,
                32,32,32,32,32,32,32,95,95,95,
                32,32,32,32,32,10,9,9,9,32,
                32,32,32,47,32,32,47,58,58,92,
                32,32,32,32,32,32,32,32,32,47,
                95,95,47,92,32,32,32,32,32,32,
                32,47,32,32,47,92,32,32,32,32,
                10,9,9,9,32,32,32,47,32,32,
                47,58,47,92,58,92,32,32,32,32,
                32,32,32,32,92,95,95,92,58,92,
                32,32,32,32,32,47,32,32,47,58,
                58,92,32,32,32,10,9,9,9,32,
                32,47,32,32,47,58,58,92,32,92,
                58,92,32,32,32,32,32,32,32,47,
                32,32,47,58,58,92,32,32,32,47,
                32,32,47,58,47,92,58,92,32,32,
                10,9,9,9,32,47,95,95,47,58,
                47,92,58,92,95,92,58,92,32,32,
                32,95,95,47,32,32,47,58,47,92,
                47,32,32,47,32,32,47,58,58,92,
                32,92,58,92,32,10,9,9,9,32,
                92,95,95,92,47,126,124,58,58,92,
                47,58,47,32,32,47,95,95,47,92,
                47,58,47,126,126,32,32,47,95,95,
                47,58,47,92,58,92,95,92,58,92,
                10,9,9,9,32,32,32,32,124,32,
                32,124,58,124,58,58,47,32,32,32,
                92,32,32,92,58,58,47,32,32,32,
                32,32,92,95,95,92,47,32,32,92,
                58,92,47,58,47,10,9,9,9,32,
                32,32,32,124,32,32,124,58,124,92,
                47,32,32,32,32,32,92,32,32,92,
                58,92,32,32,32,32,32,32,32,32,
                32,32,92,32,32,92,58,58,47,32,
                10,9,9,9,32,32,32,32,124,95,
                95,124,58,124,126,32,32,32,32,32,
                32,32,92,95,95,92,47,32,32,32,
                32,32,32,32,32,32,32,32,92,95,
                95,92,47,32,32,10,9,9,9,32,
                32,32,32,32,92,95,95,92,124,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void animation()
{
    int i;
    for(i=1; i<=3; i++)
    {
        system("cls");
        col(12,0);
        test4();
        Sleep(90);
        system("cls");
        col(9,0);
        test2();
        Sleep(90);
        system("cls");
        col(10,0);
        test3();
        Sleep(90);
        system("cls");
        col(14,0);
        test1();
        Sleep(100);
    }
    system("cls");
    col(10,0);
    last();
    Sleep(500);
    col(12,0);
    os();
    Sleep(2000);
}
///INTERFACE..........................................................................................
///for calling
void call(int index, char num[51])
{
    char name[21]="";
    int duration[2],i,sec=-1,min=0;
    get_time();
    if(index!=300)strcpy(name,user[index].name);
    FILE *fp;
    system("cls");
    col(14,0);
    printf("Calling ");
    col(10,0);
    printf("%s\n%s\n",name,num);
    col(12,0);
    printf("\npress any key to end call");
    i=0;
    while(!kbhit())
    {
        printf("\a.");
        Sleep(1500);
        i++;
        if(i==3)break;
    }
    col(14,0);
    system("cls");
    int init_bal=balance;
    if(balance==0)printf("Out of balance.\n");
    else if(i==3)
    {
        balance--;
        while(!kbhit())
        {
            sec++;
            system("cls");
            col(10,0);
            printf("%s\n%s\n",name,num);
            col(14,0);
            printf("\nIn Call\n\nTime: ");
            printf("%2.2d:%2.2d",min,sec);
            col(12,0);
            printf("\n\npress any key to end call");
            col(14,0);
            Sleep(1000);

            if(sec==60)
            {
                min++;
                sec=0;
                if(balance==0)break;
                balance--;
            }

        }
        getch();
        system("cls");
    }
    printf("Call Ended.\n");
    if(sec<0)
    {
        duration[0]=min;
        duration[1]=sec+1;
    }
    else
    {
        duration[0]=min;
        duration[1]=sec;
    }
    printf("\nCall Duration: %2.2d:%2.2d\n",duration[0],duration[1]);
    printf("Call cost: %d\n\n",init_bal-balance);
    col(12,0);
    fp=fopen("log.txt","a");
    fprintf(fp,"%s %s %d %d %d %d %d %d %d",name,num,systime->tm_mday,systime->tm_mon,systime->tm_year+1900,systime->tm_hour,systime->tm_min,duration[0],duration[1]);
    fprintf(fp,"\n");
    fclose(fp);
    printf("press any key to continue");
    col(14,0);
    getch();
}
///for getting time from the system
int get_time()
{
    time_t t=time(NULL);
    systime=localtime(&t);
}
///wallpaper
int wallpaper()
{
    int i;
    char date_time[50];

    system("cls");
    col(10,0);
    printf(" ____\t\t\t\t\t\t\t\t\t\t\t     %c\n|%c%c%c |:\t\t\t\t\t\t\t\t\t\t\t     %c,|%c\n ''''\n",209,254,254,254,179,179,179,179);
    printf("\n\n\n\n\n\n\t\t\t\t\t     ");
    col(11,0);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n M\t\t\t\t\t\t\t\t\t\t\t          P\n(menu)\t\t\t\t\t\t\t\t\t\t\t (phonebook)");
}
///THE MAIN FOR MENU..................................................................................
int menu()
{
    while(1)
    {
        int choice=MENU();
        if(choice==1)message();
        else if(choice==2)phonebook();
        else if(choice==3)call_log();
        else if(choice==4)apps();
        else if(choice==5)games();
        else if(choice==6)sim_mngr();
        else break;
        fflush(stdin);
    }
}

///menu logo printing
int message_logo(int ar_r,int ar_c)
{
    if(ar_r==1&&ar_c==1)
    {
        col(12,0);
        gotoXY(1,6);
        printf("\t\t  MESSAGE                     ");
    }
    else col(11,0);
    gotoXY(20,9);
    printf("  ---------------- ");
    gotoXY(20,10);
    printf(" ||              ||");
    gotoXY(20,11);
    printf(" ||              ||");
    gotoXY(20,12);
    printf(" ||              ||");
    gotoXY(20,13);
    printf(" ||              ||");
    gotoXY(20,14);
    printf(" ||              ||");
    gotoXY(20,15);
    printf(" ||              ||");
    gotoXY(20,16);
    printf("  ---------------- ");

    col(10,0);
    gotoXY(25,11);
    printf("|`\\````/`|");
    gotoXY(25,12);
    printf("|  \\  /  |");
    gotoXY(25,13);
    printf("|   \\/   |");
    gotoXY(25,14);
    printf("|________|");
}
int contact_logo(int ar_r,int ar_c)
{
    if(ar_r==1&&ar_c==2)
    {
        col(12,0);
        gotoXY(1,6);
        printf("\t\t  CONTACT                   ");
    }
    else col(11,0);
    gotoXY(40,9);
    printf("  ---------------- ");
    gotoXY(40,10);
    printf(" ||              ||");
    gotoXY(40,11);
    printf(" ||              ||");
    gotoXY(40,12);
    printf(" ||              ||");
    gotoXY(40,13);
    printf(" ||              ||");
    gotoXY(40,14);
    printf(" ||              ||");
    gotoXY(40,15);
    printf(" ||              ||");
    gotoXY(40,16);
    printf("  ---------------- ");

    col(10,0);
    gotoXY(44,10);
    printf("    ,-\"\\");
    gotoXY(44,11);
    printf(" ,\"     \\");
    gotoXY(44,12);
    printf("( \\  P   \\");
    gotoXY(44,13);
    printf(" \\ \\    _.(");
    gotoXY(44,14);
    printf("  \\ \\,-\" _.`");
    gotoXY(44,15);
    printf("   \\(_.-`");
}
int log_logo(int ar_r,int ar_c)
{
    if(ar_r==1&&ar_c==3)
    {
        col(12,0);
        gotoXY(1,6);
        printf("\t\t  CALL LOG                          ");
    }
    else col(11,0);
    gotoXY(60,9);
    printf("  ---------------- ");
    gotoXY(60,10);
    printf(" ||              ||");
    gotoXY(60,11);
    printf(" ||              ||");
    gotoXY(60,12);
    printf(" ||              ||");
    gotoXY(60,13);
    printf(" ||              ||");
    gotoXY(60,14);
    printf(" ||              ||");
    gotoXY(60,15);
    printf(" ||              ||");
    gotoXY(60,16);
    printf("  ---------------- ");

    col(10,0);
    gotoXY(66,10);
    printf("  ___|");
    gotoXY(66,11);
    printf(" |---|");
    gotoXY(66,12);
    printf(" |___|");
    gotoXY(66,13);
    printf(" |```|");
    gotoXY(66,14);
    printf(" |```|");
    gotoXY(66,15);
    printf("  ```");
}
int apps_logo(int ar_r,int ar_c)
{

    if(ar_r==2&&ar_c==1)
    {
        col(12,0);
        gotoXY(1,6);
        printf("\t\t  MY APPS                      ");
    }
    else col(11,0);
    gotoXY(20,19);
    printf("  ---------------- ");
    gotoXY(20,20);
    printf(" ||              ||");
    gotoXY(20,21);
    printf(" ||              ||");
    gotoXY(20,22);
    printf(" ||              ||");
    gotoXY(20,23);
    printf(" ||              ||");
    gotoXY(20,24);
    printf(" ||              ||");
    gotoXY(20,25);
    printf(" ||              ||");
    gotoXY(20,26);
    printf("  ---------------- ");

    col(10,0);
    gotoXY(23,20);
    printf("\\````\\  |````|");
    gotoXY(23,21);
    printf(" \\ A  \\ | P  |");
    gotoXY(23,22);
    printf("  ''''' ''''''");
    gotoXY(23,23);
    printf("  |````||````|");
    gotoXY(23,24);
    printf("  | P  || S  |");
    gotoXY(23,25);
    printf("  ''''''''''''");
}
int games_logo(int ar_r,int ar_c)
{
    if(ar_r==2&&ar_c==2)
    {
        col(12,0);
        gotoXY(1,6);
        printf("\t\t  GAMES                 ");
    }
    else col(11,0);
    gotoXY(40,19);
    printf("  ---------------- ");
    gotoXY(40,20);
    printf(" ||              ||");
    gotoXY(40,21);
    printf(" ||              ||");
    gotoXY(40,22);
    printf(" ||              ||");
    gotoXY(40,23);
    printf(" ||              ||");
    gotoXY(40,24);
    printf(" ||              ||");
    gotoXY(40,25);
    printf(" ||              ||");
    gotoXY(40,26);
    printf("  ---------------- ");

    col(10,0);
    gotoXY(43,21);
    printf("   _______");
    gotoXY(43,22);
    printf(" .` O..-|-`.");
    gotoXY(43,23);
    printf("(._________.)");
    gotoXY(43,24);
    printf(" \\_/     \\_/");
}
int simmanager_logo(int ar_r,int ar_c)
{
    if(ar_r==2&&ar_c==3)
    {
        col(12,0);
        gotoXY(1,6);
        printf("\t\t  SIM MANAGER                      ");
    }
    else col(11,0);
    gotoXY(60,19);
    printf("  ---------------- ");
    gotoXY(60,20);
    printf(" ||              ||");
    gotoXY(60,21);
    printf(" ||              ||");
    gotoXY(60,22);
    printf(" ||              ||");
    gotoXY(60,23);
    printf(" ||              ||");
    gotoXY(60,24);
    printf(" ||              ||");
    gotoXY(60,25);
    printf(" ||              ||");
    gotoXY(60,26);
    printf("  ---------------- ");

    col(10,0);
    gotoXY(65,21);
    printf(" _______");
    gotoXY(65,22);
    printf("|       \\");
    gotoXY(65,23);
    printf("| RIP OS |");
    gotoXY(65,24);
    printf("|________|");
}
///menu
int MENU()
{
    col(11,0);
    int i,ar_r=1,ar_c=1;
    char press;
    system("cls");
    printf("\t\t  M E N U\n\t\t  ");
    for(i=1; i<=65; i++)
    {
        printf("%c",175);
    }
    printf("\n\t\t  >> ");
    col(12,0);
    printf("Arrow Keys");
    col(11,0);
    printf(" to browse\n\t\t  >> ");
    col(12,0);
    printf("Enter");
    col(11,0);
    printf(" to select\n\t\t  >> ");
    col(12,0);
    printf("Esc");
    col(11,0);
    printf(" to go back\n\t\t  ");
    for(i=1; i<=65; i++)
    {
        printf("%c",174);
    }
    printf("\n\n\t\t  ");
    for(i=1; i<=65; i++)
    {
        printf("%c",175);
    }
    while(press!=13)
    {
        message_logo(ar_r,ar_c);
        contact_logo(ar_r,ar_c);
        log_logo(ar_r,ar_c);
        apps_logo(ar_r,ar_c);
        games_logo(ar_r,ar_c);
        simmanager_logo(ar_r,ar_c);
        fflush(stdin);
        press=getch();
        if(press==27)return 0;
        if(press==72)ar_r--;
        if(press==80)ar_r++;
        if(ar_r>2)ar_r=1;
        if(ar_r<1)ar_r=2;
        if(press==75)ar_c--;
        if(press==77)ar_c++;
        if(ar_c>3)ar_c=1;
        if(ar_c<1)ar_c=3;
    }
    if(ar_r==1&&ar_c==1)return 1;
    else if(ar_r==1&&ar_c==2)return 2;
    else if(ar_r==1&&ar_c==3)return 3;
    else if(ar_r==2&&ar_c==1)return 4;
    else if(ar_r==2&&ar_c==2)return 5;
    else if(ar_r==2&&ar_c==3)return 6;
}

///...................................................................................................
///GAMES..............................................................................................
///...................................................................................................
void games()
{
    int arrow;
    while(1)
    {
        arrow=main_menugames();
        if(arrow==1)tic_tac_toe();
        else if(arrow==2)smilies_in_hole();
        else if(arrow==3)pair_match();
        else if(arrow==4)rocket_rise();
        else break;
    }
}

///for main menu
int main_menugames()
{
    char choice;
    int arrow=1;
    do
    {
        int i;
        system("cls");
        col(11,0);
        printf("\tG A M E S\n\t");
        for(i=1; i<=50; i++)
        {
            printf("%c",175);
        }
        printf("\n\t>> ");
        col(12,0);
        printf("Arrow keys    ");
        col(11,0);
        printf("to browse\n\t>> ");
        col(12,0);
        printf("Enter");
        col(11,0);
        printf(" to select\n\t");
        for(i=1; i<=50; i++)
        {
            printf("%c",174);
        }
        printf("\n\n");
        if(arrow==1)
        {
            col(14,0);
            printf("\t1.");
            col(14,2);
            printf("       TIC TAC TOE         \n\n");
        }
        else
        {
            col(14,0);
            printf("\t1.       Tic tac toe     \n\n");
        }
        if(arrow==2)
        {
            printf("\t2.");
            col(14,2);
            printf("       SMILIES IN HOLE     \n\n");
        }
        else
        {
            col(14,0);
            printf("\t2.       Smilies in hole \n\n");
        }

        if(arrow==3)
        {
            printf("\t3.");
            col(14,2);
            printf("       PAIR MATCH          \n\n");
        }
        else
        {
            col(14,0);
            printf("\t3.       Pair match      \n\n");
        }
        if(arrow==4)
        {
            printf("\t4.");
            col(14,2);
            printf("       ROCKET RISE         \n\n");
        }
        else
        {
            col(14,0);
            printf("\t4.       Rocket rise     \n\n");
        }
        if(arrow==5)
        {
            printf("\t5.");
            col(14,2);
            printf("       EXIT                \n\n");
        }
        else
        {
            col(14,0);
            printf("\t5.       Exit            \n\n");
        }
        col(11,0);
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>5)arrow=1;
        if(arrow<1)arrow=5;
    }
    while(choice!=13);
    return arrow;
}
///ROCKET GAME........................................................................................
///...................................................................................................
///g will take input
///v will take input
float random_rocket_mass_m(float i)
{
    int rand_num;
    time_t s;
    time(&s);
    srand(s);
    rand_num=rand()%(1000-1+1)+1;
    return rand_num;
}
void rocket()
{
    float m=random_rocket_mass_m(10000.0);
    float c, b;
    system("cls");
    printf("\t\t\tThe mass of rocket is: %0.2f\n\n\n",m);
    Sleep(2000);
    system("cls");
    col(10,0);
    ///Equation of rocket  m*a=v*k-m*g
    ///k representing a constant.
    printf("\t\t\tEnter the gravitional acceleration of the place\n");
    col(11,0);
    scanf("%f",&g);
    col(10,0);
    printf("\n\n\t\t\tEnter the velocity of the rocket\n");
    col(11,0);
    scanf("%f",&v);
    Sleep(1000);
    c=v*k, b=m*g;
    system("cls");
    col(14,0);
    if(c <b) rocket_down();
    else if(c==b)
    {
        rocket_stand();
        Sleep(1500);
        col(11,0);
        system("cls");
        printf("\n\n\n\n\t\t\t OPPPS... ITS NOT FLYING...\n\n\n");
        Sleep(1000);
        col(12,0);
        printf("\n\n\n\n\t\t\t Press any key to continue");
        getch();
    }
    else if(c >b) rocket_go();
}
int rocket_menu()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t*** WELCOME TO RIP'S ROCKET GAME ***\n\t(use arrow keys to move cursor and press enter to select)\n\n");
        if(arrow==1)
        {
            col(14,0);
            printf("\t\t\t   1.");
            col(14,2);
            printf("       PLAY GAME         \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   1.       Play Game  \n");
        }
        if(arrow==2)
        {
            printf("\t\t\t   2.");
            col(14,2);
            printf("       INSTRUCTION       \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   2.       Instruction\n");
        }
        if(arrow==3)
        {
            printf("\t\t\t   3.");
            col(14,2);
            printf("       EXIT              \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   3.       Exit   \n");
        }
        col(11,0);
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>3)arrow=1;
        if(arrow<1)arrow=3;
    }
    while(choice!=13);
    return arrow;
}
void instruction_rr()
{
    system("cls");
    col(10,0);
    printf("\n\tYou just have to make the rocket fly with appropiate values of acceleration and speed\n");
    col(12,0);
    printf("\n\n\tPress any key to continue");
    getch();
}
int rocket_rise()
{
    system("cls");
    while(1)
    {
        int arrow=rocket_menu();
        if(arrow==1)rocket();
        else if(arrow==2)
        {
            instruction_rr();
            continue;
        }
        else if(arrow==3)break;
    }

    system("cls");
    col(12,0);
    int i;
    printf("\nShutting Down");
    for(i=1; i<=3; i++)
    {
        Sleep(500);
        printf(". ");
    }
    printf("\n");
    Sleep(1000);

    return 0;
}
///annimation
void rocket_stand()
{
    int i;
    char ar[]= {10,10,10,10,10,10,10,10,10,
                10,10,10,10,10,10,10,10,10,9,
                9,9,32,32,32,32,32,32,47,92,
                10,9,9,9,32,32,32,32,32,47,
                46,46,92,10,9,9,9,32,32,32,
                32,47,32,32,32,32,92,10,9,9,
                9,32,32,32,47,32,95,95,95,95,
                32,92,10,9,9,9,32,32,32,124,
                9,32,32,124,10,9,9,9,32,32,
                32,124,9,32,32,124,10,9,9,9,
                32,32,32,124,32,124,9,124,32,124,
                10,9,9,9,32,32,32,124,32,124,
                32,32,124,32,124,10,9,9,9,32,
                32,32,124,32,124,9,124,32,124,10,
                9,9,9,32,32,47,124,9,32,32,
                124,92,10,9,9,9,32,47,46,124,
                9,32,32,124,46,92,10,9,9,9,
                47,46,46,124,32,9,32,32,124,46,
                46,92,10,9,9,32,32,32,32,32,
                32,32,32,124,46,46,47,96,96,96,
                96,96,96,92,46,46,124,10,9,9,
                9,124,46,47,32,32,32,32,32,32,
                32,32,92,46,124,10,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                124,47,95,95,95,95,95,95,95,95,
                95,95,92,124,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,10,9,9,9,32,32,10,10,10,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void rocket_mid()
{
    int i;
    char ar[]= {10,10,10,10,10,10,10,9,9,
                9,32,32,32,32,32,32,47,92,10,
                9,9,9,32,32,32,32,32,47,46,
                46,92,10,9,9,9,32,32,32,32,
                47,32,32,32,32,92,10,9,9,9,
                32,32,32,47,32,95,95,95,95,32,
                92,10,9,9,9,32,32,32,124,9,
                32,32,124,10,9,9,9,32,32,32,
                124,9,32,32,124,10,9,9,9,32,
                32,32,124,32,124,9,124,32,124,10,
                9,9,9,32,32,32,124,32,124,32,
                32,124,32,124,10,9,9,9,32,32,
                32,124,32,124,9,124,32,124,10,9,
                9,9,32,32,47,124,9,32,32,124,
                92,10,9,9,9,32,47,46,124,9,
                32,32,124,46,92,10,9,9,9,47,
                46,46,124,32,9,32,32,124,46,46,
                92,10,9,9,32,32,32,32,32,32,
                32,32,124,46,46,47,96,94,124,94,
                96,96,92,46,46,124,10,9,9,9,
                124,46,47,32,40,46,124,46,41,46,
                32,92,46,124,10,9,9,9,124,47,
                32,32,40,46,124,46,41,46,46,32,
                92,124,10,9,9,9,32,32,40,40,
                46,46,46,46,46,41,41,10,9,9,
                9,32,40,40,46,46,46,-107,46,46,
                46,41,41,10,9,9,9,32,32,40,
                40,46,46,46,46,46,41,41,10,9,
                9,9,32,32,32,32,40,40,46,46,
                41,41,10,9,9,32,32,32,32,32,
                32,32,32,32,32,32,32,32,40,46,
                46,41,10,10,10,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void rocket_last()
{
    int i;
    char ar[]= {9,9,9,32,32,32,32,32,32,
                47,92,10,9,9,9,32,32,32,32,
                32,47,46,46,92,10,9,9,9,32,
                32,32,32,47,32,32,32,32,92,10,
                9,9,9,32,32,32,47,32,95,95,
                95,95,32,92,10,9,9,9,32,32,
                32,124,9,32,32,124,10,9,9,9,
                32,32,32,124,9,32,32,124,10,9,
                9,9,32,32,32,124,32,124,9,124,
                32,124,10,9,9,9,32,32,32,124,
                32,124,32,32,124,32,124,10,9,9,
                9,32,32,32,124,32,124,9,124,32,
                124,10,9,9,9,32,32,47,124,9,
                32,32,124,92,10,9,9,9,32,47,
                46,124,9,32,32,124,46,92,10,9,
                9,9,47,46,46,124,32,9,32,32,
                124,46,46,92,10,9,9,32,32,32,
                32,32,32,32,32,124,46,46,47,96,
                94,124,94,96,96,92,46,46,124,10,
                9,9,9,124,46,47,32,40,46,124,
                46,41,46,32,92,46,124,10,9,9,
                9,124,47,32,32,40,46,124,46,41,
                46,46,32,92,124,10,9,9,9,32,
                32,40,40,46,46,46,46,46,41,41,
                10,9,9,9,32,40,40,46,46,46,
                -107,46,46,46,41,41,10,9,9,9,
                32,32,40,40,46,46,46,46,46,41,
                41,10,9,9,9,32,32,32,32,40,
                40,46,46,41,41,10,9,9,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,40,46,46,41,10,10,10,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void explosion2nd()
{
    int i;
    char ar[]= {10,10,10,10,10,10,10,10,10,
                10,10,10,10,10,10,9,9,9,32,
                32,32,32,32,32,32,32,32,32,32,
                40,10,9,9,9,32,32,32,32,32,
                32,32,32,32,32,40,32,40,10,32,
                9,9,9,32,32,32,32,32,32,32,
                32,32,41,92,32,32,41,10,9,32,
                32,32,32,32,32,32,9,9,32,32,
                32,32,32,32,32,32,40,40,41,32,
                32,47,40,10,9,9,9,9,32,47,
                40,32,95,41,41,32,10,9,9,9,
                9,32,40,95,32,32,41,41,10,32,
                32,32,32,32,9,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,95,95,44,45,126,
                126,47,126,32,32,32,32,96,45,45,
                45,46,10,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,95,
                47,95,44,45,45,45,40,32,32,32,
                32,32,32,44,32,32,32,32,41,10,
                32,9,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,95,95,32,47,
                32,32,32,32,32,32,32,32,60,32,
                32,32,32,47,32,32,32,41,32,32,
                92,95,95,95,10,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,61,61,61,
                61,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,61,
                61,61,61,61,61,10,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,92,47,32,32,126,34,126,34,126,
                34,126,34,126,34,126,92,126,34,126,
                41,126,34,47,10,32,9,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,40,95,32,40,32,32,
                32,92,32,32,40,32,32,32,32,32,
                62,32,32,32,32,92,41,10,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,92,95,40,32,95,32,
                60,32,32,32,32,32,32,32,32,32,
                62,95,62,39,10,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,126,32,96,45,105,39,
                32,58,58,62,124,45,45,34,10,32,
                32,9,9,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                73,59,124,46,124,46,124,10,32,9,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,60,124,105,58,58,124,105,
                124,96,32,10,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,40,96,32,94,39,34,
                96,45,39,32,34,41,10,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,40,95,
                95,95,95,95,95,95,95,41,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                10,10,9,9,9,32,32,10,10,10,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void explosion1st()
{
    int i;
    char ar[]= {10,10,10,10,10,10,10,10,10,
                10,10,10,10,10,10,10,10,10,10,
                10,10,10,10,9,9,9,32,32,32,
                32,32,32,32,32,32,32,32,10,32,
                9,9,32,32,32,32,32,32,32,32,
                32,32,32,32,32,40,32,32,45,95,
                32,32,32,32,95,41,46,10,32,9,
                9,32,32,32,32,32,32,32,32,32,
                32,32,40,32,126,32,32,32,32,32,
                32,32,41,32,32,32,41,10,32,32,
                9,9,32,32,32,32,32,32,32,32,
                32,40,40,32,41,32,32,40,32,32,
                32,32,41,32,32,40,41,32,32,41,
                10,32,32,32,32,32,9,9,9,32,
                32,40,46,32,32,32,41,41,32,40,
                32,32,32,32,32,32,32,41,10,32,
                32,32,32,32,32,32,32,9,9,32,
                32,32,32,96,32,96,46,46,32,32,
                32,32,32,46,46,96,96,10,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,9,9,9,32,32,124,32,124,10,
                32,32,32,32,32,32,32,32,32,32,
                32,9,9,32,32,32,32,32,32,32,
                32,40,61,124,32,124,61,41,10,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,9,32,32,32,32,32,9,9,
                32,32,124,32,124,32,32,32,32,32,
                32,32,32,32,10,95,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,40,95,95,95,
                95,95,95,95,95,41,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,10,10,
                9,9,9,32,32,10,10,10,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}

///rocket works
void rocket_down()
{
    Sleep(1000);
    col(14,0);
    rocket_stand();
    Sleep(1000);
    system("cls");
    explosion1st();
    Sleep(1000);
    system("cls");
    //Sleep(1000);
    explosion2nd();
    Sleep(1000);
    system("cls");
    col(12,0);
    printf("\n\n\n\n\t\t\t B  ");
    col(10,0);
    printf("O  ");
    col(14,0);
    printf("O  ");
    col(9,0);
    printf("M");
    Sleep(1500);
    system("cls");
    col(13,0);
    printf("\n\n\n\n\t\t OH...NO WHAT HAVE U DONE???\n\n\n");
    Sleep(1500);
    col(12,0);
    printf("\n\n\n\n\t\t Press any key to continue");
    getch();
}

void rocket_go()
{
    Sleep(1000);
    rocket_stand();
    Sleep(1000);
    system("cls");
    rocket_mid();
    Sleep(1000);
    system("cls");
    rocket_last();
    Sleep(1000);
    system("cls");
    col(10,0);
    printf("\n\n\n\n\t\t\t CONGRATULATION... ITS GONE...\n\n\n");
    Sleep(1500);
    col(12,0);
    printf("\n\n\t\t\t Press any key to continue");
    getch();
}
///...................................................................................................

///PAIR MATCH........................................................................................
///...................................................................................................
int pair_match()
{
    system("cls");
    start1();
    Sleep(1000);
    system("cls");
    col(12,0);
    start2();
    Sleep(1000);
    system("cls");
    col(12,0);
    start3();
    Sleep(1000);
    col(10,0);
    system("cls");
    start4();
    Sleep(2000);
    FILE *fp;
    fp=fopen("highscore.txt","r");
    fscanf(fp,"%d",&besttime);
    fclose(fp);
    while(1)
    {
        int arrow=main_menu_pair_match();
        int arrow2;
        while(1)
        {
            if(arrow==1)arrow2=game_pair_match();
            else if(arrow==2)arrow2=instruction_pm();
            else if(arrow==3)arrow2=highscore_pm();
            else if(arrow==4)
            {
                shut_down_pm();
                return 0;
            }
            if(arrow2==2)break;
        }
    }
}
///for random number
int random_pm(int high)
{
    int rand_num;
    time_t s;
    time(&s);
    srand(s);
    rand_num=rand()%high;
    return rand_num;
}
///for shuffling the array
void shuffle()
{
    int i,l,rand_num,temp,high,j=0;
    l=sizeof(symbol)/sizeof(int);
    while(j<6)
    {
        high=5;
        for(;;)
        {
            rand_num=random_pm(high);
            temp=symbol[j][rand_num];
            symbol[j][rand_num]=symbol[j][high];
            symbol[j][high]=temp;
            high--;
            if(high==0)break;
        }
        j++;
    }
}
///for play again
int play_again_pm()
{
    char choice;
    int arrow2=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t*** DO U WANT TO PLAY AGAIN??? ***\n\t(use arrow keys to move cursor and press enter to select)\n\n");
        if(arrow2==1)
        {
            col(14,0);
            printf("\t\t\t   1.");
            col(14,2);
            printf("       YES         \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   1.       Yes \n");
        }
        if(arrow2==2)
        {
            col(14,0);
            printf("\t\t\t   1.");
            col(14,2);
            printf("       NO          \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   1.       NO  \n");
        }
        col(11,0);
        choice=getch();
        if(choice==72)arrow2--;
        if(choice==80)arrow2++;
        if(arrow2>2)arrow2=1;
        if(arrow2<1)arrow2=2;
    }
    while(choice!=13);
    return arrow2;
}
///for game over
int game_over_pm(int starttime,int endtime)
{
    int sec,mint;
    FILE *fp;
    mint=(endtime-starttime)/60;
    sec=(endtime-starttime)%60;

    Sleep(1000);
    system("cls");
    col(12,0);
    Sleep(500);
    printf("\n\n\n\t\t=>\t    G    \t<=\n");
    Sleep(100);
    printf("\t\t=>\t    A    \t<=\n");
    Sleep(100);
    printf("\t\t=>\t    M    \t<=\n");
    Sleep(100);
    printf("\t\t=>\t    E    \t<=\n");
    Sleep(500);
    printf("\n\n\n\t\t=>\t    O    \t<=\n");
    Sleep(100);
    printf("\t\t=>\t    V    \t<=\n");
    Sleep(100);
    printf("\t\t=>\t    E    \t<=\n");
    Sleep(100);
    printf("\t\t=>\t    R    \t<=\n\n\n");
    Sleep(500);
    col(14,0);
    printf("\n\t\t You did it in %d min %d sec\n",mint,sec);
    Sleep(500);
    if((endtime-starttime)<besttime)
    {
        Sleep(1000);
        besttime=endtime-starttime;
        fp=fopen("highscore.txt","w");
        fprintf(fp,"%d",besttime);
        fclose(fp);
        system("cls");
        col(10,0);
        printf("\n\n\n\n\n\n\t\tC.O.N.G.R.A.T.U.L.A.T.I.O.N\n");
        Sleep(500);
        printf("\n\n\n\t\tyou have got the best timing\n");
        Sleep(1000);
    }
    col(12,0);
    printf("\n\n\n\t\t Press any key to continue\n");
    getch();
}
///for getting symbols
int get_symbol(int r, int c)
{
    int num,high=5,low=1;
    time_t s;
    time(&s);
    srand(s);
    num=rand()%(high-low+1)+low;
    return symbol[(r-1)/2][c];
}

///for drawing grid
int draw_grid_pm(char grid[24][43])
{
    int i,j;
    printf("\t");
    for(i=0; i<24; i++)
    {
        col(10,0);
        if(i==1)printf("press       ");
        else if(i==3)printf("arrow       ");
        else if(i==5)printf("keys        ");
        else if(i==7)printf("to          ");
        else if(i==9)printf("move        ");
        else if(i==11)printf("the         ");
        else if(i==13)printf("cursor      ");
        else if(i==15)printf("and         ");
        else if(i==17)printf("enter       ");
        else if(i==19)printf("to          ");
        else if(i==21)printf("select      ");
        else printf("            ");
        col(12,0);
        printf("%c\t\t",254);
        col(14,0);
        puts(grid[i]);
        printf("\t");
    }
    col(11,0);
    printf("\n\t\t\t\t>> press esc to quit\n");
}
///for game play
int game_pair_match()
{
    shuffle();
    int r=1,c=0,check[36][2],i=0,k,l,flag,count=0,arrow2;
    time_t starttime,endtime;
    starttime=time(NULL);
    char press,symbol;
    char grid[24][43]=        {"|`````||`````||`````||`````||`````||`````|",
                               "|     ||     ||     ||     ||     ||     |",
                               "|     ||     ||     ||     ||     ||     |",
                               "------------------------------------------",
                               "|`````||`````||`````||`````||`````||`````|",
                               "|     ||     ||     ||     ||     ||     |",
                               "|     ||     ||     ||     ||     ||     |",
                               "------------------------------------------",
                               "|`````||`````||`````||`````||`````||`````|",
                               "|     ||     ||     ||     ||     ||     |",
                               "|     ||     ||     ||     ||     ||     |",
                               "------------------------------------------",
                               "|`````||`````||`````||`````||`````||`````|",
                               "|     ||     ||     ||     ||     ||     |",
                               "|     ||     ||     ||     ||     ||     |",
                               "------------------------------------------",
                               "|`````||`````||`````||`````||`````||`````|",
                               "|     ||     ||     ||     ||     ||     |",
                               "|     ||     ||     ||     ||     ||     |",
                               "------------------------------------------",
                               "|`````||`````||`````||`````||`````||`````|",
                               "|     ||     ||     ||     ||     ||     |",
                               "|     ||     ||     ||     ||     ||     |",
                               "------------------------------------------"
                              };
    for(l=0; l<36; l++)
    {
        for(k=0; k<2; k++)check[l][k]=-1;
    }
    while(1)
    {
        press='\0';
        flag=0;
        system("cls");
        while(press!=13)
        {
            system("cls");
            grid[r*2-1][c*7]=16;
            draw_grid_pm(grid);
            grid[r*2-1][c*7]='|';
            press=getch();
            if(press==27)return 2;
            if(press==72)r=r-2;
            if(press==80)r=r+2;
            if(r>11)r=1;
            if(r<1)r=11;
            if(press==75)c--;
            if(press==77)c++;
            if(c>5)c=0;
            if(c<0)c=5;
        }
        for(k=0; k<36; k++)
        {
            if(r==check[k][0]&&c==check[k][1])
            {
                flag=1;
                col(12,0);
                printf("\n\t\t\t\tWARNING!!! This slot has already been selected\n\t\t\t\tPress any key to continue\n");
                getch();
            }
        }
        if(flag==1)continue;
        check[i][0]=r;
        check[i][1]=c;
        i++;
        symbol=get_symbol(r,c);
        grid[r*2-1][c*7+3]=symbol;
        system("cls");
        draw_grid_pm(grid);
        if(i%2==0)
        {
            int r1=check[i-1][0], c1=check[i-1][1], r2=check[i-2][0],c2=check[i-2][1];
            if(grid[r1*2-1][c1*7+3]==grid[r2*2-1][c2*7+3])
            {
                col(10,0);
                printf("\n\t\t\t\tWELL DONE!!! You found a match\n\t\t\t\tPress any key to continue");
                count++;
                getch();
            }
            else
            {
                col(13,0);
                printf("\n\t\t\t\tSORRY!!! No match found\n\t\t\t\t");
                for(l=1; l<=12; l++)
                {
                    printf(". ");
                    Sleep(100);
                }
                Sleep(100);
                grid[r1*2-1][c1*7+3]=' ';
                grid[r2*2-1][c2*7+3]=' ';
                check[i-1][0]=-1;
                check[i-1][1]=-1;
                check[i-2][0]=-1;
                check[i-2][1]=-1;
                i=i-2;
            }
        }
        if(count==18)
        {
            endtime=time(NULL);
            game_over_pm(starttime,endtime);
            break;
        }
    }
    arrow2=play_again_pm();
    return arrow2;
}
///for high score
int highscore_pm()
{
    system("cls");
    col(10,0);
    printf("\n\tBEST TIMING: %d min %d sec\n",besttime/60,besttime%60);
    col(12,0);
    printf("\n\n\tPress any key to continue");
    getch();
    return 2;
}
///for instruction
int instruction_pm()
{
    col(10,0);
    system("cls");
    printf("Move the cursor and make a pair");
    col(12,0);
    printf("\n\nPress any key to continue");
    getch();
    return 2;
}

///FUNCTION FOR MAIN MENU
int main_menu_pair_match()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t*** WELCOME TO RIP'S PAIR MATCH ***\n\t(use arrow keys to move cursor and press enter to select)\n\n");
        if(arrow==1)
        {
            col(14,0);
            printf("\t\t\t   1.");
            col(14,2);
            printf("       PLAY GAME          \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   1.       Play Game  \n");
        }
        if(arrow==2)
        {
            printf("\t\t\t   2.");
            col(14,2);
            printf("       INSTRUCTION        \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   2.       Instruction \n");
        }

        if(arrow==3)
        {
            printf("\t\t\t   3.");
            col(14,2);
            printf("       HIGHSCORE          \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   3.       Highscore   \n");
        }
        if(arrow==4)
        {
            printf("\t\t\t   4.");
            col(14,2);
            printf("       EXIT               \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   4.       Exit        \n");
        }
        col(11,0);
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>4)arrow=1;
        if(arrow<1)arrow=4;
    }
    while(choice!=13);
    return arrow;
}

///SHUT DOWN
int shut_down_pm()
{
    int i;
    col(12,0);
    system("cls");
    printf("\nShutting Down");
    for(i=1; i<=3; i++)
    {
        Sleep(500);
        printf(". ");
    }
    printf("\n");
    Sleep(1000);
}
///start up animation
void start1()
{
    int i;
    char ar[]= {10,9,9,32,32,32,32,32,9,
                9,9,32,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,10,9,
                9,32,32,32,32,32,9,9,9,124,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,124,10,9,9,32,
                32,32,32,32,9,9,9,124,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,124,10,9,9,32,32,32,
                32,32,9,9,9,124,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,124,10,9,9,32,32,32,32,32,
                9,9,9,124,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,124,
                10,9,9,32,32,32,32,32,9,9,
                9,124,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,124,10,9,
                9,32,32,32,32,32,9,9,9,124,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,124,10,9,9,32,
                32,32,32,32,9,9,9,124,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,124,10,10,10,10,10,9,
                32,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,10,9,124,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,124,10,32,32,32,32,
                32,9,124,9,32,32,32,32,32,32,
                32,32,124,10,9,124,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,124,10,9,124,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                124,10,9,124,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,124,
                10,9,124,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,124,10,
                32,32,32,32,32,9,124,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,124,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void start2()
{
    int i;
    char ar[]= {10,9,9,32,32,32,32,32,9,
                9,9,32,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,10,9,
                9,32,32,32,32,32,9,9,9,124,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,124,10,9,9,32,
                32,32,32,32,9,9,9,124,32,32,
                32,32,32,32,32,88,32,32,32,32,
                32,32,32,124,10,9,9,32,32,32,
                32,32,9,9,9,124,32,32,32,32,
                32,88,88,88,88,88,32,32,32,32,
                32,124,10,9,9,32,32,32,32,32,
                9,9,9,124,32,32,32,88,88,88,
                88,88,88,88,88,88,32,32,32,124,
                10,9,9,32,32,32,32,32,9,9,
                9,124,32,32,32,32,32,88,88,88,
                88,88,32,32,32,32,32,124,10,9,
                9,32,32,32,32,32,9,9,9,124,
                32,32,32,32,32,32,32,88,32,32,
                32,32,32,32,32,124,10,9,9,32,
                32,32,32,32,9,9,9,124,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,124,10,10,10,10,10,9,
                32,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,10,9,124,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,124,10,32,32,32,32,
                32,9,124,9,32,32,32,32,32,32,
                32,32,124,10,9,124,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,124,10,9,124,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                124,10,9,124,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,124,
                10,9,124,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,124,10,
                32,32,32,32,32,9,124,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,124,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void start3()
{
    int i;
    char ar[]= {10,9,9,32,32,32,32,32,9,
                9,9,32,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,10,9,
                9,32,32,32,32,32,9,9,9,124,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,124,10,9,9,32,
                32,32,32,32,9,9,9,124,32,32,
                32,32,32,32,32,88,32,32,32,32,
                32,32,32,124,10,9,9,32,32,32,
                32,32,9,9,9,124,32,32,32,32,
                32,88,88,88,88,88,32,32,32,32,
                32,124,10,9,9,32,32,32,32,32,
                9,9,9,124,32,32,32,88,88,88,
                88,88,88,88,88,88,32,32,32,124,
                10,9,9,32,32,32,32,32,9,9,
                9,124,32,32,32,32,32,88,88,88,
                88,88,32,32,32,32,32,124,10,9,
                9,32,32,32,32,32,9,9,9,124,
                32,32,32,32,32,32,32,88,32,32,
                32,32,32,32,32,124,10,9,9,32,
                32,32,32,32,9,9,9,124,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,95,124,10,10,10,10,10,9,
                32,95,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,10,9,124,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,124,10,32,32,32,32,
                32,9,124,9,88,32,32,32,32,32,
                32,32,124,10,9,124,32,32,32,32,
                32,88,88,88,88,88,32,32,32,32,
                32,124,10,9,124,32,32,32,88,88,
                88,88,88,88,88,88,88,32,32,32,
                124,10,9,124,32,32,32,32,32,88,
                88,88,88,88,32,32,32,32,32,124,
                10,9,124,32,32,32,32,32,32,32,
                88,32,32,32,32,32,32,32,124,10,
                32,32,32,32,32,9,124,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                95,95,124,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void start4()
{
    int i;
    char ar[]= {10,9,9,32,32,32,32,32,9,
                9,9,32,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,95,10,9,
                32,95,95,95,95,9,32,32,32,32,
                32,9,32,32,32,32,32,95,95,95,
                95,9,124,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,124,10,
                9,124,32,32,32,32,124,32,9,47,
                92,9,124,32,32,32,124,9,32,124,
                9,124,32,32,32,32,32,32,32,88,
                32,32,32,32,32,32,32,124,10,9,
                124,95,95,95,95,124,32,47,95,95,
                92,32,32,32,32,9,124,32,32,32,
                124,95,95,95,95,124,9,124,32,32,
                32,32,32,88,88,88,88,88,32,32,
                32,32,32,124,10,9,124,32,32,32,
                32,32,47,9,32,32,32,92,32,32,
                9,124,32,32,32,124,92,95,9,9,
                124,32,32,32,88,88,88,88,88,88,
                88,88,88,32,32,32,124,10,9,124,
                32,32,32,32,47,32,32,32,32,32,
                32,92,32,32,32,124,32,32,32,124,
                32,32,92,95,9,124,32,32,32,32,
                32,88,88,88,88,88,32,32,32,32,
                32,124,10,9,9,32,32,32,32,32,
                9,9,9,124,32,32,32,32,32,32,
                32,88,32,32,32,32,32,32,32,124,
                10,9,9,32,32,32,32,32,9,9,
                9,124,95,95,95,95,95,95,95,95,
                95,95,95,95,95,95,95,124,10,10,
                10,10,10,9,32,95,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                10,9,124,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,124,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,95,95,95,95,95,32,32,
                32,95,95,95,95,32,32,10,32,32,
                32,32,32,9,124,9,88,32,32,32,
                32,32,32,32,124,32,32,124,92,47,
                124,32,32,32,47,92,32,32,32,32,
                32,124,32,32,32,32,124,32,32,32,
                32,32,32,124,32,32,32,32,124,10,
                9,124,32,32,32,32,32,88,88,88,
                88,88,32,32,32,32,32,124,32,32,
                124,32,32,124,32,32,47,95,95,92,
                32,32,32,32,124,32,32,32,32,124,
                32,32,32,32,32,32,124,95,95,95,
                95,124,10,9,124,32,32,32,88,88,
                88,88,88,88,88,88,88,32,32,32,
                124,32,32,124,32,32,124,32,47,32,
                32,32,32,92,32,32,32,124,32,32,
                32,32,124,32,32,32,32,32,32,124,
                32,32,32,32,124,10,9,124,32,32,
                32,32,32,88,88,88,88,88,32,32,
                32,32,32,124,32,32,124,32,32,124,
                32,32,32,32,32,32,32,32,32,32,
                124,32,32,32,32,124,95,95,95,95,
                32,32,124,32,32,32,32,124,10,9,
                124,32,32,32,32,32,32,32,88,32,
                32,32,32,32,32,32,124,10,32,32,
                32,32,32,9,124,95,95,95,95,95,
                95,95,95,95,95,95,95,95,95,95,
                124,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
///...................................................................................................

///SMILIES IN HOLE....................................................................................
///...................................................................................................
int smilies_in_hole()
{
    int arrow, arrow2,i;
    col(1,0);
    FILE *fp;
    fp=fopen("high.txt","r");
    fscanf(fp,"%d",&high);
    fclose(fp);
    sm_strtanim();
    Sleep(2000);
    sm_nameanim();
    Sleep(2000);
    while(1)
    {
        arrow=main_menu_smh();
        if(arrow==1)the_game_smh();
        else if(arrow==2)
        {
            instruction_smh();
            continue;
        }
        else if(arrow==3)highscore_smh();
        else break;
    }
    ///SHUT DOWN
    system("cls");
    col(12,0);
    printf("\nShutting Down");
    for(i=1; i<=3; i++)
    {
        Sleep(500);
        printf(". ");
    }
    printf("\n");
    Sleep(1000);

    return 0;
}

///random number creator...
int rand_num()
{
    time_t seconds;
    time(&seconds);
    srand(seconds);
    return rand()%(9-1+1)+1;
}
void sm_strtanim()
{
    system("cls");
    int i;
    col(11,0);
    char ar[]= {9,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,111,111,
                111,111,36,36,36,36,36,36,36,36,
                36,36,36,36,111,111,111,111,10,9,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,111,111,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,111,10,
                9,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                111,111,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,111,10,9,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,111,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,111,
                10,9,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,111,36,36,
                36,36,36,36,36,36,36,32,32,32,
                32,36,36,36,36,36,36,36,36,36,
                36,36,36,36,32,32,32,32,36,36,
                36,36,36,36,36,36,36,111,10,9,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,111,36,36,36,36,36,
                36,36,36,36,32,32,32,32,32,32,
                36,36,36,36,36,36,36,36,36,36,
                36,32,32,32,32,32,32,36,36,36,
                36,36,36,36,36,36,36,111,10,9,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,36,36,36,36,36,36,36,
                36,36,36,36,32,32,32,32,32,32,
                36,36,36,36,36,36,36,36,36,36,
                36,32,32,32,32,32,32,36,36,36,
                36,36,36,36,36,36,36,36,36,10,
                9,32,32,32,32,32,32,32,32,32,
                32,32,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,32,32,32,32,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,32,32,32,32,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,10,9,32,32,32,32,32,32,32,
                32,32,32,32,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,10,9,32,32,32,32,32,
                32,32,32,32,32,111,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,10,9,32,32,
                32,32,32,32,32,32,32,32,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,10,
                9,32,32,32,32,32,32,32,32,32,
                32,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,34,32,34,36,
                36,36,10,9,32,32,32,32,32,32,
                32,32,32,32,36,36,36,36,36,32,
                32,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,32,32,
                32,111,36,36,36,10,9,32,32,32,
                32,32,32,32,32,32,32,34,36,36,
                36,36,32,32,32,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,32,
                32,32,32,32,36,36,36,10,9,32,
                32,32,32,32,32,32,32,32,32,32,
                32,36,36,36,36,32,32,32,32,34,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,36,36,36,36,34,32,
                32,32,32,32,32,111,36,36,36,10,
                9,32,32,32,32,32,32,32,32,32,
                32,32,32,34,36,36,36,111,32,32,
                32,32,32,34,34,34,36,36,36,36,
                36,36,36,36,36,36,36,36,36,36,
                36,36,36,36,34,36,36,34,32,32,
                32,32,32,32,32,32,32,36,36,36,
                10,9,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,36,36,36,111,
                32,32,32,32,32,32,32,32,32,32,
                34,36,36,34,34,36,36,36,36,36,
                36,34,34,34,34,32,32,32,32,32,
                32,32,32,32,32,32,111,36,36,36,
                10,9,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,36,36,36,
                36,111,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,111,36,36,36,34,10,
                9,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,34,36,36,
                36,36,111,32,32,32,32,32,32,111,
                36,36,36,36,36,36,111,34,36,36,
                36,36,111,32,32,32,32,32,32,32,
                32,111,36,36,36,36,10,9,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,34,36,36,36,
                36,36,111,111,32,32,32,32,32,34,
                34,36,36,36,36,111,36,36,36,36,
                36,111,32,32,32,111,36,36,36,36,
                34,34,10,9,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,34,34,36,36,36,
                36,36,111,111,111,111,32,32,34,36,
                36,36,111,36,36,36,36,36,36,36,
                36,36,34,34,34,10,9,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,34,34,36,36,36,36,36,36,36,
                111,111,32,36,36,36,36,36,36,36,
                36,36,36,10,9,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,34,34,34,
                34,36,36,36,36,36,36,36,36,36,
                36,36,10,9,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                36,36,36,36,36,36,36,36,36,36,
                36,36,10,9,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,36,36,36,36,36,36,36,36,36,
                36,34,10,9,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,34,36,36,36,34,34,34,34,10,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        //Sleep(8);
    }
}
void sm_nameanim()
{
    col(13,0);
    int i;
    char ar[]= {9,32,32,32,32,32,32,32,32,
                32,32,95,95,95,32,32,95,32,32,
                95,32,32,32,32,32,32,32,32,32,
                32,32,32,95,95,95,32,32,32,32,
                95,95,95,32,32,32,32,32,32,32,
                32,32,32,32,32,32,32,32,32,32,
                95,95,95,32,32,32,32,32,32,32,
                95,95,95,10,9,9,32,124,95,95,
                32,32,124,32,92,47,32,124,32,124,
                32,124,32,32,32,32,124,32,124,95,
                95,32,32,124,32,124,95,95,32,32,
                32,32,124,32,124,92,32,124,32,32,
                32,124,95,95,124,124,32,32,32,124,
                32,124,32,32,32,124,95,95,10,32,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,32,32,32,95,95,95,124,
                32,124,32,32,32,32,124,32,124,32,
                124,95,95,95,32,124,32,124,95,95,
                95,32,124,32,95,95,95,124,32,32,
                32,124,32,124,32,92,124,32,32,32,
                124,32,32,124,124,95,95,95,124,32,
                124,95,95,95,124,95,95,95,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
        Sleep(4);
    }
}
///point refference grid...
void blank()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void refference()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,49,32,32,
                124,124,32,32,50,32,32,124,124,32,
                32,51,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,52,32,32,124,124,32,
                32,53,32,32,124,124,32,32,54,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,55,32,32,124,124,32,32,56,32,
                32,124,124,32,32,57,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
///point grid draw...
void point1()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,2,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void point2()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,2,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void point3()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,2,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void point4()
{

    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,2,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void point5()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,2,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void point6()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,2,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void point7()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,2,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void point8()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,2,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void point9()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,2,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
///jerk grid draw
void jerk1()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,1,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void jerk2()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,1,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void jerk3()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,1,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void jerk4()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,1,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void jerk5()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,1,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void jerk6()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,1,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void jerk7()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,1,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void jerk8()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,1,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
void jerk9()
{
    int i;
    char ar[]= {10,10,10,10,10,32,32,32,32,
                32,32,32,32,9,9,10,9,9,9,
                32,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,10,9,9,9,124,124,32,32,
                32,32,32,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,32,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,10,
                9,9,9,124,124,32,32,32,32,32,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                10,9,9,9,32,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,10,9,9,9,
                124,124,32,32,32,32,32,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,10,9,9,9,124,124,32,
                32,32,32,32,124,124,32,32,32,32,
                32,124,124,32,32,1,32,32,124,124,
                10,9,9,9,124,124,32,32,32,32,
                32,124,124,32,32,32,32,32,124,124,
                32,32,32,32,32,124,124,10,9,9,
                9,32,45,45,45,45,45,45,45,45,
                45,45,45,45,45,45,45,45,45,45,
                45,45,45,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
}
///for printing the grids...
int logic()
{
    int gridnum=rand_num();
    pnt_jerk=rand_num()%3;
    if(pnt_jerk==1||pnt_jerk==2)
    {
        switch(gridnum)
        {
        case 1:
            point1();
            break;
        case 2:
            point2();
            break;
        case 3:
            point3();
            break;
        case 4:
            point4();
            break;
        case 5:
            point5();
            break;
        case 6:
            point6();
            break;
        case 7:
            point7();
            break;
        case 8:
            point8();
            break;
        case 9:
            point9();
            break;
        }
    }
    else
    {
        switch(gridnum)
        {
        case 1:
            jerk1();
            break;
        case 2:
            jerk2();
            break;
        case 3:
            jerk3();
            break;
        case 4:
            jerk4();
            break;
        case 5:
            jerk5();
            break;
        case 6:
            jerk6();
            break;
        case 7:
            jerk7();
            break;
        case 8:
            jerk8();
            break;
        case 9:
            jerk9();
            break;
        }
    }
    return gridnum;
}

///function for play again
int play_again_smh()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t*** DO U WANT TO PLAY AGAIN??? ***\n\t(use arrow keys to move cursor and press enter to select)\n\n");
        if(arrow==1)
        {
            col(14,0);
            printf("\t\t\t   1.");
            col(14,2);
            printf("       YES        \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   1.       Yes \n");
        }
        if(arrow==2)
        {
            col(14,0);
            printf("\t\t\t   1.");
            col(14,2);
            printf("       NO         \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   1.       NO  \n");
        }
        col(11,0);
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>2)arrow=1;
        if(arrow<1)arrow=2;
    }
    while(choice!=13);
    return arrow;
}

///for gameover showing...
int gameover_smh()
{
    Sleep(1000);
    col(12,0);
    system("cls");
    Sleep(500);
    Sleep(500);
    printf("\n\n\n\t\t=>\t    G    \t<=\n");
    Sleep(100);
    printf("\t\t=>\t    A    \t<=\n");
    Sleep(100);
    printf("\t\t=>\t    M    \t<=\n");
    Sleep(100);
    printf("\t\t=>\t    E    \t<=\n");
    Sleep(500);
    printf("\n\n\n\t\t=>\t    O    \t<=\n");
    Sleep(100);
    printf("\t\t=>\t    V    \t<=\n");
    Sleep(100);
    printf("\t\t=>\t    E    \t<=\n");
    Sleep(100);
    printf("\t\t=>\t    R    \t<=\n\n\n");
    Sleep(500);

    col(14,0);
    printf("\n\t\t  You have scored: %d\n",score);
    Sleep(1500);
    life=3;
    FILE *fp;
    if(score>high)
    {
        system("cls");
        col(10,0);
        printf("\n\n\tC O N G R A T U L A T I O N ! ! !\n\n\tNew Highscore");
        high=score;
        fp=fopen("high.txt","w");
        fprintf(fp,"%d",high);
        fclose(fp);
    }
    score=0;
    speed=1500;
    Sleep(500);
    int i=0;
    for(i=0; i<4; i++)
    {
        flag[i]=0;
    }
    col(12,0);
    printf("\n\n\t\tPress any key to continue\n");
    getch();
    int arrow=play_again_pm();
    return arrow;
}
///key press checking...
int play_smh(int turn, char press)
{
    int arrow=1,i;
    if(score==50&&flag[0]==0)
    {
        speed=speed-300;
        flag[0]=1;
    }
    else if(score==100&&flag[1]==0)
    {
        speed=speed-200;
        flag[1]=1;
    }
    else if(score==150&&flag[2]==0)
    {
        speed=speed-200;
        flag[2]=1;
    }
    else if(score==200&&flag[3]==0)
    {
        speed=speed-100;
        flag[3]=1;
    }
    if(pnt_jerk==1||pnt_jerk==2)
    {
        if(press-'0'==turn)
        {
            system("cls");
            col(10,0);
            printf("\t\t     Use Only Number Key (1-9) To Play");
            col(13,0);
            printf("\n\n\t\tScore: %d",score);
            printf("   \t\t\tLife: ");

            for(i=0; i<life; i++)
                printf("%c",3);
            col(14,0);
            blank();
            col(12,0);
            printf("\n\t\t\t   press esc to quit\n");
            col(11,0);
            printf("\n\n\n\t\t\t  YEAH... U HIT IT \n");
            Sleep(300);
            score=score+10;
        }
        else
        {
            system("cls");
            col(10,0);
            printf("\t\t     Use Only Number Key (1-9) To Play");
            col(13,0);
            printf("\n\n\t\tScore: %d",score);
            printf("   \t\t\tLife: ");

            for(i=0; i<life; i++)
                printf("%c",3);
            col(14,0);
            blank();
            col(12,0);
            printf("\n\t\t\t   press esc to quit\n");
            life--;
            col(12,0);
            printf("\n\n\n\t\t\t  NO... U MISSED IT\n");
            Sleep(300);
            if(life==0)
            {
                arrow=gameover_smh();
            }

        }
    }
    else
    {
        if(press-'0'>=1&&press-'0'<=9&&score!=0)
        {
            score=score-20;
            system("cls");
            col(10,0);
            printf("\t\t     Use Only Number Key (1-9) To Play");
            col(13,0);
            printf("\n\n\t\tScore: %d",score);
            //col(13,0);
            printf("   \t\t\tLife: ");

            for(i=0; i<life; i++)
                printf("%c",3);
            col(14,0);
            blank();
            col(12,0);
            printf("\n\t\t\t   press esc to quit\n");
            col(13,0);
            printf("\n\n\n\t\t\t  WRONG CHOICE...\n");
            Sleep(300);
            if(score<0)
                score=0;
        }
    }
    return arrow;
}
///main game play...
int the_game_smh()
{
    system("cls");
    col(10,0);
    printf("\t\t\t      Grid Numbers");
    col(14,0);
    refference();
    int i;
    col(11,0);
    printf("\n\n\n\t\t\tPress any key to Play\n");
    col(12,0);
    printf("\n\t\t\tPress esc to go to main menu\n");
    if(getch()==27)return 0;
    while(1)
    {
        char press='x';
        system("cls");
        col(10,0);
        printf("\t\t     Use Only Number Key (1-9) To Play");
        col(13,0);
        printf("\n\n\t\tScore: %d",score);
        printf("   \t\t\tLife: ");

        for(i=0; i<life; i++)
            printf("%c",3);
        col(14,0);
        blank();
        col(12,0);
        printf("\n\t\t\t   press esc to quit\n");
        Sleep(450);
        system("cls");
        col(10,0);
        printf("\t\t     Use Only Number Key (1-9) To Play");
        col(13,0);
        printf("\n\n\t\tScore: %d",score);
        printf("   \t\t\tLife: ");

        for(i=0; i<life; i++)
            printf("%c",3);
        col(14,0);
        int turn=logic();
        col(12,0);
        printf("\n\t\t\t   press esc to quit\n");
        Sleep(speed);
        if(kbhit())
        {
            fflush(stdin);
            press=getch();
        }
        if(press==27)
        {
            life=3;
            score=0;
            break;
        }
        Sleep(500);
        int arrow=play_smh(turn,press);
        if(arrow==2)break;
    }

}
///function for instruction
int instruction_smh()
{
    system("cls");
    col(10,0);
    char ch;
    int i;
    freopen("instruction.txt","r",stdin);
    for(;;)
    {
        scanf("%c",&ch);
        if(ch==54)break;
        printf("%c",ch);
    }
    col(12,0);
    printf("\n\n\t\tPress any key to go back to the main menu");
    getch();
}

///function for main menu
int main_menu_smh()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t*** WELCOME TO RIP'S SMILIES IN HOLE ***\n\t(use arrow keys to move cursor and press enter to select)\n\n");
        if(arrow==1)
        {
            col(14,0);
            printf("\t\t\t   1.");
            col(14,2);
            printf("       PLAY GAME          \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   1.       Play Game   \n");
        }
        if(arrow==2)
        {
            printf("\t\t\t   2.");
            col(14,2);
            printf("       INSTRUCTION        \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   2.       Instruction \n");
        }

        if(arrow==3)
        {
            printf("\t\t\t   3.");
            col(14,2);
            printf("       HIGHSCORE          \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   3.       Highscore   \n");
        }
        if(arrow==4)
        {
            printf("\t\t\t   4.");
            col(14,2);
            printf("       EXIT               \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   4.       Exit      \n");
        }
        col(11,0);
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>4)arrow=1;
        if(arrow<1)arrow=4;
    }
    while(choice!=13);
    return arrow;
}
///for showing highscore
void highscore_smh()
{
    system("cls");
    col(10,0);
    printf("\n\n\n\tHighscore: %d\n",high);
    col(12,0);
    printf("\n\n\tPress any key to continue...");
    getch();
}

///...................................................................................................
///TIC TAC TOE........................................................................................
///...................................................................................................
int tic_tac_toe()
{
    system("cls");
    int arrow, arrow2,i;
    start_animation_ttt();
    while(1)
    {
        arrow=main_menu_ttt();
        if(arrow==1)arrow2=game_menu_ttt();
        else if(arrow==2)
        {
            instruction_ttt();
            continue;
        }
        else if(arrow==3)break;
        if(arrow2==1)single_player_ttt();
        else if(arrow2==2)multiplayer_ttt();
    }
    ///SHUT DOWN
    system("cls");
    col(12,0);
    printf("\nShutting Down");
    for(i=1; i<=3; i++)
    {
        Sleep(500);
        printf(". ");
    }
    Sleep(1000);
    return 0;
}
///function for drawing grid
int draw_grid_ttt(int r, int c, char name1[], char name2[])
{
    int i,x=5,y=8,row=0,colm=0;
    static int s=1;
    printf(">>  %s TAKES x AND %s TAKES o\n\n",name1,name2);
    if(s==1)Sleep(1000);
    printf(">>  CAPS LOCK OFF PLZ!!!!\n\n");
    if(s==1)Sleep(1000);
    printf(">>  %s HAS THE 1st MOVE(x)\n\n",name1);
    if(s==1)
    {
        Sleep(1000);
        s++;
    }
    col(10,0);
    for(i=7; i<=17; i++)
    {
        gotoXY(8,i);
        printf("%c",219);
        gotoXY(16,i);
        printf("%c",219);
    }
    for(i=3; i<=21; i++)
    {
        gotoXY(i,10);
        printf("%c",254);
        gotoXY(i,14);
        printf("%c",254);
    }
    col(11,0);
}

///function for saving name animation
void save_name_ttt()
{
    int i;
    printf("\nSAVING PLAYER'S NAME\nplease wait ");
    for(i=1; i<=3; i++)
    {
        Sleep(500);
        printf(". ");
    }
    Sleep(500);
    printf("\n\nN.A.M.E....S.A.V.E.D\n");
    Sleep(500);
    col(12,0);
    printf("\npress ENTER to continue");
    col(11,0);
}

///function for dots
void dots()
{
    int i;
    Sleep(500);
    printf("\n\n    . ");
    for(i=1; i<=8; i++)
    {
        Sleep(100);
        printf(". ");
    }
}

///function for result
char result_ttt(int count_press)
{
    char winner='\0';
    if(a[0][0]!=' '&&a[0][0]==a[0][1]&&a[0][1]==a[0][2])
    {
        winner=a[0][0];
        dots();
    }
    else if(a[1][0]!=' '&&a[1][0]==a[1][1]&&a[1][1]==a[1][2])
    {
        winner=a[1][0];
        dots();
    }
    else if(a[2][0]!=' '&&a[2][0]==a[2][1]&&a[2][1]==a[2][2])
    {
        winner=a[2][0];
        dots();
    }
    else if(a[0][0]!=' '&&a[0][0]==a[1][0]&&a[1][0]==a[2][0])
    {
        winner=a[0][0];
        dots();
    }
    else if(a[0][1]!=' '&&a[0][1]==a[1][1]&&a[1][1]==a[2][1])
    {
        winner=a[0][1];
        dots();
    }
    else if(a[0][2]!=' '&&a[0][2]==a[1][2]&&a[1][2]==a[2][2])
    {
        winner=a[0][2];
        dots();
    }
    else if(a[0][0]!=' '&&a[0][0]==a[1][1]&&a[1][1]==a[2][2])
    {
        winner=a[0][0];
        dots();
    }
    else if(a[0][2]!=' '&&a[0][2]==a[1][1]&&a[1][1]==a[2][0])
    {
        winner=a[0][2];
        dots();
    }
    else if(count_press==9)
    {
        winner='D';
        dots();
    }
    return winner;
}

///function for multiplayer gameplay
int multiplayer_1(char name1[], char name2[])
{
    ///VARIABLES
    int r=1, c=1, row, colm, i, j, count_press=0, player=1,x,y,arrow=2;
    char press,winner;

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)a[i][j]=' ';

    system("cls");
    draw_grid_ttt(r,c,name1,name2);

    ///SLOTS
    while(1)
    {
        x=5;
        y=8;
        row=0;
        colm=0;
        for(i=1; i<=9; i++)
        {
            gotoXY(x,y);
            if(row+1==r&&colm+1==c)
            {
                col(12,0);
                printf("%c",31);
                col(11,0);
            }
            else
            {
                col(14,0);
                printf("%c",a[row][colm]);
                col(11,0);
            }
            colm++;
            x+=7;
            if(colm==3)
            {
                colm=0;
                row++;
                x=5;
                y+=4;
            }
        }
        gotoXY(7,17);
        winner=result_ttt(count_press);
        if(winner!='\0')break;
        ///PLAYER'S TURN
        if(press=='x' || press=='o')Sleep(500);
        if(player%2==1)
        {
            printf("\n\n\n>>  %s's TURN\n\n>>  SELECT A VALID SLOT AND PRESS x",name1);
            col(12,0);
            printf("\n\n>>  press esc to exit the game");
            col(11,0);

        }
        else
        {
            printf("\n\n\n>>  %s's TURN\n\n>>  SELECT A VALID SLOT AND PRESS o",name2);
            col(12,0);
            printf("\n\n>>  press esc to exit the game");
            col(11,0);
        }
        gotoXY(0,24);
        ///ARROW MOVEMENT
        press=getch();
        if(press==27)break;
        if(press==72)r--;
        if(press==80)r++;
        if(r>3)r=1;
        if(r<1)r=3;
        if(press==75)c--;
        if(press==77)c++;
        if(c>3)c=1;
        if(c<1)c=3;

        ///X'S & O'S
        if((press=='x'||press=='o')&&a[r-1][c-1]==' ')
        {
            if(player%2==1&&press=='o')
            {
                printf("\n\n\tWARNING!!!!! ");
                printf("%s HAS TO PRESS x\n\tpress any key to continue",name1);
                getch();
                gotoXY(0,24);
                printf("\n\n\t                                                                       ");
                printf("                                                                             ");
                printf("\n\t                                                                         ");
            }
            else if(player%2==0&&press=='x')
            {
                printf("\n\n\tWARNING!!!!! ");
                printf("%s HAS TO PRESS o\n\tpress any key to continue",name2);
                getch();
                gotoXY(0,24);
                printf("\n\n\t                                                                       ");
                printf("                                                                             ");
                printf("\n\t                                                                         ");
            }
            else
            {
                a[r-1][c-1]=press;
                r=1;
                c=0;
                count_press++;
                player++;
            }
        }
        else if((press=='x'||press=='o')&&a[r-1][c-1]!=' ')
        {
            printf("\n\n\tWARNING!!!!! SELECT AN VALID & UNUSED SLOT\n\tpress any key to continue");
            getch();
            gotoXY(0,24);
            printf("\n\n\t                                                                       ");
            printf("                                                                             ");
            printf("\n\t                                                                         ");
        }
    }

    ///RESULT ANNOUNCEMENT
    if(winner==0)return 2;
    if(winner=='x')
    {
        Sleep(1000);
        system("cls");
        Sleep(500);
        printf("\n    %s",name1);
        Sleep(500);
        printf("\n\n\n\n\n    I ");
        Sleep(100);
        printf("S  ");
        Sleep(100);
        printf("T ");
        Sleep(100);
        printf("H ");
        Sleep(100);
        printf("E\n\n\n\n\n");
        Sleep(500);
        printf("    W...I...N...N...E...R\n\n\n\n\n");
        for(j=1; j<=3; j++)
        {
            system("cls");
            printf("\n    %s",name1);
            printf("\n\n\n\n\n    I S  T H E\n\n\n\n\n    W...I...N...N...E...R\n\n\n\n\n");
            Sleep(500);
            printf("    CONGRATULATIONS ! ! ! ! ! ! ! !");
            Sleep(500);
        }
    }
    else if(winner=='o')
    {
        Sleep(1000);
        system("cls");
        Sleep(500);
        printf("\n    %s",name2);
        Sleep(500);
        printf("\n\n\n\n\n    I ");
        Sleep(100);
        printf("S  ");
        Sleep(100);
        printf("T ");
        Sleep(100);
        printf("H ");
        Sleep(100);
        printf("E\n\n\n\n\n");
        Sleep(500);
        printf("    W...I...N...N...E...R\n\n\n\n\n");
        for(j=1; j<=3; j++)
        {
            system("cls");
            printf("\n    %s",name2);
            printf("\n\n\n\n\n    I S  T H E\n\n\n\n\n    W...I...N...N...E...R\n\n\n\n\n");
            Sleep(500);
            printf("    CONGRATULATIONS ! ! ! ! ! ! ! !");
            Sleep(500);
        }
    }
    else if(winner=='D')
    {
        Sleep(1000);
        system("cls");
        printf("\n\n    m A t C h   d R a W n. . .\n\n");
        Sleep(500);
    }
    printf("\n\n\n\n\n\n\n    press any key to continue . .");
    getch();
    arrow=play_again_ttt();
    return arrow;
}
///function for random number
int random_ttt()
{
    int rand_num;
    time_t s;
    time(&s);
    srand(s);
    rand_num=rand()%(5-1+1)+1;
    return rand_num;
}

///function for single player gameplay(ai moves first)
int single_player_2(char name1[])
{
    ///VARIABLES
    int r=1, c=1,row,colm, i, j,count_press=0, player=0, x,y,arrow,sleep=1,rand_num;
    char press,winner;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)a[i][j]=' ';

    system("cls");
    draw_grid_ttt(r,c,"AI",name1);

    ///SLOTS
    while(1)
    {
        x=5;
        y=8;
        row=0;
        colm=0;
        for(i=1; i<=9; i++)
        {
            gotoXY(x,y);
            if(row+1==r&&colm+1==c)
            {
                col(12,0);
                printf("%c",31);
                col(11,0);
            }
            else
            {
                col(14,0);
                printf("%c",a[row][colm]);
                col(11,0);
            }
            colm++;
            x+=7;
            if(colm==3)
            {
                colm=0;
                row++;
                x=5;
                y+=4;
            }
        }
        gotoXY(7,17);
        winner=result_ttt(count_press);
        if(winner!='\0')break;
        ///PLAYER'S TURN
        if(press=='x' || press=='o'||sleep==1)Sleep(500);
        if(player%2==1)
        {
            printf("\n\n\n\n>>  %s's TURN   \n\n>>  SELECT A VALID SLOT AND PRESS o",name1);
            col(12,0);
            printf("\n\n>>  press esc to exit the game");
            col(11,0);
            sleep=0;

        }
        else
        {
            printf("\n\n\n\n>>  AI's TURN    ");
            col(12,0);
            printf("\n\n\n\n>>  press esc to exit the game");
            col(11,0);
        }
        gotoXY(0,24);
        ///ARROW MOVEMENT
        if(player%2==1)
        {
            press=getch();
            if(press==27)break;
            if(press==72)r--;
            if(press==80)r++;
            if(r>3)r=1;
            if(r<1)r=3;
            if(press==75)c--;
            if(press==77)c++;
            if(c>3)c=1;
            if(c<1)c=3;
            ///X'S AND O'S
            if((press=='x'||press=='o')&&a[r-1][c-1]==' ')
            {
                if(player%2==1&&press=='x')
                {
                    printf("\n\n\tWARNING!!!!! YOU HAVE TO PRESS o\n\tpress any key to continue");
                    getch();
                    gotoXY(0,24);
                    printf("\n\n\t                                                                       ");
                    printf("                                                                             ");
                    printf("\n\t                                                                         ");
                }

                else
                {
                    a[r-1][c-1]=press;
                    r=1;
                    c=0;
                    count_press++;
                    player++;
                }
            }
            else if((press=='x'||press=='o')&&a[r-1][c-1]!=' ')
            {
                printf("\n\n\tWARNING!!!!! SELECT AN VALID SLOT\n\tpress any key to continue");
                getch();
                gotoXY(0,24);
                printf("\n\n\t                                                                       ");
                printf("                                                                             ");
                printf("\n\t                                                                         ");
            }
        }
        else
        {
            ///AI
            Sleep(1000);
            ///1st TURN
            if(count_press==0)
            {
                r=1;
                c=0;
                Sleep(500);
                rand_num=random_ttt();
                if(rand_num==1)a[0][0]='x';
                else if(rand_num==2)a[0][2]='x';
                else if(rand_num==3)a[2][0]='x';
                else if(rand_num==4)a[2][2]='x';
                else if(rand_num==5)a[1][1]='x';
                sleep=1;
            }

            ///2nd TURN
            else if(count_press==2)
            {
                ///1st TURN WAS IN CENTER
                if(a[1][1]=='x')
                {
                    if(a[0][0]=='o')a[2][2]='x';
                    else if(a[0][2]=='o')a[2][0]='x';
                    else if(a[2][0]=='o')a[0][2]='x';
                    else if(a[2][2]=='o')a[0][0]='x';
                    else if(a[0][1]=='o'||a[1][0]=='o')a[2][2]='x';
                    else if(a[1][2]=='o'||a[2][1]=='o')a[0][0]='x';
                }

                ///1st TURN WAS IN CORNERS
                else if(a[0][0]=='x')
                {
                    if(a[1][1]=='o'||a[0][2]=='o'||a[2][0]=='o')a[2][2]='x';
                    else if(a[0][1]=='o'||a[1][0]=='o'||a[1][2]=='o'||a[2][1]=='o')a[1][1]='x';
                    else if(a[2][2]=='o')a[0][2]='x';
                }

                else if(a[0][2]=='x')
                {
                    if(a[1][1]=='o'||a[0][0]=='o'||a[2][2]=='o')a[2][0]='x';
                    else if(a[0][1]=='o'||a[1][0]=='o'||a[1][2]=='o'||a[2][1]=='o')a[1][1]='x';
                    else if(a[2][2]=='o')a[0][0]='x';
                }

                else if(a[2][0]=='x')
                {
                    if(a[1][1]=='o'||a[0][0]=='o'||a[2][2]=='o')a[0][2]='x';
                    else if(a[0][1]=='o'||a[1][0]=='o'||a[1][2]=='o'||a[2][1]=='o')a[1][1]='x';
                    else if(a[0][2]=='o')a[0][0]='x';
                }

                else if(a[2][2]=='x')
                {
                    if(a[1][1]=='o'||a[0][2]=='o'||a[2][0]=='o')a[0][0]='x';
                    else if(a[0][1]=='o'||a[1][0]=='o'||a[1][2]=='o'||a[2][1]=='o')a[1][1]='x';
                    else if(a[0][0]=='o')a[0][2]='x';
                }
            }
            ///ROW 1 - O
            else if(a[0][0]=='x'&&a[0][0]==a[0][1]&&a[0][2]==' ')a[0][2]='x';
            else if(a[0][1]=='x'&&a[0][1]==a[0][2]&&a[0][0]==' ')a[0][0]='x';
            else if(a[0][2]=='x'&&a[0][0]==a[0][2]&&a[0][1]==' ')a[0][1]='x';


            ///ROW 2 - O
            else if(a[1][0]=='x'&&a[1][0]==a[1][1]&&a[1][2]==' ')a[1][2]='x';
            else if(a[1][1]=='x'&&a[1][1]==a[1][2]&&a[1][0]==' ')a[1][0]='x';
            else if(a[1][2]=='x'&&a[1][0]==a[1][2]&&a[1][1]==' ')a[1][1]='x';

            ///ROW 3 - O
            else if(a[2][0]=='x'&&a[2][0]==a[2][1]&&a[2][2]==' ')a[2][2]='x';
            else if(a[2][1]=='x'&&a[2][1]==a[2][2]&&a[2][0]==' ')a[2][0]='x';
            else if(a[2][2]=='x'&&a[2][0]==a[2][2]&&a[2][1]==' ')a[2][1]='x';

            ///COLLUMN 1 - O
            else if(a[0][0]=='x'&&a[0][0]==a[1][0]&&a[2][0]==' ')a[2][0]='x';
            else if(a[1][0]=='x'&&a[1][0]==a[2][0]&&a[0][0]==' ')a[0][0]='x';
            else if(a[2][0]=='x'&&a[0][0]==a[2][0]&&a[1][0]==' ')a[1][0]='x';

            ///COLLUMN 2 - O
            else if(a[0][1]=='x'&&a[0][1]==a[1][1]&&a[2][1]==' ')a[2][1]='x';
            else if(a[1][1]=='x'&&a[1][1]==a[2][1]&&a[0][1]==' ')a[0][1]='x';
            else if(a[2][1]=='x'&&a[0][1]==a[2][1]&&a[1][1]==' ')a[1][1]='x';

            ///COLLUMN 3 - O
            else if(a[0][2]=='x'&&a[0][2]==a[1][2]&&a[2][2]==' ')a[2][2]='x';
            else if(a[1][2]=='x'&&a[1][2]==a[2][2]&&a[0][2]==' ')a[0][2]='x';
            else if(a[2][2]=='x'&&a[0][2]==a[2][2]&&a[1][2]==' ')a[1][2]='x';

            ///DIAGONAL 1 - O
            else if(a[0][0]=='x'&&a[0][0]==a[1][1]&&a[2][2]==' ')a[2][2]='x';
            else if(a[1][1]=='x'&&a[1][1]==a[2][2]&&a[0][0]==' ')a[0][0]='x';
            else if(a[2][2]=='x'&&a[0][0]==a[2][2]&&a[1][1]==' ')a[1][1]='x';

            ///DIAGONAL 2 - O
            else if(a[0][2]=='x'&&a[0][2]==a[1][1]&&a[2][0]==' ')a[2][0]='x';
            else if(a[1][1]=='x'&&a[1][1]==a[2][0]&&a[0][2]==' ')a[0][2]='x';
            else if(a[2][0]=='x'&&a[0][2]==a[2][0]&&a[1][1]==' ')a[1][1]='x';

            ///ROW 1 - X
            else if(a[0][0]=='o'&&a[0][0]==a[0][1]&&a[0][2]==' ')a[0][2]='x';
            else if(a[0][1]=='o'&&a[0][1]==a[0][2]&&a[0][0]==' ')a[0][0]='x';
            else if(a[0][2]=='o'&&a[0][0]==a[0][2]&&a[0][1]==' ')a[0][1]='x';

            ///ROW 2 - X
            else if(a[1][0]=='o'&&a[1][0]==a[1][1]&&a[1][2]==' ')a[1][2]='x';
            else if(a[1][1]=='o'&&a[1][1]==a[1][2]&&a[1][0]==' ')a[1][0]='x';
            else if(a[1][2]=='o'&&a[1][0]==a[1][2]&&a[1][1]==' ')a[1][1]='x';

            ///ROW 3 - X
            else if(a[2][0]=='o'&&a[2][0]==a[2][1]&&a[2][2]==' ')a[2][2]='x';
            else if(a[2][1]=='o'&&a[2][1]==a[2][2]&&a[2][0]==' ')a[2][0]='x';
            else if(a[2][2]=='o'&&a[2][0]==a[2][2]&&a[2][1]==' ')a[2][1]='x';

            ///COLLUMN 1 - X
            else if(a[0][0]=='o'&&a[0][0]==a[1][0]&&a[2][0]==' ')a[2][0]='x';
            else if(a[1][0]=='o'&&a[1][0]==a[2][0]&&a[0][0]==' ')a[0][0]='x';
            else if(a[2][0]=='o'&&a[0][0]==a[2][0]&&a[1][0]==' ')a[1][0]='x';

            ///COLLUMN 2 - X
            else if(a[0][1]=='o'&&a[0][1]==a[1][1]&&a[2][1]==' ')a[2][1]='x';
            else if(a[1][1]=='o'&&a[1][1]==a[2][1]&&a[0][1]==' ')a[0][1]='x';
            else if(a[2][1]=='o'&&a[0][1]==a[2][1]&&a[1][1]==' ')a[1][1]='x';

            ///COLLUMN 3 - X
            else if(a[0][2]=='o'&&a[0][2]==a[1][2]&&a[2][2]==' ')a[2][2]='x';
            else if(a[1][2]=='o'&&a[1][2]==a[2][2]&&a[0][2]==' ')a[0][2]='x';
            else if(a[2][2]=='o'&&a[0][2]==a[2][2]&&a[1][2]==' ')a[1][2]='x';

            ///DIAGONAL 1 - X
            else if(a[0][0]=='o'&&a[0][0]==a[1][1]&&a[2][2]==' ')a[2][2]='x';
            else if(a[1][1]=='o'&&a[1][1]==a[2][2]&&a[0][0]==' ')a[0][0]='x';
            else if(a[2][2]=='o'&&a[0][0]==a[2][2]&&a[1][1]==' ')a[1][1]='x';

            ///DIAGONAL 2 - X
            else if(a[0][2]=='o'&&a[0][2]==a[1][1]&&a[2][0]==' ')a[2][0]='x';
            else if(a[1][1]=='o'&&a[1][1]==a[2][0]&&a[0][2]==' ')a[0][2]='x';
            else if(a[2][0]=='o'&&a[0][2]==a[2][0]&&a[1][1]==' ')a[1][1]='x';

            ///OTHER SITUATIONS
            else if(a[0][0]==' '&&a[0][1]==' '&&a[1][0]==' ')a[0][0]='x';
            else if(a[0][2]==' '&&a[0][1]==' '&&a[1][2]==' ')a[0][2]='x';
            else if(a[2][0]==' '&&a[1][0]==' '&&a[2][1]==' ')a[2][0]='x';
            else if(a[2][2]==' '&&a[1][2]==' '&&a[2][1]==' ')a[2][2]='x';
            else
            {
                if(a[0][1]==' ')a[0][1]='x';
                else if(a[1][0]==' ')a[1][0]='x';
                else if(a[1][2]==' ')a[1][2]='x';
                else if(a[2][1]==' ')a[2][1]='x';
                else if(a[0][0]==' ')a[0][0]='x';
                else if(a[0][2]==' ')a[0][2]='x';
                else if(a[1][1]==' ')a[1][1]='x';
                else if(a[2][0]==' ')a[2][0]='x';
                else if(a[2][2]==' ')a[2][2]='x';
            }

            count_press++;
            player++;
        }
    }



    ///RESULT ANNOUNCEMENT
    if(winner==0)return 2;
    if(winner=='o')
    {
        Sleep(1000);
        system("cls");
        Sleep(500);
        printf("\n    %s",name1);
        Sleep(500);
        printf("\n\n\n\n\n    I ");
        Sleep(100);
        printf("S  ");
        Sleep(100);
        printf("T ");
        Sleep(100);
        printf("H ");
        Sleep(100);
        printf("E\n\n\n\n\n");
        Sleep(500);
        printf("    W...I...N...N...E...R\n\n\n\n\n");
        for(j=1; j<=3; j++)
        {
            system("cls");
            printf("\n    %s",name1);
            printf("\n\n\n\n\n    I S  T H E\n\n\n\n\n    W...I...N...N...E...R\n\n\n\n\n");
            Sleep(500);
            printf("    CONGRATULATIONS ! ! ! ! ! ! ! !");
            Sleep(500);
        }
    }
    else if(winner=='x')
    {
        Sleep(1000);
        system("cls");
        Sleep(500);
        printf("\n\n\n\t=>\t    G    \t<=\n");
        Sleep(100);
        printf("\t=>\t    A    \t<=\n");
        Sleep(100);
        printf("\t=>\t    M    \t<=\n");
        Sleep(100);
        printf("\t=>\t    E    \t<=\n");
        Sleep(500);
        printf("\n\n\n\t=>\t    O    \t<=\n");
        Sleep(100);
        printf("\t=>\t    V    \t<=\n");
        Sleep(100);
        printf("\t=>\t    E    \t<=\n");
        Sleep(100);
        printf("\t=>\t    R    \t<=\n\n\n");
        Sleep(500);

    }
    else if(winner=='D')
    {
        Sleep(1000);
        system("cls");
        printf("\n\n    m A t C h   d R a W n. . .\n\n");
        Sleep(500);
    }
    printf("\n\n\n\n\n\n\n    press any key to continue. . .");
    getch();
    arrow=play_again_ttt();
    return arrow;
}

///function for single player gameplay(user moves first)
int single_player_1(char name1[])
{
    ///VARIABLES
    int r=1, c=1,row,colm, i, j, count_press=0, player=1, x,y,arrow;
    char press,winner;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)a[i][j]=' ';

    system("cls");
    draw_grid_ttt(r,c,name1,"AI");

    ///SLOTS
    while(1)
    {
        x=5;
        y=8;
        row=0;
        colm=0;
        for(i=1; i<=9; i++)
        {
            gotoXY(x,y);
            if(row+1==r&&colm+1==c)
            {
                col(12,0);
                printf("%c",31);
                col(11,0);
            }
            else
            {
                col(14,0);
                printf("%c",a[row][colm]);
                col(11,0);
            }
            colm++;
            x+=7;
            if(colm==3)
            {
                colm=0;
                row++;
                x=5;
                y+=4;
            }
        }
        gotoXY(7,17);
        winner=result_ttt(count_press);
        if(winner!='\0')break;
        ///PLAYER'S TURN
        if(press=='x' || press=='o')Sleep(500);
        if(player%2==1)
        {
            printf("\n\n\n\n>>  %s's TURN\n\n>>  SELECT A VALID SLOT AND PRESS x",name1);
            col(12,0);
            printf("\n\n>>  press esc to exit the game");
            col(11,0);
        }
        else
        {
            printf("\n\n\n\n>>  AI's TURN");
            col(12,0);
            printf("\n\n\n\n>>  press esc to exit the game");
            col(11,0);
        }
        gotoXY(0,24);
        ///ARROW MOVEMENT
        if(player%2==1)
        {
            press=getch();
            if(press==27)break;
            if(press==72)r--;
            if(press==80)r++;
            if(r>3)r=1;
            if(r<1)r=3;
            if(press==75)c--;
            if(press==77)c++;
            if(c>3)c=1;
            if(c<1)c=3;
            ///X'S AND O'S
            if((press=='x'||press=='o')&&a[r-1][c-1]==' ')
            {
                if(player%2==1&&press=='o')
                {
                    printf("\n\n\tWARNING!!!!! YOU HAVE TO PRESS x\n\tpress any key to continue");
                    getch();
                    gotoXY(0,24);
                    printf("\n\n\t                                                                       ");
                    printf("                                                                             ");
                    printf("\n\t                                                                         ");
                }

                else
                {
                    a[r-1][c-1]=press;
                    r=1;
                    c=0;
                    count_press++;
                    player++;
                }
            }
            else if((press=='x'||press=='o')&&a[r-1][c-1]!=' ')
            {
                printf("\n\n\tWARNING!!!!! SELECT AN VALID SLOT\n\tpress any key to continue");
                getch();
                gotoXY(0,24);
                printf("\n\n\t                                                                       ");
                printf("                                                                             ");
                printf("\n\t                                                                         ");
            }
        }
        else
        {
            ///AI
            Sleep(1000);
            ///ROW 1 - O
            if(a[0][0]=='o'&&a[0][0]==a[0][1]&&a[0][2]==' ')a[0][2]='o';
            else if(a[0][1]=='o'&&a[0][1]==a[0][2]&&a[0][0]==' ')a[0][0]='o';
            else if(a[0][2]=='o'&&a[0][0]==a[0][2]&&a[0][1]==' ')a[0][1]='o';


            ///ROW 2 - O
            else if(a[1][0]=='o'&&a[1][0]==a[1][1]&&a[1][2]==' ')a[1][2]='o';
            else if(a[1][1]=='o'&&a[1][1]==a[1][2]&&a[1][0]==' ')a[1][0]='o';
            else if(a[1][2]=='o'&&a[1][0]==a[1][2]&&a[1][1]==' ')a[1][1]='o';

            ///ROW 3 - O
            else if(a[2][0]=='o'&&a[2][0]==a[2][1]&&a[2][2]==' ')a[2][2]='o';
            else if(a[2][1]=='o'&&a[2][1]==a[2][2]&&a[2][0]==' ')a[2][0]='o';
            else if(a[2][2]=='o'&&a[2][0]==a[2][2]&&a[2][1]==' ')a[2][1]='o';

            ///COLLUMN 1 - O
            else if(a[0][0]=='o'&&a[0][0]==a[1][0]&&a[2][0]==' ')a[2][0]='o';
            else if(a[1][0]=='o'&&a[1][0]==a[2][0]&&a[0][0]==' ')a[0][0]='o';
            else if(a[2][0]=='o'&&a[0][0]==a[2][0]&&a[1][0]==' ')a[1][0]='o';

            ///COLLUMN 2 - O
            else if(a[0][1]=='o'&&a[0][1]==a[1][1]&&a[2][1]==' ')a[2][1]='o';
            else if(a[1][1]=='o'&&a[1][1]==a[2][1]&&a[0][1]==' ')a[0][1]='o';
            else if(a[2][1]=='o'&&a[0][1]==a[2][1]&&a[1][1]==' ')a[1][1]='o';

            ///COLLUMN 3 - O
            else if(a[0][2]=='o'&&a[0][2]==a[1][2]&&a[2][2]==' ')a[2][2]='o';
            else if(a[1][2]=='o'&&a[1][2]==a[2][2]&&a[0][2]==' ')a[0][2]='o';
            else if(a[2][2]=='o'&&a[0][2]==a[2][2]&&a[1][2]==' ')a[1][2]='o';

            ///DIAGONAL 1 - O
            else if(a[0][0]=='o'&&a[0][0]==a[1][1]&&a[2][2]==' ')a[2][2]='o';
            else if(a[1][1]=='o'&&a[1][1]==a[2][2]&&a[0][0]==' ')a[0][0]='o';
            else if(a[2][2]=='o'&&a[0][0]==a[2][2]&&a[1][1]==' ')a[1][1]='o';

            ///DIAGONAL 2 - O
            else if(a[0][2]=='o'&&a[0][2]==a[1][1]&&a[2][0]==' ')a[2][0]='o';
            else if(a[1][1]=='o'&&a[1][1]==a[2][0]&&a[0][2]==' ')a[0][2]='o';
            else if(a[2][0]=='o'&&a[0][2]==a[2][0]&&a[1][1]==' ')a[1][1]='o';

            ///ROW 1 - X
            else if(a[0][0]=='x'&&a[0][0]==a[0][1]&&a[0][2]==' ')a[0][2]='o';
            else if(a[0][1]=='x'&&a[0][1]==a[0][2]&&a[0][0]==' ')a[0][0]='o';
            else if(a[0][2]=='x'&&a[0][0]==a[0][2]&&a[0][1]==' ')a[0][1]='o';

            ///ROW 2 - X
            else if(a[1][0]=='x'&&a[1][0]==a[1][1]&&a[1][2]==' ')a[1][2]='o';
            else if(a[1][1]=='x'&&a[1][1]==a[1][2]&&a[1][0]==' ')a[1][0]='o';
            else if(a[1][2]=='x'&&a[1][0]==a[1][2]&&a[1][1]==' ')a[1][1]='o';

            ///ROW 3 - X
            else if(a[2][0]=='x'&&a[2][0]==a[2][1]&&a[2][2]==' ')a[2][2]='o';
            else if(a[2][1]=='x'&&a[2][1]==a[2][2]&&a[2][0]==' ')a[2][0]='o';
            else if(a[2][2]=='x'&&a[2][0]==a[2][2]&&a[2][1]==' ')a[2][1]='o';

            ///COLLUMN 1 - X
            else if(a[0][0]=='x'&&a[0][0]==a[1][0]&&a[2][0]==' ')a[2][0]='o';
            else if(a[1][0]=='x'&&a[1][0]==a[2][0]&&a[0][0]==' ')a[0][0]='o';
            else if(a[2][0]=='x'&&a[0][0]==a[2][0]&&a[1][0]==' ')a[1][0]='o';

            ///COLLUMN 2 - X
            else if(a[0][1]=='x'&&a[0][1]==a[1][1]&&a[2][1]==' ')a[2][1]='o';
            else if(a[1][1]=='x'&&a[1][1]==a[2][1]&&a[0][1]==' ')a[0][1]='o';
            else if(a[2][1]=='x'&&a[0][1]==a[2][1]&&a[1][1]==' ')a[1][1]='o';

            ///COLLUMN 3 - X
            else if(a[0][2]=='x'&&a[0][2]==a[1][2]&&a[2][2]==' ')a[2][2]='o';
            else if(a[1][2]=='x'&&a[1][2]==a[2][2]&&a[0][2]==' ')a[0][2]='o';
            else if(a[2][2]=='x'&&a[0][2]==a[2][2]&&a[1][2]==' ')a[1][2]='o';

            ///DIAGONAL 1 - X
            else if(a[0][0]=='x'&&a[0][0]==a[1][1]&&a[2][2]==' ')a[2][2]='o';
            else if(a[1][1]=='x'&&a[1][1]==a[2][2]&&a[0][0]==' ')a[0][0]='o';
            else if(a[2][2]=='x'&&a[0][0]==a[2][2]&&a[1][1]==' ')a[1][1]='o';

            ///DIAGONAL 2 - X
            else if(a[0][2]=='x'&&a[0][2]==a[1][1]&&a[2][0]==' ')a[2][0]='o';
            else if(a[1][1]=='x'&&a[1][1]==a[2][0]&&a[0][2]==' ')a[0][2]='o';
            else if(a[2][0]=='x'&&a[0][2]==a[2][0]&&a[1][1]==' ')a[1][1]='o';

            ///CENTER
            else if(a[1][1]==' ')a[1][1]='o';

            ///CORNERS

            ///00
            else if(a[0][0]=='x')
            {
                if(a[1][2]=='x'&&a[2][1]==' ')a[2][1]='o';
                else if(a[2][1]=='x'&&a[1][2]==' ')a[1][2]='o';
                else if(a[2][2]=='x'&&a[0][1]==' ')a[0][1]='o';
            }

            ///02
            else if(a[0][2]=='x')
            {
                if(a[1][0]=='x'&&a[2][1]==' ')a[2][1]='o';
                else if(a[2][0]=='x'&&a[2][1]==' ')a[2][1]='o';
                else if(a[2][1]=='x'&&a[1][0]==' ')a[1][0]='o';
            }

            ///20
            else if(a[2][0]=='x')
            {
                if(a[0][1]=='x'&&a[1][2]==' ')a[1][2]='o';
                else if(a[0][2]=='x'&&a[1][2]==' ')a[1][2]='o';
                else if(a[1][2]=='x'&&a[0][1]==' ')a[0][1]='o';
            }

            ///22
            else if(a[2][2]=='x')
            {
                if(a[0][0]=='x'&&a[0][1]==' ')a[0][1]='o';
                else if(a[0][1]=='x'&&a[1][0]==' ')a[1][0]='o';
                else if(a[1][0]=='x'&&a[0][1]==' ')a[0][1]='o';
                else if(a[1][1]=='x'&&a[0][2]==' ')a[0][2]='o';
            }

            ///SIDES

            ///01
            else if(a[0][1]=='x')
            {
                if(a[1][0]=='x'&&a[2][0]==' ')a[2][0]='o';
                else if(a[1][2]=='x'&&a[2][2]==' ')a[2][2]='o';
                else if(a[2][1]=='x'&&a[0][0]==' ')a[0][0]='o';
            }

            ///10
            else if(a[1][0]=='x')
            {
                if(a[0][1]=='x'&&a[2][0]==' ')a[2][0]='o';
                else if(a[1][2]=='x'&&a[0][2]==' ')a[0][2]='o';
                else if(a[2][1]=='x'&&a[2][2]==' ')a[2][2]='o';
            }

            ///12
            else if(a[1][2]=='x')
            {
                if(a[2][1]=='x'&&a[0][2]==' ')a[0][2]='o';
            }

            ///21 (NOT NEEDED)

            else
            {
                if(a[0][0]==' ')a[0][0]='o';
            }

            count_press++;
            player++;
        }
    }



    ///RESULT ANNOUNCEMENT
    if(winner==0)return 2;
    if(winner=='x')
    {
        Sleep(1000);
        system("cls");
        Sleep(500);
        printf("\n    %s",name1);
        Sleep(500);
        printf("\n\n\n\n\n    I ");
        Sleep(100);
        printf("S  ");
        Sleep(100);
        printf("T ");
        Sleep(100);
        printf("H ");
        Sleep(100);
        printf("E\n\n\n\n\n");
        Sleep(500);
        printf("    W...I...N...N...E...R\n\n\n\n\n");
        for(j=1; j<=3; j++)
        {
            system("cls");
            printf("\n    %s",name1);
            printf("\n\n\n\n\n    I S  T H E\n\n\n\n\n    W...I...N...N...E...R\n\n\n\n\n");
            Sleep(500);
            printf("    CONGRATULATIONS ! ! ! ! ! ! ! !");
            Sleep(500);
        }
    }
    else if(winner=='o')
    {
        Sleep(1000);
        system("cls");
        Sleep(500);
        printf("\n\n\n\t=>\t    G    \t<=\n");
        Sleep(100);
        printf("\t=>\t    A    \t<=\n");
        Sleep(100);
        printf("\t=>\t    M    \t<=\n");
        Sleep(100);
        printf("\t=>\t    E    \t<=\n");
        Sleep(500);
        printf("\n\n\n\t=>\t    O    \t<=\n");
        Sleep(100);
        printf("\t=>\t    V    \t<=\n");
        Sleep(100);
        printf("\t=>\t    E    \t<=\n");
        Sleep(100);
        printf("\t=>\t    R    \t<=\n\n\n");
        Sleep(500);

    }
    else if(winner=='D')
    {
        Sleep(1000);
        system("cls");
        printf("\n\n    m A t C h   d R a W n. . .\n\n");
        Sleep(500);
    }
    printf("\n\n\n\n\n\n\n      press any key to continue. . .");
    getch();
    arrow=play_again_ttt();
    return arrow;
}

///function for play again??
int play_again_ttt()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t*** DO U WANT TO PLAY AGAIN??? ***\n\t(use arrow keys to move cursor and press enter to select)\n\n");
        if(arrow==1)
        {
            col(14,0);
            printf("\t\t\t   1.");
            col(14,2);
            printf("       PLAY AGAIN      \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   1.       Play Again\n");
        }
        if(arrow==2)
        {
            printf("\t\t\t   2.");
            col(14,2);
            printf("       QUIT            \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   2.       Quit\n");
        }
        col(11,0);
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>2)arrow=1;
        if(arrow<1)arrow=2;
    }
    while(choice!=13);
    return arrow;
}

///function for multiplayer options
int multiplayer_ttt()
{
    int  play_count=1, name1_length=0, name2_length=0,arrow,i;
    char name1[1000], name2[1000], player1[1000], player2[1000], press;

    ///PLAYERS NAME
    system("cls");
    printf("ENTER PLAYER 1'S NAME:\n");
    col(10,0);
    while(name1_length==0)
    {
        fflush(stdin);
        gets(name1);
        name1_length=strlen(name1);
    }
    col(11,0);
    printf("\nENTER PLAYER 2'S NAME:\n");
    col(10,0);
    while(name2_length==0)
    {
        fflush(stdin);
        gets(name2);
        name2_length=strlen(name2);
    }
    col(11,0);
    save_name_ttt();
    do
    {
        press=getch();
    }
    while(press!=13);

    while(1)
    {
        if(play_count%2==1)
        {
            strcpy(player1,name1);
            name1_length=strlen(player1);
            strcpy(player2,name2);
            name2_length=strlen(player2);
        }
        else
        {
            strcpy(player2,name1);
            name1_length=strlen(player1);
            strcpy(player1,name2);
            name2_length=strlen(player2);
        }
        arrow=multiplayer_1(player1, player2);
        if(arrow==2)break;
        play_count++;
    }
}

///function for single player options
int single_player_ttt()
{
    int play_count=1,arrow,name1_length=0,i;
    char name1[1000], press;

    ///PLAYERS NAME
    system("cls");
    printf("ENTER PLAYER'S NAME:\n");
    col(10,0);
    while(name1_length==0)
    {
        fflush(stdin);
        gets(name1);
        name1_length=strlen(name1);
    }
    col(11,0);
    save_name_ttt();
    do
    {
        press=getch();
    }
    while(press!=13);

    while(1)
    {
        if(play_count%2==1)arrow=single_player_1(name1);
        else arrow=single_player_2(name1);
        if(arrow==2)break;
        play_count++;
    }
}

///function for instruction
int instruction_ttt()
{
    system("cls");
    printf("\nIts a normal Tic Tac Toe game with two modes multiplayer and single player\n");
    getch();
}

///function for game menu
int game_menu_ttt()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t\t*** WHAT TYPE OF GAME DO U WANT TO PLAY ***\n\t\t(use arrow keys to move cursor and press enter to select)\n\n");
        if(arrow==1)
        {
            col(14,0);
            printf("\t\t\t   1.");
            col(14,2);
            printf("       SINGLE PLAYER      \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   1.       Single Player\n");
        }
        if(arrow==2)
        {
            printf("\t\t\t   2.");
            col(14,2);
            printf("       MULTIPLAYER    \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   2.       Multiplayer\n");
        }

        if(arrow==3)
        {
            printf("\t\t\t   3.");
            col(14,2);
            printf("       BACK      \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   3.       Back\n");
        }
        col(11,0);
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>3)arrow=1;
        if(arrow<1)arrow=3;
    }
    while(choice!=13);
    return arrow;
}

///function for main menu
int main_menu_ttt()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t        *** WELCOME TO RIP'S TIC TAC TOE ***\n\t        (use arrow keys to move cursor and press enter to select)\n\n");
        if(arrow==1)
        {
            col(14,0);
            printf("\t\t\t   1.");
            col(14,2);
            printf("       PLAY GAME      \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   1.       Play Game\n");
        }
        if(arrow==2)
        {
            printf("\t\t\t   2.");
            col(14,2);
            printf("       INSTRUCTION    \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   2.       Instruction\n");
        }
        if(arrow==3)
        {
            printf("\t\t\t   3.");
            col(14,2);
            printf("       EXIT           \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   3.       Exit\n");
        }
        col(11,0);
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>3)arrow=1;
        if(arrow<1)arrow=3;
    }
    while(choice!=13);
    return arrow;
}

///function for starting
int start_animation_ttt()
{
    int i,x,y;
    for(i=1; i<21; i++)
    {
        gotoXY(40,i+1);
        printf("%c             %c",219,219);
        Sleep(50);
    }
    for(i=27; i<67; i++)
    {
        gotoXY(i,8);
        printf("%c",254);
        gotoXY(i,15);
        printf("%c",254);
        Sleep(25);
    }
    for(i=0; i<3; i++)
    {
        if(i==0)
        {
            x=30;
            y=2;
        }
        else if(i==1)
        {
            x=43;
            y=9;
        }
        else
        {
            x=57;
            y=16;
        }
        gotoXY(x,y);
        printf("____  ___");
        gotoXY(x,y+1);
        printf("\\   \\/  /");
        gotoXY(x,y+2);
        printf(" \\     / ");
        gotoXY(x,y+3);
        printf(" /     \\ ");
        gotoXY(x,y+4);
        printf("/___/\\  \\");
        gotoXY(x,y+5);
        printf("      \\_/");
        Sleep(500);
    }
    col(12,0);
    for(i=0; i<3; i++)
    {
        if(i==0)
        {
            x=30;
            y=2;
        }
        else if(i==1)
        {
            x=43;
            y=9;
        }
        else
        {
            x=57;
            y=16;
        }
        gotoXY(x,y);
        printf("____  ___");
        gotoXY(x,y+1);
        printf("\\   \\/  /");
        gotoXY(x,y+2);
        printf(" \\     / ");
        gotoXY(x,y+3);
        printf(" /     \\ ");
        gotoXY(x,y+4);
        printf("/___/\\  \\");
        gotoXY(x,y+5);
        printf("      \\_/");
    }
    Sleep(500);
    printf("\n\n");
    col(10,0);
    char ar[]= {9,32,32,32,32,32,95,95,95,
                95,95,95,95,32,32,32,32,32,32,
                32,95,95,95,95,95,32,32,32,32,
                32,95,95,95,95,95,95,95,32,32,
                32,32,32,32,32,32,32,95,95,95,
                95,95,32,32,32,32,95,95,95,95,
                95,95,95,32,32,95,95,95,95,95,
                32,32,32,95,95,95,95,95,95,32,
                10,9,9,124,32,32,32,32,32,124,
                32,32,32,124,32,32,32,32,32,32,
                32,32,32,32,32,32,32,124,32,32,
                32,32,32,32,47,92,32,32,32,124,
                32,32,32,32,32,32,32,32,32,32,
                32,32,124,32,32,32,32,124,32,32,
                32,32,32,124,32,124,10,9,9,124,
                32,32,32,32,32,124,32,32,32,124,
                32,32,32,32,32,32,32,32,32,32,
                32,32,32,124,32,32,32,32,32,47,
                95,95,92,32,32,124,32,32,32,32,
                32,32,32,32,32,32,32,32,124,32,
                32,32,32,124,32,32,32,32,32,124,
                32,124,45,45,45,45,10,9,9,124,
                32,32,32,32,32,124,32,32,32,124,
                95,95,95,95,95,32,32,32,32,32,
                32,32,32,124,32,32,32,32,47,32,
                32,32,32,92,32,124,95,95,95,95,
                95,32,32,32,32,32,32,32,124,32,
                32,32,32,124,95,95,95,95,95,124,
                32,124,95,95,95,95,95,95,-99
               };

    for(i=0;; i++)
    {
        if(ar[i]==-99) break;
        putchar(ar[i]);
    }
    col(11,0);
    Sleep(500);
}
///...................................................................................................
///CALL LOG...........................................................................................
int delete_log(int choice)
{
    int i;
    for(i=choice-1; i<cnt_log; i++)
    {
        clog[i]=clog[i+1];
    }
    cnt_log--;
    FILE *fp=fopen("log.txt","w");
    for(i=0; i<cnt_log; i++)
    {
        fprintf(fp,"%s %s %d %d %d %d %d %d %d",clog[i].name,clog[i].num,clog[i].date,clog[i].month,clog[i].year,clog[i].hour,clog[i].minute,clog[i].dur_min,clog[i].dur_sec);
        fprintf(fp,"\n");
    }
    fclose(fp);
}
int log_option(int choice)
{
    int arrow=1,index,i;
    char press,num[50];
    while(press!=13)
    {
        system("cls");
        if(clog[choice-1].name[0]==2)printf("\n\t%s\n\t",clog[choice-1].num);
        else printf("\n\t%s\n\t",clog[choice-1].name);
        for(i=1; i<=45; i++)
        {
            printf("%c",175);
        }
        printf("\n\t");
        col(12,0);
        printf("Enter");
        col(11,0);
        printf(" to select\n\t");
        col(12,0);
        printf("Esc");
        col(11,0);
        printf(" to quit\n\t");
        for(i=1; i<=45; i++)
        {
            printf("%c",174);
        }
        printf("\n\n");
        col(14,0);
        if(arrow==1)printf("\t%c CALL\n",16);
        else printf("\t  Call\n");
        if(arrow==2)printf("\t%c DELETE\n",16);
        else printf("\t  Delete\n");
        if(arrow==3)printf("\t%c BACK\n\n\t",16);
        else printf("\t  Back\n\n\t");
        col(11,0);
        for(i=1; i<=45; i++)
        {
            printf("%c",175);
        }
        press=getch();
        if(press==72)arrow--;
        if(press==80)arrow++;
        if(arrow>3)arrow=1;
        if(arrow<1)arrow=3;
    }
    if(arrow==1)
    {
        for(i=0; i<300; i++)
        {
            if(stricmp(clog[choice-1].name,user[i].name)==0)
            {
                strcpy(num,user[i].number);
                break;
            }
            else strcpy(num,clog[choice-1].num);
        }
        index=i;
        call(index,num);
    }
    if(arrow==2)delete_log(choice);
}

int call_log()
{
    char name[21],press,num[50];
    int i,sec,arrow;
    while(1)
    {
        arrow=0;
        press='\0';
        cnt_log=0;
        system("cls");
        col(11,0);
        printf("\tC A L L  L O G\n\t");
        for(i=1; i<=45; i++)
        {
            printf("%c",175);
        }
        printf("\n\t>> ");
        col(12,0);
        printf("Enter");
        col(11,0);
        printf(" to select\n\t>> ");
        col(12,0);
        printf("Esc");
        col(11,0);
        printf(" to quit\n\t");
        for(i=1; i<=45; i++)
        {
            printf("%c",174);
        }
        printf("\n");
        FILE *fp=fopen("log.txt","r");
        while(fscanf(fp,"%s",clog[cnt_log].name)!=EOF)
        {
            fscanf(fp,"%s %d %d %d %d %d %d %d",clog[cnt_log].num,&clog[cnt_log].date,&clog[cnt_log].month,&clog[cnt_log].year,&clog[cnt_log].hour,&clog[cnt_log].minute,&clog[cnt_log].dur_min,&clog[cnt_log].dur_sec);
            if(clog[cnt_log].name[0]==2)
            {
                printf("\n\t  %s\n",clog[cnt_log].num);
            }
            else
            {
                printf("\n\t  %s\n",clog[cnt_log].name);
            }
            printf("\t  %d-%d-%d at %d:%d\n\t  Duration: %d min %d sec\n\n\n",clog[cnt_log].date,clog[cnt_log].month,clog[cnt_log].year,clog[cnt_log].hour,clog[cnt_log].minute,clog[cnt_log].dur_min,clog[cnt_log].dur_sec);
            cnt_log++;
        }
        fclose(fp);
        while(press!=13&&press!=27)
        {
            gotoXY(8,arrow*6);
            if(arrow>0&&arrow<cnt_log+1)printf("%c",16);
            press=getch();
            if(press==27)break;
            printf("\b ");
            if(press==72)arrow--;
            if(press==80)arrow++;
            if(arrow>cnt_log+1)arrow=0;
            if(arrow<0)arrow=cnt_log+1;
        }
        if(press==27)break;
        else if(arrow==0||arrow==cnt_log+1)
        {
            system("cls");
            printf("Warning!!! You have not select anything\n");
            printf("press any key to continue");
            getch();
            continue;
        }
        else if(press==13)log_option(arrow);
    }
}
///for phonebook options
int save_search()
{
    int arrow=1,i;
    char press;
    while(press!=13)
    {
        system("cls");
        printf("\n\n\t>> OPTIONS\n");
        printf("\t");
        for(i=1; i<=20; i++)
        {
            printf("%c",175);
        }
        printf("\n\t");
        col(12,0);
        printf("ESC ");
        col(11,0);
        printf("to go back\n");
        printf("\t");
        for(i=1; i<=20; i++)
        {
            printf("%c",174);
        }
        printf("\n\n");
        col(14,0);
        if(arrow==1)printf("\t%c ADD CONTACT\n\n",16);
        else printf("\t  Add contact\n\n");
        if(arrow==2)printf("\t%c SEARCH CONTACT\n\n",16);
        else printf("\t  Seach contact\n\n");
        col(11,0);
        printf("\t");
        for(i=1; i<=20; i++)
        {
            printf("%c",175);
        }
        printf("\n");
        press=getch();
        if(press==27)
        {
            arrow=0;
            break;
        }
        if(press==72)arrow--;
        if(press==80)arrow++;
        if(arrow>2)arrow=1;
        if(arrow<1)arrow=2;
    }
    if(arrow==1)save();
    else if(arrow==2)search();
}
///for adding contacts
void save()
{
    int i;
    system("cls");
    printf("\n\tA D D  C O N T A C T\n\t");
    for(i=1; i<=45; i++)
    {
        printf("%c",175);
    }
    int j,k,l,length=0;
    struct phnbook temp;
    printf("\n\t Enter Name : ");
    col(10,0);
    while(length==0)
    {
        fflush(stdin);
        gets(user[cnt_cntct].name);
        length=strlen(user[cnt_cntct].name);
    }
    col(11,0);
    printf("\n\t Enter Number : ");
    col(14,0);
    length=0;
    while(length==0)
    {
        fflush(stdin);
        gets(user[cnt_cntct].number);
        length=strlen(user[cnt_cntct].number);
    }
    col(11,0);
    cnt_cntct++;

    for (i=0; i<cnt_cntct; i++)
    {
        for (j=0; j<cnt_cntct-i; j++)
        {
            if(user[j+1].name[0]=='\0')break;
            if ( strcasecmp ( user[j].name,user[j+1].name ) > 0 )
            {
                temp=user[j];
                user[j]=user[j+1];
                user[j+1]=temp;
            }
        }
    }
    Sleep(500);
    printf("\n\n\t Name Saved ");
    Sleep(500);
    printf(". ");
    Sleep(500);
    printf(". ");
    Sleep(500);
    printf(". ");
    Sleep(500);
}
///for showing all contacts
int all_contacts()
{
    int i;
    system("cls");
    col(11,0);
    printf("\tA L L    C O N T A C T S\n\t");
    for(i=1; i<=50; i++)
    {
        printf("%c",175);
    }
    printf("\n\t>> ");
    col(12,0);
    printf("Arrow keys    ");
    col(11,0);
    printf("to browse and enter to select\n\t>> ");
    col(12,0);
    printf("Esc           ");
    col(11,0);
    printf("to exit\n\t>> ");
    col(12,0);
    printf("o             ");
    col(11,0);
    printf("for options\n\t");
    for(i=1; i<=50; i++)
    {
        printf("%c",174);
    }
    printf("\n\n");
    for(i=0; i<cnt_cntct; i++)
    {
        col(11,0);
        printf("\t  %c ",15);
        col(10,0);
        puts(user[i].name);
        col(11,0);
        printf("\n\n\t    Contact no: ");
        col(14,0);
        puts(user[i].number);
        printf("\n\n\n");
    }
    col(11,0);
}
///for editing contacts
void edit(int index)
{
    char press;
    int arrow=1,l,i;
    while(press!=13)
    {
        system("cls");
        printf("\tE D I T\n\t");
        for(i=1; i<=45; i++)
        {
            printf("%c",175);
        }
        printf("\n\t>> ");
        col(12,0);
        printf("Name\n\t");
        col(11,0);
        for(i=1; i<=45; i++)
        {
            printf("%c",174);
        }
        printf("\n\n\t Do you want to edit name?\n\n");
        col(14,0);
        if(arrow==1)printf("\t%c YES\n",16);
        else printf("\t  Yes\n");
        if(arrow==2)printf("\t%c NO\n",16);
        else printf("\t  No\n");
        col(11,0);
        press=getch();
        if(press==72)arrow--;
        if(press==80)arrow++;
        if(arrow<1)arrow=2;
        if(arrow>2)arrow=1;
    }
    if(arrow==1)
    {
        system("cls");
        printf("\t>> EDIT\n\t");
        for(i=1; i<=45; i++)
        {
            printf("%c",175);
        }
        printf("\n\t>> ");
        col(12,0);
        printf("Name\n\t");
        col(11,0);
        for(i=1; i<=45; i++)
        {
            printf("%c",174);
        }
        printf("\n\t Enter new name: ");
        col(10,0);
        strcpy(user[index].name,"");
        fflush(stdin);
        gets(user[index].name);
        col(11,0);
    }
    press='\0';
    arrow=1;
    while(press!=13)
    {
        system("cls");
        printf("\t>> EDIT\n");
        printf("\t");
        for(i=1; i<=20; i++)
        {
            printf("%c",175);
        }
        printf("\n");
        printf("\t>> ");
        col(12,0);
        printf("Number\n\t");
        col(11,0);
        for(i=1; i<=20; i++)
        {
            printf("%c",175);
        }
        printf("\n\n");
        printf("\t Do you want to edit number?\n\n");
        col(14,0);
        if(arrow==1)printf("\t%c YES\n",16);
        else printf("\t  Yes\n");
        if(arrow==2)printf("\t%c NO\n",16);
        else printf("\t  No\n");
        col(11,0);
        press=getch();
        if(press==72)arrow--;
        if(press==80)arrow++;
        if(arrow<1)arrow=2;
        if(arrow>2)arrow=1;
    }
    if(arrow==1)
    {
        system("cls");
        printf("\t>> EDIT\n");
        printf("\t");
        for(i=1; i<=20; i++)
        {
            printf("%c",175);
        }
        printf("\n");
        printf("\t>> ");
        col(12,0);
        printf("Number\n\t");
        col(11,0);
        for(i=1; i<=20; i++)
        {
            printf("%c",174);
        }
        printf("\n\n");
        printf("\t Enter new number: ");
        col(14,0);
        strcpy(user[index].number,"");
        fflush(stdin);
        gets(user[index].number);
        col(11,0);
    }
}
///for deleting contacts
void del(int index)
{
    char press;
    int i,arrow=1;
    system("cls");
    while(press!=13)
    {
        system("cls");
        printf("\n\n\tD E L E T E\n\t");
        for(i=1; i<=42; i++)
        {
            printf("%c",175);
        }
        printf("\n\t>> ");
        col(12,0);
        printf("Do you want to delete this contact?\n\t");
        col(11,0);
        for(i=1; i<=42; i++)
        {
            printf("%c",174);
        }
        printf("\n\n");
        col(14,0);
        if(arrow==1)printf("\t%c YES\n",16);
        else printf("\t  Yes\n");
        if(arrow==2)printf("\t%c NO\n",16);
        else printf("\t  No\n");
        col(11,0);
        printf("\n\t");
        for(i=1; i<=42; i++)
        {
            printf("%c",175);
        }
        printf("\n");
        press=getch();
        if(press==72)arrow--;
        if(press==80)arrow++;
        if(arrow<1)arrow=2;
        if(arrow>2)arrow=1;
    }
    if(arrow==1)
    {
        for(i=index; i<cnt_cntct; i++)
        {
            user[i]=user[i+1];
        }
        cnt_cntct--;
        Sleep(500);
        col(12,0);
        printf("\n\n\tContact Deleted ");
        Sleep(500);
        printf(". ");
        Sleep(500);
        printf(". ");
        Sleep(500);
        printf(". ");
        Sleep(500);
        col(11,0);
    }
}
///for searching contacts
void search()
{
    system("cls");
    char s2[100],arrow,press;
    int i,j,k,l,count=0,length=0;
    int tracker[300]= {0};
    int position,choice;
    printf("\t>> Search\n\t");
    for(i=1; i<=35; i++)
    {
        printf("%c",175);
    }
    printf("\n");
    printf("\t>> Not Case Sensitive\n\t");
    for(i=1; i<=35; i++)
    {
        printf("%c",174);
    }
    printf("\n\n");
    printf("\tEnter character (Max 30):\n\t");
    col(14,0);
    printf(" --------------------------------\n\t");
    printf("|                                |\n\t");
    printf(" --------------------------------\n\n\t");
    col(11,0);
    for(i=1; i<=35; i++)
    {
        printf("%c",175);
    }
    printf("\n");
    col(10,0);
    gotoXY(9,7);
    while(length==0)
    {
        fflush(stdin);
        gets(s2);
        length=strlen(s2);
    }
    col(11,0);
    l=strlen(s2);
    for(j=0; j<300; j++)
    {
        for(k=0; k<l; k++)
        {
            if(s2[k]>='A'&&s2[k]<='Z')
            {
                if(s2[k]!=user[j].name[k]&&s2[k]+32!=user[j].name[k])break;
            }
            else if(s2[k]>='a'&&s2[k]<='z')
            {
                if(s2[k]!=user[j].name[k]&&s2[k]-32!=user[j].name[k])break;
            }
            else
            {
                if(s2[k]!=user[j].name[k])break;
            }
        }
        if(k==l)
        {
            tracker[j]=1;
            count++;
        }
    }
    gotoXY(9,12);
    if(count==0)
    {

        col(12,0);
        Sleep(500);
        printf("No match found\n");
        Sleep(500);
        printf("\t Press any key to continue. . .");
        col(11,0);
        getch();
    }
    else
    {
        while(1)
        {
            press=NULL;
            system("cls");
            printf("\t>> Search Results\n\t");
            for(i=1; i<=48; i++)
            {
                printf("%c",175);
            }
            printf("\n\t>> ");
            col(12,0);
            printf("ARROW KEYS    ");
            col(11,0);
            printf("to browse and enter to select\n\t>> ");
            col(12,0);
            printf("ESC           ");
            col(11,0);
            printf("to exit\n\t");
            for(i=1; i<=48; i++)
            {
                printf("%c",174);
            }
            printf("\n\n");
            position=1;
            for(i=0; i<300; i++)
            {
                if(tracker[i]==1)
                {
                    col(11,0);
                    printf("\n\t  %c ",15);
                    col(10,0);
                    puts(user[i].name);
                    col(11,0);
                    printf("\n\t    Contact No.: ");
                    col(14,0);
                    puts(user[i].number);
                    printf("\n");
                    position++;
                }
            }
            col(11,0);
            arrow=0;
            while(press!=13)
            {
                gotoXY(8,arrow*7);
                if(arrow>0&&arrow<position)printf("%c",16);
                press=getch();
                if(press==27)break;
                printf("\b ");
                if(press==72)arrow--;
                if(press==80)arrow++;
                if(arrow>position)arrow=0;
                if(arrow<0)arrow=position;
            }
            if(press==27)break;
            else if(arrow==0||arrow==position)
            {
                system("cls");
                printf("Warning!!! You have not select any contact\n");
                printf("press any key to continue");
                getch();
                continue;
            }
            else if(press==13)
            {
                position=0;
                for(i=0; i<300; i++)
                {
                    if(tracker[i]==1)
                    {
                        position++;
                    }
                    if(position==arrow)
                    {
                        option(i);
                        break;
                    }
                }
            }
        }
    }
}
///option for a selected contact
int option(int index)
{

    int i,arrow=1;
    char choice,press;
    while(press!=13)
    {
        system("cls");
        printf("\n\tC O N T A C T  D E T A I L S\n\t");
        for(i=1; i<=21; i++)
        {
            printf("%c",175);
        }
        printf("%c%c%c%c%c%c%c%c%c%c%c%c\n\n",175,175,175,175,175,175,175,175,175,175,175,175);
        printf("\tContact Name: ");
        col(10,0);
        puts(user[index].name);
        col(11,0);
        printf("\tContact No. : ");
        col(14,0);
        puts(user[index].number);
        col(11,0);
        printf("\t");
        for(i=1; i<=21; i++)
        {
            printf("%c",174);
        }
        printf("%c%c%c%c%c%c%c%c%c%c%c%c\n\n\t",174,174,174,174,174,174,174,174,174,174,174,174);
        col(14,0);
        if(arrow==1)printf("%c CALL\n\t",16);
        else printf("  Call\n\t");
        if(arrow==2)printf("%c EDIT CONTACT\n\t",16);
        else printf("  Edit Contact\n\t");
        if(arrow==3)printf("%c DELETE CONTACT\n\t",16);
        else printf("  Delete Contact\n\t");
        if(arrow==4)printf("%c BACK\n\n",16);
        else printf("  Back\n\n\t");
        col(11,0);
        for(i=1; i<=21; i++)
        {
            printf("%c",175);
        }
        printf("%c%c%c%c%c%c%c%c%c%c%c%c\n\n",175,175,175,175,175,175,175,175,175,175,175,175);
        press=getch();
        if(press==72)arrow--;
        if(press==80)arrow++;
        if(arrow<1)arrow=4;
        if(arrow>4)arrow=1;
    }
    if(arrow==1)call(index,user[index].number);
    else if(arrow==2)edit(index);
    else if(arrow==3)del(index);
}
///PHONEBOOK..........................................................................................
void phonebook()
{
    int i,j,arrow;
    char press;

    while(1)
    {
        press='\0';
        i=0;

        all_contacts();
        arrow=0;
        while(press!=13&&press!='o'&&press!='O')
        {
            gotoXY(8,arrow*7);
            if(arrow>0&&arrow<cnt_cntct+1)printf("%c",16);
            press=getch();
            if(press==27)break;
            printf("\b ");
            if(press==72)arrow--;
            if(press==80)arrow++;
            if(arrow>cnt_cntct+1)arrow=0;
            if(arrow<0)arrow=cnt_cntct+1;
        }
        if(press==27)break;
        if(press=='o'||press=='O')save_search();
        else if(arrow==0||arrow==cnt_cntct+1)
        {
            system("cls");
            printf("Warning!!! You have not select any contact\n");
            printf("press any key to continue");
            getch();
            continue;
        }
        else if(press==13)option(arrow-1);

    }

    FILE *fp1;
    fp1=fopen("phonebookdata.txt","w");
    for(j=0; j<cnt_cntct; j++)
    {
        fputs(user[j].name,fp1);
        fprintf(fp1,"\n");
        fputs(user[j].number,fp1);
        fprintf(fp1,"\n");
    }
    fclose(fp1);
    gotoXY(0,(cnt_cntct*7)+1);
}
///for message

int new_message()
{
Y:
    ;
    char sms[1500],number[21],press;
    int i,choice=1,len=0,x_position[20];
    system("cls");
    col(11,0);
    printf("\tEnter message:\n\t");
    for(i=1; i<=25; i++)
    {
        printf("%c",175);
    }
    printf("\n\t>> ");
    col(12,0);
    printf("Esc");
    col(11,0);
    printf(" for option\n\t");
    for(i=1; i<=25; i++)
    {
        printf("%c",174);
    }
    col(12,0);
    printf("\n\t ----------------------------------------------------------------------------------------");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t|                                                                                        |");
    printf("\n\t ----------------------------------------------------------------------------------------");
    int x=9, y=5;
    i=0;
    while(1)
    {
        gotoXY(92,3);
        col(14,0);
        printf("%4d",1400-len);
        col(10,0);
        gotoXY(x,y);
        press=getch();
        if(press==27)break;
        else if(press==8)
        {
            if(len==0);
            else
            {
                len--;
                sms[len]='\0';
                if(x!=9)x--;
                else
                {
                    x=x_position[i-1];
                    i--;
                    y--;
                }
                gotoXY(x,y);
                printf("%c",NULL);
            }
        }
        else if(press==13)
        {
            sms[len]='\n';
            x_position[i]=x;
            i++;
            x=9;
            y++;
            printf("%c",sms[len]);
            len++;
        }
        else
        {
            sms[len]=press;
            x++;
            printf("%c",sms[len]);
            len++;
        }
        if(x==97)
        {
            x=9;
            y++;
        }
    }
    sms[len]='\0';
    press='\0';
    while(press!=13)
    {
        col(14,0);
        if(choice==1)
        {
            gotoXY(9,23);
            printf("\t1. ");
            col(14,2);
            printf("S E N D  M E S S A G E  \n\n");
            col(14,0);
        }
        else
        {
            gotoXY(9,23);
            printf("                                  ");
            gotoXY(9,23);
            printf("\t1. Send Message\n\n");
        }

        if(choice==2)
        {
            gotoXY(9,25);
            printf("\t2. ");
            col(14,2);
            printf("Q U I T                 \n");
            col(14,0);
        }
        else
        {
            gotoXY(9,25);
            printf("                                        ");
            gotoXY(9,25);
            printf("\t2. Quit\n");
        }

        press=getch();
        if(press==72)choice--;
        else if(press==80)choice++;
        if(choice>2)choice=1;
        if(choice<1)choice=2;
    }

    if(choice==1)
    {
        if(len==0)
        {
            col(12,0);
            printf("\n\t\tWARNING!!! YOU HAVEN'T WRITE ANYTHING");
            printf("\n\t\tPress any key to continue...");
            getch();
            goto Y;
        }
        system("cls");
        col(11,0);
        printf("\tENTER NUMBER:\n");
        col(12,0);
        printf("\n\t ----------------------------------------------------------------------------------------");
        printf("\n\t|                                                                                        |");
        printf("\n\t ----------------------------------------------------------------------------------------");
        gotoXY(9,3);
        col(10,0);
        //fflush(stdin);
        //gets(number);
        for(i=0;;)
            {
                if(press>='0'&&press<='9'&&i<20)
                {
                    number[i]=press;
                    col(14,0);
                    printf("%c",number[i]);
                    i++;
                }
                press=getch();
                if(press==8&&i!=0)
                {
                    i--;
                    number[i]='\0';
                    printf("\b%c\b",0);
                    //if(i==0)break;
                }
                if(press==13)break;
                if(press==27)goto Y;
            }
            number[i]='\0';
        col(11,0);
        choice=1;
        press='\0';
        while(press!=13)
        {
            system("cls");
            col(11,0);
            printf("\tENTER NUMBER:\n");
            col(12,0);
            printf("\n\t ----------------------------------------------------------------------------------------");
            printf("\n\t|                                                                                        |");
            printf("\n\t ----------------------------------------------------------------------------------------");
            gotoXY(9,3);
            col(10,0);
            printf("%s\n",number);

            col(11,0);
            printf("\n\n\t>> Want to proceed??\n\n");
            col(14,0);
            if(choice==1)
            {
                printf("\t   ");
                col(14,2);
                printf("Y E S  \n");
                col(14,0);
            }
            else printf("\t   Yes\n");

            if(choice==2)
            {
                printf("\t   ");
                col(14,2);
                printf("Q U I T \n");
                col(14,0);
            }
            else printf("\t   Quit\n");

            press=getch();
            if(press==72)choice--;
            else if(press==80)choice++;
            if(choice>2)choice=1;
            if(choice<1)choice=2;
        }
        if(choice==1)
        {
            system("cls");
            FILE *fp;
            fp=fopen("message.txt","a");
            fprintf(fp,"%d\n",len);
            fprintf(fp,"%s\n",number);
            fputs(sms,fp);
            fprintf(fp,"\n");
            fclose(fp);
            printf("\t>> Message sent\n");
            balance--;
            printf("\n\n\tPress any key to continue...\n");
            getch();
        }
    }
}
int sent()
{
    int i,j,len;
    char number[21];
    char sms[100];
    system("cls");
    printf("SENT ITEMS\n");
    for(i=1; i<=25; i++)
    {
        printf("%c",175);
    }
    FILE *fp;
    fp=fopen("message.txt","r");
    while(1)
    {
        fscanf(fp,"%d",&len);
        fscanf(fp,"%s",number);
        if(feof(fp))break;
        col(11,0);
        printf("\n\nTo: ");
        col(14,0);
        printf("%s\n",number);
        col(11,0);
        printf("Message:");
        col(10,0);
        for(i=0; i<=len; i++)
        {
            sms[i]=fgetc(fp);
        }
        sms[i]='\0';
        puts(sms);
    }
    fclose(fp);
    printf("Press any key to continue");
    getch();
}
int msg_menu()
{
    int i,choice=1;
    char press;
    system("cls");
    printf("\tM E S S A G E\n\t");
    for(i=1; i<=25; i++)
    {
        printf("%c",175);
    }
    printf("\n\t>> ");
    col(12,0);
    printf("Arrow Keys");
    col(11,0);
    printf(" to browse\n\t>> ");
    col(12,0);
    printf("Enter");
    col(11,0);
    printf(" to select\n\t");
    for(i=1; i<=25; i++)
    {
        printf("%c",175);
    }
    while(press!=13)
    {
        col(14,0);
        if(choice==1)
        {
            gotoXY(6,8);
            printf("\t1. ");
            col(14,2);
            printf("N E W  M E S S A G E  \n\n");
            col(14,0);
        }
        else
        {
            gotoXY(6,8);
            printf("                           ");
            gotoXY(6,8);
            printf("\t1. New Message\n\n");
        }

        if(choice==2)
        {
            printf("\t2. ");
            col(14,2);
            printf("I N B O X             \n\n");
            col(14,0);
        }
        else
        {
            gotoXY(6,10);
            printf("                           ");
            gotoXY(6,10);
            printf("\t2. Inbox\n\n");
        }

        if(choice==3)
        {
            printf("\t3. ");
            col(14,2);
            printf("S E N T  I T E M S    \n\n");
            col(14,0);
        }
        else
        {
            gotoXY(6,12);
            printf("                            ");
            gotoXY(6,12);
            printf("\t3. Sent Items\n\n");
        }
        if(choice==4)
        {
            printf("\t4. ");
            col(14,2);
            printf("E X I T               \n\n");
            col(11,0);
        }
        else
        {
            gotoXY(6,14);
            printf("                            ");
            gotoXY(6,14);
            printf("\t4. Exit\n\n");
        }
        fflush(stdin);
        press=getch();
        if(press==72)choice--;
        else if(press==80)choice++;
        if(choice>4)choice=1;
        if(choice<1)choice=4;
    }
    col(11,0);
    return choice;
}

void message()
{

    int choice;
    while(1)
    {
        col(11,0);
        choice=msg_menu();
        if(choice==1)new_message();
        else if(choice==2)
        {
            system("cls");
            printf("Inbox is empty\n");
            printf("press any key to continue");
            getch();
        }
        else if(choice==3)sent();
        else break;
    }
}

///FOR SIM MANAGER....................................................................................
int sim_menu()
{
    int i,choice=1;
    char press;
    system("cls");
    col(11,0);
    printf("\tS I M   M A N A G E R\n\t");
    for(i=1; i<=25; i++)
    {
        printf("%c",175);
    }
    printf("\n\t>> ");
    col(12,0);
    printf("Arrow Keys");
    col(11,0);
    printf(" to browse\n\t>> ");
    col(12,0);
    printf("Enter");
    col(11,0);
    printf(" to select\n\t");
    for(i=1; i<=25; i++)
    {
        printf("%c",175);
    }
    while(press!=13)
    {
        col(14,0);
        if(choice==1)
        {
            gotoXY(6,8);
            printf("\t1. ");
            col(14,2);
            printf("B A L A N C E    C H E C K    \n\n");
            col(14,0);
        }
        else
        {
            gotoXY(6,8);
            printf("                                               ");
            gotoXY(6,8);
            printf("\t1. Balance Check\n\n");
        }

        if(choice==2)
        {
            printf("\t2. ");
            col(14,2);
            printf("R E C H A R G E               \n\n");
            col(14,0);
        }
        else
        {
            gotoXY(6,10);
            printf("                                                 ");
            gotoXY(6,10);
            printf("\t2. Recharge\n\n");
        }
        if(choice==3)
        {
            printf("\t3. ");
            col(14,2);
            printf("E X I T                       \n\n");
            col(11,0);
        }
        else
        {
            gotoXY(6,12);
            printf("                                           ");
            gotoXY(6,12);
            printf("\t3. Exit\n\n");
        }
        press=getch();
        if(press==72)choice--;
        else if(press==80)choice++;
        if(choice>3)choice=1;
        if(choice<1)choice=3;
    }
    col(11,0);
    return choice;
}

void sim_mngr()
{
    int choice,x,i;
    while(1)
    {
        choice=sim_menu();
        if(choice==1)
        {
            system("cls");
            col(10,0);
            printf("\n\n\t\tYour current balance is: ");
            col(12,0);
            printf("%d\n",balance);
            col(11,0);
            printf("\n\n\t\tPress any key to continue");
            getch();
            fflush(stdin);
        }
        else if(choice==2)
        {
            system("cls");
            col(10,0);
            printf("\n\n\t\tGive recharge amount: ");
            col(12,0);
            scanf("%d",&x);
            Sleep(1000);
            col(11,0);
            if(x>0)
            {
                balance+=x;
                system("cls");
                printf("\nRecharging");
                for(i=0; i<3; i++)
                {
                    printf(".");
                    Sleep(500);
                }
                system("cls");
                col(10,0);
                printf("\n\n\t\tYour acount is successfully recharged by %d taka.\n",x);
                col(11,0);
            }
            else
                printf("\n\n\t\tRecharge amount not correct\n");
            col(11,0);
            printf("\n\n\t\tPress any key to continue");
            getch();
            fflush(stdin);
        }
        else break;
    }
}

///APPS...............................................................................................
int apps()
{
    int arrow;
    while(1)
    {
        arrow=main_menuapps();
        if(arrow==1)calculator();
        else if(arrow==2)calendar();
        else if(arrow==3)converter();
        else if(arrow==4)love_calc();
        else break;
    }
}


///main menu of apps
int main_menuapps()
{
    char choice;
    int arrow=1;
    do
    {
        int i;
        system("cls");
        col(11,0);
        printf("\tM Y    A P P S\n\t");
        for(i=1; i<=50; i++)
        {
            printf("%c",175);
        }
        printf("\n\t>> ");
        col(12,0);
        printf("ARROW KEYS    ");
        col(11,0);
        printf("to browse and enter to select\n\t");
        for(i=1; i<=50; i++)
        {
            printf("%c",174);
        }
        printf("\n\n");
        if(arrow==1)
        {
            col(14,0);
            printf("\t1.");
            col(14,2);
            printf("       CALCULATOR          \n\n");
        }
        else
        {
            col(14,0);
            printf("\t1.       Calculator        \n\n");
        }
        if(arrow==2)
        {
            printf("\t2.");
            col(14,2);
            printf("       CALENDAR            \n\n");
        }
        else
        {
            col(14,0);
            printf("\t2.       Calendar          \n\n");
        }

        if(arrow==3)
        {
            printf("\t3.");
            col(14,2);
            printf("       CONVERTER           \n\n");
        }
        else
        {
            col(14,0);
            printf("\t3.       Converter         \n\n");
        }
        if(arrow==4)
        {
            printf("\t4.");
            col(14,2);
            printf("       FRIENDSHIP METER    \n\n");
        }
        else
        {
            col(14,0);
            printf("\t4.       Friendship Meter  \n\n");
        }
        if(arrow==5)
        {
            printf("\t5.");
            col(14,2);
            printf("       EXIT                \n\n");
        }
        else
        {
            col(14,0);
            printf("\t5.       Exit              \n\n");
        }
        col(11,0);
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>5)arrow=1;
        if(arrow<1)arrow=5;
    }
    while(choice!=13);
    return arrow;
}
///CONVERTER..........................................................................................
void converter()
{
    int choice;

    while(1)
    {
        col(10,0);
        choice=main_menu_conv();
        system("cls");
        col(10,0);
        if(choice==1) temp_conv();
        else if(choice==2) length_conv();
        else if(choice==3) area_conv();
        else if(choice==4) vol_conv();
        else if(choice==5) weight_conv();
        else break;

        printf("\nPress any key to continue.\n");
        getch();
    }
}
///for weight menu
int weight_menu_conv()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t***WEIGHT CONVERTER ***\n\n");
        col(7,0);
        if(arrow==1)
        {
            col(10,0);
            printf("\t\t=> 1.OZ TO GRAM.\n");
            col(7,0);
        }
        else printf("\t\t1.OZ TO GRAM.\n");
        if(arrow==2)
        {
            col(10,0);
            printf("\t\t=>2.GRAM TO OZ.\n");
            col(7,0);
        }
        else printf("\t\t2.GRAM  TO OZ.\n");
        if(arrow==3)
        {
            col(10,0);
            printf("\t\t=>3.LB TO KG.\n");
            col(7,0);
        }
        else printf("\t\t3.LB TO KG.\n");
        if(arrow==4)
        {
            col(10,0);
            printf("\t\t=>4.KG TO LB.\n");
            col(7,0);
        }
        else   printf("\t\t4.KG TO LB.\n");
        if(arrow==5)
        {
            col(10,0);
            printf("\t\t=>5.GRAM TO KILOGRAM.\n");
            col(7,0);
        }
        else   printf("\t\t5.GRAM TO KILOGRAM.\n");
        if(arrow==6)
        {
            col(10,0);
            printf("\t\t=>6.KILOGRAM TO GRAM.\n");
            col(7,0);
        }
        else   printf("\t\t6.KILOGRAM TO GRAM.\n");
        if(arrow==7) {col(10,0);
         printf("\t\t=>7.EXIT.\n");
        }
        else printf("\t\t7.Exit.\n");
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>7)arrow=1;
        if(arrow<1)arrow=7;
    }
    while(choice!=13);
    return arrow;
}
///for wvolume menu
int vol_menu_conv()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t***VOLUME CONVERTER ***\n\n");
        col(7,0);
        if(arrow==1)
        {
            col(10,0);
            printf("\t\t=> 1.LITRE TO GALLON.\n");
            col(7,0);
        }
        else printf("\t\t1.LITRE TO GALLON.\n");
        if(arrow==2)
        {
            col(10,0);
            printf("\t\t=>2.GALLON TO LITRE.\n");
            col(7,0);
        }
        else printf("\t\t2.GALLON TO LITRE.\n");
        if(arrow==3) {
                col(10,0);
                printf("\t\t=>3.EXIT.\n");
                col(7,0);
        }
        else printf("\t\t3.Exit.\n");


        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>3)arrow=1;
        if(arrow<1)arrow=3;
    }
    while(choice!=13);
    return arrow;
}
///for area menu
int area_menu_conv()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t***AREA CONVERTER ***\n\n");
        col(7,0);
        if(arrow==1)
        {
            col(10,0);
            printf("\t\t=> 1.ACRE TO M*M.\n");
            col(7,0);
        }
        else printf("\t\t1.ACRE TO M*M.\n");
        if(arrow==2)
        {
            col(10,0);
            printf("\t\t=>2.M*M TO ACRE.\n");
            col(7,0);
        }
        else printf("\t\t2.M*M TO ACRE.\n");
        if(arrow==3)
        {
            col(10,0);
            printf("\t\t=>3.EXIT\n");
            col(7,0);
        }
        else printf("\t\t3.Exit.\n");
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>3)arrow=1;
        if(arrow<1)arrow=3;
    }
    while(choice!=13);
    return arrow;
}
///for lenght menu
int length_menu_conv()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t***LENGTH CONVERTER ***\n\n");
        col(7,0);
        if(arrow==1)
        {
            col(10,0);
            printf("\t\t=> 1.INCH TO CM.\n");
            col(7,0);
        }
        else printf("\t\t1.INCH TO CM.\n");
        if(arrow==2)
        {
            col(10,0);
            printf("\t\t=>2.CM TO INCH.\n");
            col(7,0);
        }
        else printf("\t\t2.CM TO INCH.\n");
        if(arrow==3)
        {
            col(10,0);
            printf("\t\t=>3.FEET TO METER.\n");
            col(7,0);
        }
        else printf("\t\t3.FEET TO METER.\n");
        if(arrow==4)
        {
            col(10,0);
            printf("\t\t=>4.METER TO FEET.\n");
            col(7,0);
        }
        else   printf("\t\t4.METER TO FEET.\n");
        if(arrow==5)
        {
            col(10,0);
            printf("\t\t=>5.YARD TO METER.\n");
            col(7,0);
        }
        else   printf("\t\t5.YARD TO METER.\n");
        if(arrow==6)
        {
            col(10,0);
            printf("\t\t=>6.METER TO YARD.\n");
            col(7,0);
        }
        else   printf("\t\t6.METER TO YARD.\n");
        if(arrow==7)
        {
            col(10,0);
            printf("\t\t=>7.MILE TO KM.\n");
            col(7,0);
        }
        else   printf("\t\t7.MILE TO KM.\n");
        if(arrow==8)
        {
            col(10,0);
            printf("\t\t=>8.KM TO MILE.\n");
            col(7,0);
        }
        else   printf("\t\t8.KM TO MILE.\n");
        if(arrow==9) {
                col(10,0);
                printf("\t\t=>9.EXIT\n");
                col(7,0);

        }
        else printf("\t\t9.Exit.\n");
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>9)arrow=1;
        if(arrow<1)arrow=9;
    }
    while(choice!=13);
    return arrow;
}
///for tempareture menu
int temp_menu_conv()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t***TEMPERATURE CONVERTER ***\n\n");
        col(7,0);
        if(arrow==1)
        {
            col(10,0);
            printf("\t\t=> 1.FARENHEIT TO CELSIUS.\n");
            col(7,0);
        }
        else printf("\t\t1.FARENHEIT TO CELSIUS.\n");
        if(arrow==2)
        {
            col(10,0);
            printf("\t\t=>2.CELSIUS TO FARENHEIT.\n");
            col(7,0);
        }
        else printf("\t\t2.CELSIUS TO FARENHEIT.\n");
        if(arrow==3)
        {
            col(10,0);
            printf("\t\t=>3.KELVIN TO CELSIUS.\n");
            col(7,0);
        }
        else printf("\t\t3.KELVIN TO CELSIUS.\n");
        if(arrow==4)
        {
            col(10,0);
            printf("\t\t=>4.CELSIUS TO KELVIN.\n");
            col(7,0);
        }
        else   printf("\t\t4.CELSIUS TO KELVIN.\n");
        if(arrow==5)
        {
            col(10,0);
            printf("\t\t=>5.FARENHEIT TO KELVIN.\n");
            col(7,0);
        }
        else   printf("\t\t5.FARENHEIT TO KELVIN.\n");
        if(arrow==6)
        {
            col(10,0);
            printf("\t\t=>6.KELVIN TO FARENHEIT.\n");
            col(7,0);
        }
        else   printf("\t\t6.KELVIN TO FARENHEIT.\n");
        if(arrow==7) {
            col(10,0);
            printf("\t\t=>7.EXIT.\n");
            col(7,0);

        }
        else printf("\t\t7.Exit.\n");
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>7)arrow=1;
        if(arrow<1)arrow=7;
    }
    while(choice!=13);
    return arrow;
}
///for temp converting
void temp_conv()
{
    int choice;
    double pot=pow(2,32)-1;
    double fahr,cel,kel;
    col(10,0);
    choice=temp_menu_conv();

    system("cls");
    col(10,0);

    if(choice==1)
    {
        printf("Give your desired input in Farenheit scale.\n");
        scanf("%lf",&fahr);

        system("cls");
        Sleep(100);
        printf("%0.2lf Farenheit=%0.2lf Celsius.\n",fahr,-17.7777777777777+(fahr)*0.55555555);

    }
    else if(choice==2)
    {
        printf("Give your desired input in Celsius scale.\n");
        scanf("%lf",&cel);
        system("cls");
        Sleep(100);
        printf("%0.2lf Celsius=%0.2lf Farenheit.\n",cel,32+(cel)*1.80);
    }
    else if(choice==3)
    {
        printf("Give your desired input in Kelvin scale.\n");
        scanf("%lf",&kel);
        system("cls");
        Sleep(100);
        printf("%0.2lf Kelvin=%0.2lf Celsius.\n",kel,-273.15+kel);

    }
    else if(choice==4)
    {
        printf("Give your desired input in Celsius scale.\n");
        scanf("%lf",&cel);
        system("cls");
        Sleep(100);
        printf("%0.2lf Celsius=%0.2lf Kelvin.\n",cel,273.15+cel);
    }
    else if(choice==5)
    {
        printf("Give your desired input in Fahrenheit scale.\n");
        scanf("%lf",&fahr);
        system("cls");
        Sleep(100);
        printf("%0.2lf Fahrenheit=%0.2lf Kelvin.\n",fahr,255.372+fahr*.556);
    }
    else if(choice==6)
    {
        printf("Give your desired input in Kelvin scale.\n");
        scanf("%lf",&kel);
        system("cls");
        Sleep(100);
        printf("%0.2lf Kelvin=%0.2lf Fahrenheit.\n",kel,-459.67+1.8*kel);

    }

}
///for lenght converting
void length_conv()
{
    int choice;
    double i;
    choice=length_menu_conv();
    system("cls");
    col(10,0);

    if(choice==1)
    {
        printf("Enter your input in inch: \n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lfINCH = %0.2lf CM \n",i,2.54*i);
    }
    else if(choice==2)
    {
        printf("Enter your input in cm.\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lfCM = %0.2lf INCH \n",i,i*0.39370078740157);

    }
    else if(choice==3)
    {
        printf("Enter your input in feet.\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lfFEET = %0.2lf METER \n",i,i*0.3048);
    }
    else if(choice==4)
    {
        printf("Enter your input in meter.\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lfM = %0.2lf FEET \n",i,i*3.280839895);
    }
    else if(choice==5)
    {
        printf("Enter your input in yard.\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lfY = %0.2lf M \n",i,i*0.9144);

    }
    else if(choice==6)
    {
        printf("Enter your input in meter.\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lfM = %0.2lf Y\n",i,i*1.093613298);

    }
    else if(choice==7)
    {
        printf("Enter your input in mile.\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lfMILE = %0.2lf KM \n",i,i*1.609344);

    }
    else if(choice==8)
    {
        printf("Enter your input in km.\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lfKM= %0.2lf MILE \n",i,i*0.6213711922);
    }
}
///for area converting
void area_conv()
{
    int choice;
    double i;
    choice=area_menu_conv();
    system("cls");
    col(10,0);

    if(choice==1)
    {
        printf("Enter your input in acre: \n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lfACRE = %0.2lf M*M \n",i,4046.856*i);
    }
    else if(choice==2)
    {
        printf("Enter your input in m*m: \n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\nsssss");
        else printf("%0.2lfM*M = %0.2lfACRE \n",i,(i*.00024711));
    }
}
///for volume converting
void vol_conv()
{
    int choice;
    double i;
    choice=vol_menu_conv();
    system("cls");
    col(10,0);

    if(choice==1)
    {
        printf("Enter your input in litre: \n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lfL= %0.2lf G  \n",i,0.2641720373*i);
    }
    else if(choice==2)
    {
        printf("Enter your input in gallon: \n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lfG = %0.2lfL \n",i,i*3.785412);
    }

}
///for weight converting
void weight_conv()
{
    int choice;
    double i;
    col(10,0);
    choice=weight_menu_conv();

    system("cls");
    col(10,0);

    if(choice==1)
    {
        printf("Give your desired input in oz .\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lf Oz=%0.2lf g.\n",i,i*28.34952);

    }
    else if(choice==2)
    {
        printf("Give your desired input in gram.\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        if(i<0) printf("Please give your input non-negative.\n");
        else printf("%0.2lf g=%0.2lf oz.\n",i,i/28.34952);
    }
    else if(choice==3)
    {
        printf("Give your desired input in lb.\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        printf("%0.2lf lb=%0.2lf kg.\n",i,i*.4535924);

    }
    else if(choice==4)
    {
        printf("Give your desired input in kg.\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        printf("%0.2lf kg=%0.2lf lb.\n",i,i/.4535924);
    }
    else if(choice==6)
    {
        printf("Give your desired input in kg.\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        printf("%0.2lf kg=%0.2lf g.\n",i,i*1000);
    }
    else if(choice==5)
    {
        printf("Give your desired input in gram.\n");
        scanf("%lf",&i);
        system("cls");
        Sleep(100);
        printf("%0.2lf g=%0.2lf kg.\n",i,i/1000);
    }
}
///main menu of converter
int main_menu_conv()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t*** WELCOME TO RIP'S CONVERTERR ***\n\t(use arrow keys to move cursor and press enter to select)\n");
        printf("\t\t(Please give your input in integer).\n\n");

        col(7,0);
        if(arrow==1)
        {
            col(10,0);
            printf("\t\t=> 1.Temperature Converter.\n");
            col(7,0);
        }
        else printf("\t\t1.Temperature Converter.\n");
        if(arrow==2)
        {
            col(10,0);
            printf("\t\t=>2.Length Converter.\n");
            col(7,0);
        }
        else printf("\t\t2.Length Converter.\n");
        if(arrow==3)
        {
            col(10,0);
            printf("\t\t=>3.Area Converrter.\n");
            col(7,0);
        }
        else printf("\t\t3.Area Converrter.\n");
        if(arrow==4)
        {
            col(10,0);
            printf("\t\t=>4.Volume Converter.\n");
            col(7,0);
        }
        else   printf("\t\t4.Volume Converter.\n");
        if(arrow==5)
        {
            col(10,0);
            printf("\t\t=>5.Weight Converter.\n");
            col(7,0);
        }
        else printf("\t\t5.Weight Converter.\n");
        if(arrow==6)
        {
            col(10,0);
            printf("\t\t=>6.Exit\n");
            col(7,0);
        }
        else printf("\t\t6.Exit\n");
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>6)arrow=1;
        if(arrow<1)arrow=6;
    }
    while(choice!=13);
    return arrow;
}


///CALENDAR...........................................................................................
void calendar()
{
    int day;
    get_time();
    y=systime->tm_year+1900;
    m=systime->tm_mon+1;
    day=check();
    while(1)
    {
        day=input(day);
        if(day==-1)return;
    }
}

///for checking month length leap year
int check()
{
    int i,j,k=0;
    for(i=y-1; i>=2000; i--)
    {
        if(i%4!=0) k=k+1;
        else if((i%4)==0 )
        {
            if((i%100)!=0)  k=k+2;
            else if((i%100)==0 && (i%400)==0)
                k=k+2;
            else if(i%100==0 && (i%400)!=0)
                k=k+1;
        }
    }
    if(y%4)
    {
        if(m==1)
        {
            k=k+0;
            limit=31;
        }
        else if(m==2)
        {
            k=k+3;
            limit=28;
        }
        else if(m==3)
        {
            k=k+3;
            limit=31;
        }
        else if(m==4)
        {
            k=k+6;
            limit=30;
        }
        else if(m==5)
        {
            k =k+8;
            limit=31;
        }
        else if(m==6)
        {
            k=k+11;
            limit=30;
        }
        else if(m==7)
        {
            k=k+13;
            limit=31;
        }
        else if(m==8)
        {
            k=k+16;
            limit=31;
        }
        else if(m==9)
        {
            k=k+19;
            limit=30;
        }
        else if(m==10)
        {
            k=k+21;
            limit=31;
        }
        else if(m==11)
        {
            k=k+24;
            limit=30;
        }
        else if(m==12)
        {
            k=k+26;
            limit=31;
        }
    }
    else if(y%4==0&&y%100==0&&y%400!=0)
    {
        if(m==1)
        {
            k=k+0;
            limit=31;
        }
        else if(m==2)
        {
            k=k+3;
            limit=28;
        }
        else if(m==3)
        {
            k=k+3;
            limit=31;
        }
        else if(m==4)
        {
            k=k+6;
            limit=30;
        }
        else if(m==5)
        {
            k =k+8;
            limit=31;
        }
        else if(m==6)
        {
            k=k+11;
            limit=30;
        }
        else if(m==7)
        {
            k=k+13;
            limit=31;
        }
        else if(m==8)
        {
            k=k+16;
            limit=31;
        }
        else if(m==9)
        {
            k=k+19;
            limit=30;
        }
        else if(m==10)
        {
            k=k+21;
            limit=31;
        }
        else if(m==11)
        {
            k=k+24;
            limit=30;
        }
        else if(m==12)
        {
            k=k+26;
            limit=31;
        }
    }
    else
    {
        if(m==1)
        {
            k=k+0;
            limit=31;
        }
        else if(m==2)
        {
            k=k+3;
            limit=29;
        }
        else if(m==3)
        {
            k=k+4;
            limit=31;
        }
        else if(m==4)
        {
            k=k+7;
            limit=30;
        }
        else if(m==5)
        {
            k=k+9;
            limit=31;
        }
        else if(m==6)
        {
            k=k+12;
            limit=30;
        }
        else if(m==7)
        {
            k=k+14;
            limit=31;
        }
        else if(m==8)
        {
            k=k+17;
            limit=31;
        }
        else if(m==9)
        {
            k=k+20;
            limit=30;
        }
        else if(m==10)
        {
            k=k+22;
            limit=31;
        }
        else if(m==11)
        {
            k=k+25;
            limit=30;
        }
        else if(m==12)
        {
            k=k+27;
            limit=31;
        }
    }
    return k%7+1;
}

///taking year & month as input to show the calendar
int input(int day)
{
    int i,len, k=0, year, month;
    char press, input_year[10], input_month[10];
    while(1)
    {
        system("cls");
        printf("\n\tC A L E N D A R\n");
        printf("\t");
        for(i=1; i<=45; i++)
        {
            printf("%c",175);
        }
        printf("\n\t>> ");
        col(12,0);
        printf("Esc");
        col(11,0);
        printf(" to quit\n\t");
        for(i=1; i<=45; i++)
        {
            printf("%c",174);
        }
        printf("\n\n");
        display(day);
        printf("\n\t");
        for(i=1; i<=45; i++)
        {
            printf("%c",175);
        }
        printf("\n");
        printf("\n\tEnter MONTH and YEAR to see particular date\n\n");
        printf("\tEnter Year(2000-3000): ");
        for(i=0;;)
        {
            press=getch();
            if(press==27)return -1;
            if(press>='0'&&press<='9')
            {
                input_year[i]=press;
                printf("%c",input_year[i]);
                i++;
            }
            else if(press==8&&i!=0) ///BACKSPACE
            {
                i--;
                input_year[i]='\0';
                printf("\b%c\b",0);
            }
            if(press==13)break;
        }
        input_year[i]=NULL;
        len=strlen(input_year);
        year=0;
        for(i=0; i<len; i++)
        {
            year=year*10+input_year[i]-48;
        }
        if(year<2000||year>3000)
        {
            printf("\n\n\tOut of range\n\tpress any key to continue");
            getch();
            continue;
        }
        else break;
    }

    while(1)
    {
        system("cls");
        printf("\n\tC A L E N D A R\n");
        printf("\t");
        for(i=1; i<=45; i++)
        {
            printf("%c",175);
        }
        printf("\n\t>> ");
        col(12,0);
        printf("Esc");
        col(11,0);
        printf(" to quit\n\t");
        for(i=1; i<=45; i++)
        {
            printf("%c",174);
        }
        printf("\n\n");
        display(day);
        printf("\n\t");
        for(i=1; i<=45; i++)
        {
            printf("%c",175);
        }
        printf("\n");
        printf("\n\tEnter MONTH and YEAR to see particular date\n\n");
        printf("\tYear(2000-3000): %d\n",year);
        printf("\tEnter Month(1-12): ");
        for(i=0;;)
        {
            press=getch();
            if(press==27)return -1;
            if(press>='0'&&press<='9')
            {
                input_month[i]=press;
                printf("%c",input_month[i]);
                i++;
            }
            else if(press==8&&i!=0)
            {
                i--;
                input_month[i]='\0';
                printf("\b%c\b",0);
            }
            if(press==13)break;
        }
        input_month[i]=NULL;
        len=strlen(input_month);
        month=0;
        for(i=0; i<len; i++)
        {
            month=month*10+input_month[i]-48;
        }
        if(month<1||month>12)
        {
            printf("\n\n\tOut of range\n\n\tpress any key to continue");
            getch();
            continue;
        }
        else break;
    }
    y=year;
    m=month;
    k=check();
    return k;
}
///for diplaying the calendar
int display(int day)
{
    int i,date=1;
    char year[100],month[100];
    if(m==1)
    {
        strcpy(month,"Jan");
    }
    else if(m==2)strcpy(month,"Feb");
    else if(m==3)strcpy(month,"Mar");
    else if(m==4)strcpy(month,"Apr");
    else if(m==5)strcpy(month,"May");
    else if(m==6)strcpy(month,"Jun");
    else if(m==7)strcpy(month,"Jul");
    else if(m==8)strcpy(month,"Aug");
    else if(m==9)strcpy(month,"Sep");
    else if(m==10)strcpy(month,"Oct");
    else if(m==11)strcpy(month,"Nov");
    else if(m==12)strcpy(month,"Dec");
    col(14,0);
    printf("\t\t\t\t %s %d\n",month,y);
    col(12,0);
    printf("\tsat");
    col(10,0);
    printf("  sun  mon  tue  wed  thu  ");
    col(12,0);
    printf("fri\n\t");
    col(10,0);
    for(i=1; i<=42; i++)
    {
        if(date<=9)printf(" ");
        if(i<day||date>limit)printf("    ");
        else
        {
            if(i%7==0||i%7==1)col(12,0);
            printf("%d   ",date);
            col(10,0);
            date++;
        }
        if(i%7==0)printf("\n\t");
    }
    col(11,0);
}


///FRIENDSHIP INTENSITY METER.........................................................................
void love_calc()
{
    char name1[100],name2[100];
    long long int i,j,k,sum1,sum2,len1,len2;
    float ratio=0;
    char c='%';
    while(1)
    {
        len1=0;
        len2=0;
        system("cls");
        col(14,0);
        while(len1==0)
        {
            system("cls");
            printf("Enter Your Nick Name: ");
            gets(name1);
            len1=strlen(name1);
        }
        while(len2==0)
        {
            system("cls");
            printf("Enter Your Friends Nick Name: ");
            gets(name2);
            len2=strlen(name2);
        }
        sum1=0,sum2=0;


        char temp[100];
        int tempo;
        if(len1>len2)
        {
            strcpy(temp,name1);
            strcpy(name1,name2);
            strcpy(name2,temp);
            tempo=len1;
            len1=len2;
            len2=tempo;
        }

        for(i=0; i<len1; i++)
        {
            if( (name1[i]>='a') &&(name1[i]<='z') )
                sum1=sum1*10+(name1[i]-96);
            else if ( (name1[i]>='A') &&(name1[i]<='Z') )
                sum1=sum1*10+(name1[i]-64);
        }
        for(i=0; i<len2; i++)
        {
            if( (name2[i]>='a') &&(name2[i]<='z') )
                sum2=sum2+(name2[i]-96);
            else if ( (name2[i]>='A') &&(name2[i]<='Z') )
                sum2=sum2+(name2[i]-64);
        }
        while(sum1>9)
        {
            sum1=sum(sum1);
        }
        while(sum2>9)
        {
            sum2=sum(sum2);
        }
        ratio=((float)sum1/sum2)*100;
        printf("%f\n",ratio);
        col(11,0);
        system("cls");
        if(ratio<=100)
            printf("Friendship Intensity Percentage: %.2f %c\n",ratio,c);

        else if (ratio>100)
        {
            ratio=((float)sum2/sum1)*100;
            printf("Friendship Intensity Percentage: %.2f %c\n",ratio,c);
        }
        draw_heart((int)ratio);
        col(13,0);
        printf("\n\n\t\t\t\tPress any key to continue");
        getch();
        int arrow2=try_againl();
        if(arrow2==1)continue;
        else break;
    }
}
///for calculation
int sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
///for trying again
int try_againl()
{
    char choice;
    int arrow2=1;
    do
    {
        system("cls");
        col(10,0);
        printf("\t\t*** DO U WANT TO TRY AGAIN??? ***\n\t(use arrow keys to move cursor and press enter to select)\n\n");
        col(11,0);
        if(arrow2==1)printf("\t\t\t1. ||||| YES |||||\n");
        else printf("\t\t\t1.       Yes\n");
        if(arrow2==2)printf("\t\t\t2. ||||| NO |||\n");
        else printf("\t\t\t2.       No\n");
        choice=getch();
        if(choice==72)arrow2--;
        if(choice==80)arrow2++;
        if(arrow2>2)arrow2=1;
        if(arrow2<1)arrow2=2;
    }
    while(choice!=13);
    return arrow2;
}
///for drawing the heart
void draw_heart(int ratio)
{
    col(10,0);
    printf("\n\n\n\t\t");
    if(ratio<=100&&ratio>90)col(12,0);
    printf("           000000000           0000000000\n\t\t");
    printf("        000000000000000     000000000000000\n\t\t");
    if(ratio<=90&&ratio>80)col(12,0);
    printf("      000000000000000000   000000000000000000\n\t\t");
    printf("     00000000000000000000 00000000000000000000\n\t\t");
    if(ratio<=80&&ratio>70)col(12,0);
    printf("    0000000000000000000000000000000000000000000\n\t\t");
    printf("   000000000000000000000000000000000000000000000\n\t\t");
    if(ratio<=70&&ratio>60)col(12,0);
    printf("  0000000000000000000000000000000000000000000000\n\t\t");
    printf("  000000000000000000000000000000000000000000000\n\t\t");
    if(ratio<=60&&ratio>50)col(12,0);
    printf("   0000000000000000000000000000000000000000000\n\t\t");
    printf("     0000000000000000000000000000000000000000\n\t\t");
    if(ratio<=50&&ratio>40)col(12,0);
    printf("      0000000000000000000000000000000000000\n\t\t");
    printf("        0000000000000000000000000000000000\n\t\t");
    if(ratio<=40&&ratio>30)col(12,0);
    printf("           00000000000000000000000000000\n\t\t");
    printf("             0000000000000000000000000\n\t\t");
    if(ratio<=30&&ratio>20)col(12,0);
    printf("               000000000000000000000\n\t\t");
    printf("                 00000000000000000\n\t\t");
    if(ratio<=20&&ratio>10)col(12,0);
    printf("                    000000000000\n\t\t");
    printf("                      0000000\n\t\t");
    if(ratio<=10&&ratio>0)col(12,0);
    printf("                        000\n\t\t");
    printf("                         0\n\t\t");
}

///CALCULATOR.........................................................................................
void calculator()
{
    int choice;
    char str[10];
    double x;
    while(1)
    {
        col(10,0);
        choice=main_menu_calc();
        system("cls");
        col(10,0);

        if(choice==1) operations_calc();
        else if(choice==2) matrix_calc();
        else if(choice==3) equation_solver_calc();
        else if(choice==4) trigon_func_calc();
        else if(choice==5) combi_calc();
        else if(choice==6) fib_ser_calc();
        else break;
    }
}
///for fibonacchi calculation
void fib_ser_calc()
{

    printf("Give your range number[<68] untill you want to print fibonacci series.\n");
    int  n,i;
    long long int j,fib[80];
    fib[1]=1,fib[2]=1;
    scanf("%d",&n);
    if(n==1) printf("fib(%d)=%d\n",n,fib[n]);
    else if(n==2) printf("fib(%d)=%lld\nfib(%d)=%lld\n",n-1,fib[1],n,fib[2]);

    else if(n>2)
    {
        printf("fib(%d)=1\nfib(2)=1\n",1,fib[1],2,1);
        for(i=3; i<=n; i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
            printf("fib(%d)=%lld\n",i,fib[i]);
            Sleep(100);
        }
    }
    system("pause");
}
///for combination
void combinations_calc()
{
    long long int m, k, C,n,r;
    printf("\t\tC(n,r): Enter the value of n and r.\n");
    scanf("%lld%lld", &n, &r);
    system("cls");
    printf("\t\t\t");
    col(10,0);
    if(r>n) printf("C(%lld,%lld):=0\n",n,r);
    else if(n==r) printf("C(%lld,%lld):=1\n",n,r);
    else
    {
        C=1;
        m = r;
        if(r >n/2) r= n -r;
        else r=r;

        for(k=0; k <r; k++)
        {
            C*=(n-k);
            C /=(k+1);
        }
        printf("C(%lld,%lld):=%lld\n", n, m, C);
    }
    getch();
    col(10,0);
}
///for permutation
void permutations_calc()
{
    long long int m, k, P,n,r;
    printf("\t\tP(n,r): Enter the value of n and r.\n");
    scanf("%lld%lld", &n, &r);
    system("cls");
    printf("\t\t\t");
    col(10,0);
    if(r>n) printf("P(%lld,%lld):=0\n", n, r );
    else
    {
        P=1;
        for(k=0; k <=r+1; k++) P*=(n-k);
        printf("P(%lld,%lld):=%lld\n", n, r, P);
    }
    col(10,0);
    getch();
}
///for menu of combinatrix
int menu_combi_calc()
{
    char choice;
    int arrow=1;

    do
    {
        system("cls");
        col(10,0);
        printf("\t\tCombinatrix\n");
        if(arrow==1) printf("\t\t=>1.COMBINATION\n");
        else printf("\t\t1.Combination\n");
        if(arrow==2)printf("\t\t=>2.PERMUTATION\n");
        else printf("\t\t2.Permutation\n");
        if(arrow==3)printf("\t\t=>3.EXIT\n");
        else printf("\t\t3.Exit\n");
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>3)arrow=1;
        if(arrow<1)arrow=3;
    }
    while(choice!=13);
    return arrow;

}
void combi_calc()
{
    int choice;
    choice= menu_combi_calc();
    if(choice==1) combinations_calc();
    else if(choice==2) permutations_calc();
}
///for trigonometric calculation menu
int trigon_menu_calc()
{
    char choice;
    int arrow=1;

    do
    {
        system("cls");
        col(10,0);
        printf("\t\tTrigonometric Equation\n");
        if(arrow==1) printf("\t\t=>1.Sin\n");
        else printf("\t\t1.Sin\n");
        if(arrow==2)printf("\t\t=>2.Cos\n");
        else printf("\t\t2.Cos\n");
        if(arrow==3)  printf("\t\t=>3.Tan\n");
        else  printf("\t\t3.Tan\n");
        if(arrow==4)  printf("\t\t=>4.Exit\n");
        else  printf("\t\t4.Exit\n");

        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>4)arrow=1;
        if(arrow<1)arrow=4;
    }
    while(choice!=13);
    return arrow;
}
///for trigonometric calculation
void trigon_func_calc()
{
    double deg, result;

    system("cls");

    int choice;
    choice=trigon_menu_calc();

    if(choice==1)
    {
        printf("Enter the angle (in degree): \n");
        scanf("%lf",&deg);
        result=sin(deg*PI/180.0);
        printf ("The sine of %0.2lf degrees is %0.2lf.\n",deg,result);
    }
    else if(choice==2)
    {
        printf("Enter the angle (in degree): \n");
        scanf("%lf",&deg);
        result=cos(deg*PI/180.0);
        printf ("The cosine of %0.2lf degrees is %0.2lf.\n",deg,result);
    }
    else if(choice==3)
    {
        printf("Enter the angle (in degree): \n");
        scanf("%lf",&deg);
        result=tan(deg*PI/180.0);
        double test;
        test=(deg-90)/360;
        if((int)test==test) printf("Math Error.\n");
        else printf ("The tangent of %0.2lf degrees is %0.2lf.\n",deg,result);

    }
    //getch();
}
///for equation solving
int eqn_option_calc()
{
    char choice;
    int arrow=1;

    do
    {
        system("cls");
        col(10,0);
        printf("\t\tEquation solver\n");
        if(arrow==1) printf("\t\t=>1.ax+by=c\n");
        else printf("\t\t1.ax+by=cz\n");
        if(arrow==2)printf("\t\t=>2.ax+by+cz=d\n");
        else printf("\t\t2.ax+by+cz=d\n");
        if(arrow==2)printf("\t\t=>3.Exit\n");
        else printf("\t\t3.Exit\n");

        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>3)arrow=1;
        if(arrow<1)arrow=3;
    }
    while(choice!=13);
    return arrow;
}
void equ_type2_calc()
{
    system("cls");
    printf("\t\tThe equations\n");
    printf("\t\t1.a1x+b1y+c1z=d1\n");
    printf("\t\t2.a2x+b2y+c2z=d2\n");
    printf("\t\t3.a3x+b3y+c3z=d3\n");
    double a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3,dx,dy,dz,d;
    printf("\t\tEnter the value of a1,b1 ,c1 and d1\n");
    scanf("%lf%lf%lf%lf",&a1,&b1,&c1,&d1);
    printf("\t\tEnter the value of a2,b2,c2 and d2\n");
    scanf("%lf%lf%lf%lf",&a2,&b2,&c2,&d2);
    printf("\t\tEnter the value of a3,b3 ,c3 and d3\n");
    scanf("%lf%lf%lf%lf",&a3,&b3,&c3,&d3);
    system("cls");
    printf("%0.2lfx+%0.2lfy+%0.2lfz=%0.2lf\n",a1,b1,c1,d1);
    printf("%0.2lfx+%0.2lfy+%0.2lfz=%0.2lf\n",a2,b2,c2,d2);
    printf("%0.2lfx+%0.2lfy+%0.2lfz=%0.2lf\n",a3,b3,c3,d3);

    d =a1*(b2*c3-b3*c2)-b1*(a2*c3-a3*c2)+c1*(a2*b3-a3*b2);
    dx=b1*(c2*d3-c3*d2)-c1*(b2*d3-b3*d2)+d1*(b2*c3-b3*c2);
    dy=-a1*(c2*d3-c3*d2)+c1*(a2*d3-a3*d2)-d1*(a2*c3-a3*c2);
    dz=a1*(b2*d3-b3*d2)-b1*(a2*d3-a3*d2)+d1*(a2*b3-a3*b2);
    double x, y, z;
    x = dx/d,y=dy/d,z=dz/d;
    if((x>=0||x<0) &&(y>=0 || y<0) &&(z>=0 || z<0))
    {
        printf("\n\n\t\tSolution: \n\t\tx=%lf\n\t\ty=%lf\n\t\tz=%lf\n",x,y,z);

    }
    else printf("There is no solution for your input\n\n");
    system("pause");
}
void equ_type1_calc()
{
    system("cls");
    printf("\t\tThe equations\n");
    printf("\t\t1.a1x+b1y=c1\n");
    printf("\t\t2.a2x+b2y=c2\n");
    double a1,a2,b1,b2,c1,c2;
    printf("\t\tEnter a1,b1 and c1\n");
    scanf("%lf%lf%lf",&a1,&b1,&c1);
    printf("\t\tEnter a2,b2 and c2\n");
    scanf("%lf%lf%lf",&a2,&b2,&c2);
    system("cls");
    printf("\t\t%0.2lfx+%0.2lfy=%0.2lf\n",a1,b1,c1);
    printf("\t\t%0.2lfx+%0.2lfy=%0.2lf\n",a2,b2,c2);
    double x, y,p;
    p = a1*b2-a2*b1;
    x=(b2*c1-b1*c2)/p;
    y=(a1*c2-a2*c1)/p;
    if((x>=0||x<0) &&(y>=0 || y<0) )
    {
        printf("\t\tSolution: \n\t\tx=%0.2lf\n\t\ty=%0.2lf\n",x,y);
    }
    else printf("\t\tThere is no solution for your input\n");
    system("pause");
}
void equation_solver_calc()
{
    col(10,0);
    printf("\t\t1.ax+by=d\n");
    printf("\t\t2.ax+by+cz=d\n");
    int choice;
    printf("\t\tEnter your choice\n");
    choice=eqn_option_calc();
    system("cls");
    if(choice==1)
    {

        equ_type1_calc();
        getch();
    }
    else if(choice==2)
    {
        equ_type2_calc();
        getch();
    }

}
///for options of calculator
int options_calc()
{
    char choice;
    int arrow=1;

    do
    {
        system("cls");
        col(10,0);
        printf("\t\tMatrix Menu\n");
        if(arrow==1) printf("\t\t=>1.MATRIX ADD\n");
        else printf("\t\t1.Matrix add\n");
        if(arrow==2)printf("\t\t=>2.MATRIX SUBSTRACT\n");
        else printf("\t\t2.Matrix Substract\n");
        if(arrow==3)  printf("\t\t=>3.MATRIX MULTIPLICATION\n");
        else  printf("\t\t3.Matrix Multiplication\n");
        if(arrow==4)  printf("\t\t=>4.EXIT\n");
        else  printf("\t\t4.Exit\n");

        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>4)arrow=1;
        if(arrow<1)arrow=4;
    }
    while(choice!=13);
    return arrow;
}
///for matrix calculations
void matrix_calc()
{
    int r1, c1, r2, c2, choice;
    choice=options_calc();
    if(choice==1)
    {
        system("cls");
        printf("\t\tEnter the row and column no for 1st matrix\n");
        scanf("%d %d",&r1,&c1);
        printf("\t\tEnter the row and column no for 2nd matrix\n");
        scanf("%d %d",&r2,&c2);
        double a[r1][c1],b[r2][c2],c[r1][c2];
        if(r1==r2 && c1==c2)
        {
            int j, k,p,q;
            printf("Enter first matrix\n");
            for(j=0; j<r1; j++)
            {
                for(k=0; k<c1; k++)
                {
                    scanf("%lf",&a[j][k]);
                }
            }
            printf("Enter second matrix\n");
            for(p=0; p<r2; p++)
            {
                for(q=0; q<c2; q++)
                {
                    scanf("%lf",&b[p][q]);
                }
            }
            for(j=0; j<r1; j++)
            {
                for(k=0; k<c1; k++)
                {
                    c[j][k]=a[j][k]+b[j][k];
                }

            }
            printf("Addition of matrix\n");
            for(j=0; j<r1; j++)
            {
                for(k=0; k<c1; k++)
                {
                    if((int)c[j][k]==c[j][k])   printf("|%3.2lf| ",c[j][k]);
                    else printf("|%3.2lf| ",c[j][k]);
                }
                printf("\n");
            }

        }
        else printf("Please give some valid input.\n");
        getch();


    }
    else if(choice==2)
    {
        system("cls");
        printf("\t\tEnter the row and column no for 1st matrix\n");
        scanf("%d%d",&r1,&c1);
        printf("\t\tEnter the row and column no for 2nd matrix\n");

        scanf("%d%d",&r2,&c2);
        double a[r1][c1],b[r2][c2],c[r1][c2];
        if(r1==r2 && c1==c2)
        {
            int j, k;
            printf("Enter first matrix\n");
            for(j=0; j<r1; j++)
            {
                for(k=0; k<c1; k++)
                {
                    scanf("%lf",&a[j][k]);
                }
            }
            printf("Enter second matrix\n");
            for(j=0; j<r1; j++)
            {
                for(k=0; k<c1; k++)
                {
                    scanf("%lf",&b[j][k]);
                }
            }

            for(j=0; j<r1; j++)
            {
                for(k=0; k<c1; k++)
                {
                    c[j][k]=a[j][k]-b[j][k];
                }
            }
            printf("The Substarct Matrix\n ");
            for(j=0; j<r1; j++)
            {
                for(k=0; k<c1; k++)
                {
                    if((int)c[j][k]==c[j][k])   printf("|%3.2lf| ",c[j][k]);
                    else printf("|%3.2lf| ",c[j][k]);
                }
                printf("\n");
            }

        }
        else printf("Please give some valid input.\n");
        getch();

    }



    if(choice==3)
    {
        system("cls");
        printf("\t\tEnter the row and column no for 1st matrix\n");
        scanf("%d%d",&r1,&c1);
        printf("\t\tEnter the row and column no for 2nd matrix\n");
        scanf("%d%d",&r2,&c2);
        double a[r1][c1],b[r2][c2],c[r1][c2];
        if(c1!=r2) printf("\t\t INVALID INPUT.\n");
        else if(c1==r2)
        {
            int j, k;
            printf("Enter first matrix\n");
            for(j=0; j<r1; j++)
            {
                for(k=0; k<c1; k++)
                {
                    scanf("%lf",&a[j][k]);
                }
            }
            printf("Enter second matrix\n");
            for(j=0; j<r2; j++)
            {
                for(k=0; k<c2; k++)
                {
                    scanf("%lf",&b[j][k]);
                }
            }
            int p,  m,sum=0;
            printf("The desired matrix\n");
            for(p=0; p<r1; p++)
            {

                for(k=0; k<c2; k++)
                {
                    for(m=0; m<c1; m++)
                    {
                        sum+=a[p][m]*b[m][k];
                    }
                    c[p][k]=sum;
                    sum=0;
                    if((int)c[p][k]==c[p][k])   printf("|%3.2lf| ",c[p][k]);
                    else printf("|%3.2lf| ",c[p][k]);

                }
                printf("\n");

            }

        }
        getch();
    }

}

///for finding factorials
int factorial( int i)
{
    double j,k=1;
    for(j=i; j>1; j--)
        k*=j;
    return k;
}
///normal calculations
double operation(char oprtr, double num1, double num2)
{
    double result;
    if(oprtr=='+')result=num1+num2;
    else if(oprtr=='-')result=num1-num2;
    else if(oprtr=='*')result=num1*num2;
    else if(oprtr=='/')result=num1/num2;
    else if(oprtr=='!')result=factorial((int)num1);
    return result;
}

void operations_calc()
{
    int i,j,flag,Y,X;
    double x,num1,num2,result;
    char in_num[15],press,oprtr,math_error[15];
    printf("0");
    Y:
    while(!kbhit());
    system("cls");
    num2=0;
    oprtr='+';
    while(1)
    {
        i=0;
        flag=0;
        while(2)
        {
            press=getch();
            if(press==27)return 0;
            else if(press=='+'||press=='-'||press=='*'||press=='/'||press=='!'||press=='=')break;
            else if(press==8&&i!=0)
            {
                i--;
                if(in_num[i]=='.')flag=0;
                in_num[i]='\0';
                printf("\b%c\b",0);
            }
            else if((press>='0'&&press<='9'||press=='.')&&i!=8)
            {
                if(press=='.')flag++;
                if(flag>1&&press=='.')continue;
                else in_num[i]=press;
                printf("%c",in_num[i]);
                i++;
            }
        }
        in_num[i]='\0';
        flag=0;
        j=1;
        x=0;
        num1=0;
        int len=strlen(in_num);
        for(i=0; i<len; i++)
        {
            if(in_num[i]=='.')
            {
                flag=1;
                i++;
            }
            if(flag==1)
            {
                x+=(in_num[i]-48)/pow(10,j);
                j++;
            }
            else
            {
                num1=num1*10+in_num[i]-48;
            }
        }
        num1+=x;
        result=operation(oprtr,num2,num1);
        itoa(result,math_error,10);
        if(strlen(math_error)>9)
        {
            printf("\n\n\nMATH ERROR....\npress any key to continue....");
            goto Y;
        }
        system("cls");
        if(result==(int)result)printf("%.0lf",result);
        else printf("%.2lf",result);
        if(press=='=')goto Y;
        printf("%c",press);
        num1=result;
        oprtr=press;
        i=0;
        flag=0;
        while(3)
        {
            press=getch();
            if(press==27)return 0;
            else if(press=='+'||press=='-'||press=='*'||press=='/'||press=='!'||press=='=')break;
            else if(press==8&&i!=0)
            {
                i--;
                if(in_num[i]=='.')flag=0;
                in_num[i]='\0';
                printf("\b%c\b",0);
            }
            else if((press>='0'&&press<='9'||press=='.')&&i!=8)
            {
                if(press=='.')flag++;
                if(flag>1&&press=='.')continue;
                else in_num[i]=press;
                printf("%c",in_num[i]);
                i++;
            }
        }
        in_num[i]='\0';
        num2=0;
        x=0;
        j=1;
        flag=0;
        len=strlen(in_num);
        for(i=0; i<len; i++)
        {
            if(in_num[i]=='.')
            {
                flag=1;
                i++;
            }
            if(flag==1)
            {
                x+=(in_num[i]-48)/pow(10,j);
                j++;
            }
            else
            {
                num2=num2*10+in_num[i]-48;
            }
        }
        num2+=x;
        result=operation(oprtr,num1,num2);
        itoa(result,math_error,10);
        if(strlen(math_error)>9)
        {
            printf("\n\n\nMATH ERROR....\npress any key to continue....");
            goto Y;
        }
        system("cls");
        if(result==(int)result)printf("%.0lf",result);
        else printf("%.2lf",result);
        if(press=='=')goto Y;
        printf("%c",press);
        num2=result;
        oprtr=press;
    }
}
///main menu of calculator
int main_menu_calc()
{
    char choice;
    int arrow=1;
    do
    {
        system("cls");
        col(11,0);
        printf("\t\t*** WELCOME TO RIP'S CALCULATOR ***\n\t(use arrow keys to move cursor and press enter to select)\n\n");
        if(arrow==1)
        {
            col(14,0);
            printf("\t\t\t   1.");
            col(14,2);
            printf("       NORMAL OPERATIONS      \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   1.       Normal Operations\n");
        }
        if(arrow==2)
        {
            printf("\t\t\t   2.");
            col(14,2);
            printf("       MATRIX                 \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   2.       Matrix\n");
        }
        if(arrow==3)
        {
            printf("\t\t\t   3.");
            col(14,2);
            printf("       EQUATION SOLVER        \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   3.       Equation Solver\n");
        }
        if(arrow==4)
        {
            printf("\t\t\t   4.");
            col(14,2);
            printf("       TRIGONOMETRIC EQUATION \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   4.       Trigonometric Equation.\n");
        }
        if(arrow==5)
        {
            printf("\t\t\t   5.");
            col(14,2);
            printf("       COMBINATIORICS.        \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   5.       Combinatorics.\n");
        }
        if(arrow==6)
        {
            printf("\t\t\t   6.");
            col(14,2);
            printf("       FIBONACCI SERIES.      \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   6.       Fibonacci Series.\n");
        }
        if(arrow==7)
        {
            printf("\t\t\t   7.");
            col(14,2);
            printf("       EXIT                   \n");
        }
        else
        {
            col(14,0);
            printf("\t\t\t   7.       Exit\n");
        }
        col(11,0);
        choice=getch();
        if(choice==72)arrow--;
        if(choice==80)arrow++;
        if(arrow>7)arrow=1;
        if(arrow<1)arrow=7;
    }
    while(choice!=13);
    return arrow;
}
