/*                        THE PROJECT
	     Program Containing Su Do Ku And Guessing Game (Number And Month)          */

#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
#include<graphics.h>

 fstream obj;
 int yu,gdriver=0,gmode;
 int spt,ppt,b[9][9]={0},l,cnt=1;
 int num,k,op,ky,opt,i,number,score,s[100]={0},sdk,temp=0,j,r,c,fi=0,si=0;
 int e1[9][9]={8,9,5,3,1,7,6,4,2,3,7,2,8,4,6,5,1,9,1,6,4,5,9,2,3,8,7,4,5,9,2,3,8,1,7,6,7,1,6,9,5,4,8,2,3,2,3,8,7,6,1,9,5,4,9,2,3,1,7,5,4,6,8,5,4,7,6,8,9,2,3,1,6,8,1,4,2,3,7,9,5},e2[9][9]={3,4,6,2,5,7,9,1,8,9,5,8,6,4,1,2,3,7,2,1,7,3,8,9,4,6,5,5,7,3,9,2,8,1,4,6,4,2,1,5,3,6,8,7,9,6,8,9,1,7,4,3,5,2,1,6,2,7,9,3,5,8,4,7,9,4,8,1,5,6,2,3,8,3,5,4,6,2,7,9,1},m1[9][9]={9,7,6,8,3,2,4,5,1,8,1,5,7,6,4,9,3,2,3,2,4,5,1,9,6,8,7,1,6,3,9,8,7,2,4,5,7,4,2,6,5,3,1,9,8,5,9,8,2,4,1,3,7,6,4,5,1,3,2,8,7,6,9,2,8,7,4,9,6,5,1,3,6,3,9,1,7,5,8,2,4},m2[9][9]={1,9,6,4,2,5,7,3,8,7,8,3,1,9,6,5,2,4,5,4,2,3,8,7,1,9,6,4,6,5,9,7,8,3,1,2,2,1,7,6,5,3,4,8,9,8,3,9,2,4,1,6,5,7,3,5,8,7,6,9,2,4,1,9,7,4,5,1,2,8,6,3,6,2,1,8,3,4,9,7,5},m3[9][9]={7,5,4,9,8,2,3,6,1,3,6,9,4,5,1,7,8,2,2,8,1,6,3,7,4,5,9,4,9,3,2,6,5,1,7,8,8,2,6,1,7,9,5,3,4,5,1,7,3,4,8,9,2,6,9,7,2,8,1,3,6,4,5,1,4,5,7,2,6,8,9,3,6,3,8,5,9,4,2,1,7};
 int h1[9][9]={9,2,3,4,5,8,1,6,7,6,7,5,1,9,2,4,8,3,1,8,4,7,6,3,2,9,5,3,1,6,5,2,9,7,4,8,5,9,8,3,7,4,6,1,2,7,4,2,6,8,1,5,3,9,4,6,9,2,3,5,8,7,1,8,5,1,9,4,7,3,2,6,2,3,7,8,1,6,9,5,4},h2[9][9]={3,6,8,7,5,4,9,1,2,7,1,9,3,8,2,5,6,4,2,4,5,1,6,9,3,7,8,4,8,6,5,3,1,2,9,7,1,9,7,2,4,8,6,5,3,5,3,2,6,9,7,8,4,1,6,7,1,9,2,3,4,8,5,8,5,3,4,7,6,1,2,9,9,2,4,8,1,5,7,3,6},h3[9][9]={2,8,9,1,6,3,7,5,4,7,1,6,8,4,5,3,2,9,4,3,5,2,7,9,1,8,6,3,5,1,6,2,7,9,4,8,6,4,2,3,9,8,5,7,1,9,7,8,4,5,1,6,3,2,8,2,3,7,1,6,4,9,5,1,9,4,5,3,2,8,6,7,5,6,7,9,8,4,2,1,3};
 char ch='y',ph='y',fu,n[25]={NULL},f[100][25]={NULL},*u,tr[]="CONGRATS",z[6],t[]="Pranav";

class s_effects
{
int i,j;
public:
void load();
}p;
void s_effects::load()
{
  clrscr();
  outtextxy(80,80,"Loading");

  setfillstyle(1,BLACK);
  bar(149,79,401,89);

  setcolor(LIGHTRED);
  line(150,79,150,88);
  line(149,79,149,88);
  line(150,88,400,88);
  line(149,89,400,89);

  setcolor(RED);
  line(150,79,400,79);
  line(149,78,401,78);
  line(400,79,400,88);
  line(401,78,401,89);
  setcolor(WHITE);
    for(j=147;j<=250;j+=2)
      {
	outtextxy(j,80,"Þ");
	delay(50);
      }
    for(j=251;j<=270;j+=2)
      {
	outtextxy(j,80,"Þ");
	delay(400);
      }
    for(j=271;j<=392;j+=2)
      {
	outtextxy(j,80,"Þ");
	delay(10);
      }
       clrscr();
       outtextxy(60,60,"Press any key");
       getch();
}


void intro()
 {
 initgraph(&gdriver,&gmode,"");
 setbkcolor(CYAN);
 setcolor(WHITE);
 settextstyle(installuserfont("lcom.chr"),HORIZ_DIR,1);
 outtextxy(150,80,"WELCOME TO THE GAME WORLD");
 outtextxy(170,100,"1.SU DO KU");
 outtextxy(170,120,"2.GUESSING GAME (NUMBER)");
 outtextxy(170,140,"3.GUESS THE MONTH");
 outtextxy(170,160,"4.EXIT");
 yu=(getch()-48);

 closegraph();
 }


void sudoku()
{
   setfillstyle(1,LIGHTGRAY);
   bar(100,60,410,370);

   {
   setcolor(WHITE);
   line(100,60,410,60);
   line(101,61,410,61);
   line(409,60,409,369);
   line(410,60,410,370);

   line(119,80,390,80);
   line(120,81,390,81);
   line(390,80,390,350);
   line(391,80,391,351);

   line(120,111,390,111);
   line(119,110,390,110);
   line(120,141,390,141);
   line(119,140,390,140);
   line(119,170,390,170);
   line(120,171,390,171);
   line(119,200,390,200);
   line(119,230,390,230);
   line(120,201,390,201);
   line(120,231,390,231);

   line(120,260,390,260);
   line(120,261,390,261);
   line(120,290,390,290);
   line(120,320,390,320);
   line(120,291,390,291);
   line(120,321,390,321);

   line(148,82,148,350);
   line(149,82,149,350);
   line(180,82,180,350);
   line(179,82,179,350);
   line(208,82,208,350);
   line(209,82,209,350);
   line(238,82,238,350);
   line(268,82,268,350);
   line(298,82,298,350);
   line(299,82,299,350);
   line(328,82,328,350);
   line(358,82,358,350);
   line(239,82,239,350);
   line(269,82,269,350);
   line(329,82,329,350);
   line(359,82,359,350);
   }
   {
    setcolor(DARKGRAY);
   line(100,60,100,370);
   line(101,61,101,370);
   line(100,369,409,369);
   line(100,370,410,370);


   line(120,81,120,350);
   line(119,80,119,350);

   line(150,80,150,350);
   line(151,81,151,350);
   line(182,81,182,350);
   line(181,80,181,350);
   line(210,80,210,350);
   line(211,81,211,350);
   line(240,80,240,350);
   line(270,80,270,350);
   line(300,80,300,350);
   line(301,81,301,350);
   line(330,80,330,350);
   line(360,80,360,350);
   line(241,81,241,350);
   line(271,81,271,350);
   line(331,81,331,350);
   line(361,81,361,350);

   line(120,109,390,109);
   line(120,108,389,108);
   line(120,139,390,139);
   line(120,138,389,138);
   line(120,168,389,168);
   line(120,169,390,169);
   line(120,198,389,198);
   line(120,228,389,228);
   line(120,199,390,199);
   line(120,229,390,229);
   line(120,258,389,258);
   line(120,259,390,259);
   line(120,288,389,288);
   line(120,318,389,318);
   line(120,289,390,289);
   line(120,319,390,319);

   line(120,350,389,350);
   line(119,351,390,351);
   }
   for(i=0;i<=7;i++)
   putpixel(120,(110+i*30),DARKGRAY);
   setcolor(LIGHTBLUE);
   rectangle(0,0,500,390);
   setfillstyle(1,6);
   bar(501,0,getmaxx(),getmaxy());
   setfillstyle(9,MAGENTA);
   bar(505,4,(getmaxx()-4),getmaxy()-4);
   setfillstyle(0,0);
   bar(506,245,(getmaxx()-4),293);
}

void given_value()
{
	sudoku();
	setcolor(BLACK);
	for(l=0;l<9;l++)
	for(j=0;j<9;j++)
	{
	if(b[l][j]!=0)
	{
	if(b[l][j]==1)
	  outtextxy((132+(j*30)),(90+(l*30)),"1");
	  else if(b[l][j]==2)
	  outtextxy((132+(j*30)),(90+(l*30)),"2");
	  else if(b[l][j]==3)
	  outtextxy((132+(j*30)),(90+(l*30)),"3");
	  else if(b[l][j]==4)
	  outtextxy((132+(j*30)),(90+(l*30)),"4");
	  else if(b[l][j]==5)
	  outtextxy((132+(j*30)),(90+(l*30)),"5");
	  else if(b[l][j]==6)
	  outtextxy((132+(j*30)),(90+(l*30)),"6");
	  else if(b[l][j]==7)
	  outtextxy((132+(j*30)),(90+(l*30)),"7");
	  else if(b[l][j]==8)
	  outtextxy((132+(j*30)),(90+(l*30)),"8");
	  else
	  outtextxy((132+(j*30)),(90+(l*30)),"9");
	  }
	  }
}


void get_value()
{
while(ph=='y')
	 {
	  given_value();
	  setcolor(RED);
	  outtextxy(0,450,"Press Esc to complete");
	  setcolor(GREEN);
	  outtextxy(0,400,"Enter the row and column to enter the value(i.e)0-8:");
	  setcolor(BLUE);
	  *u=char(getch());
	  if(inportb(0x60)==1)
	   {
	    ph='n';
	   goto x;
	   }
	  r=*u-48;
	  outtextxy((getmaxx()-100),250,"Row:");
	  outtextxy((getmaxx()-40),250,u);
	  *u=char(getch());
	  c=*u-48;
	  outtextxy((getmaxx()-100),280,"Column:");
	  outtextxy((getmaxx()-40),280,u);
	  setcolor(GREEN);
	  outtextxy(0,410,"Enter the value:");
	  *u=char(getch());
	  sdk=*u-48;
	  b[r][c]=sdk;
	  clrscr();
	  sudoku();
	  given_value();
     setcolor(GREEN);
       x:
      clrscr();
       }
}

void check(int h)
{
if(h==1)
{
  for(i=0;i<=8;i++)
   {
     clrscr();
     settextstyle(1,0,i);
     outtextxy((200-(i*5)),100,tr);
     delay(100);
   }
  settextstyle(1,0,2);
  outtextxy(220,240,"You have completed the Su Do Ku");
  getch();
}
}

void rules_effects()
{
   setfillstyle(1,BLUE);
   for(i=1;i<=4;i++)
   bar3d(10,12,(getmaxx()-12),(getmaxy()-10),(10-(2*i)),1);
   setcolor(BLACK);
}

void main()
{
 textcolor(0);
 obj.open("pp.txt",ios::in|ios::app|ios::binary);
 clrscr();
 d:

 intro();

 switch(yu)
 {
  case 1:    //SU DO KU
   {
   initgraph(&gdriver,&gmode,"");
   clrscr();
   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
   setbkcolor(BLACK);
   setcolor(BLUE);
   outtextxy(180,90,"SU DO KO");
   o:
   outtextxy(200,120,"1.RULES");
   outtextxy(200,140,"2.PLAY");
   outtextxy(200,160,"3.EXIT");
   sdk=(getch()-48);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   switch(sdk)
   {
   case 1:    //rules
   {
   clrscr();
   p.load();
   clrscr();
   rules_effects();
   outtextxy(160,50,"RULES:-");
   outtextxy(100,70,"A mind game and a puzzle that you solve with reasoning and logic .");
   outtextxy(60,80," Fill in the grid with digits in such a manner that every row ,");
   outtextxy(60,90,"every column and every 3x3 box accommodates the digits 1 to 9 ,");
   outtextxy(60,100,"without repeating any .");
   outtextxy(160,150,"NOTE:-");
   outtextxy(170,180,"Any number greater than 9 will be taken as 9.");
   outtextxy(200,220,"!!  BEST OF LUCK  !!");
   getch();
   clrscr();
   goto o;
   }
   case 2:   //play
   {
    clrscr();
    p.load();
    clrscr();
    settextstyle(installuserfont("litt.chr"),0,6);
    setcolor(LIGHTBLUE);
    outtextxy(180,90,"SU DO KO");
    outtextxy(80,120,"DIFFICULTY :");
    outtextxy(100,140,"1.EASY");
    outtextxy(100,160,"2.MEDIUM");
    outtextxy(100,180,"3.HARD");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    spt=(getch()-48);
    clrscr();
    sudoku();
    switch(spt)
    {
     case 1:
     {
      randomize();
      ppt=random(2)+1;
      switch(ppt)
      {
       case 1:
       {
	b[1][0]=3;
	b[1][1]=7;
	b[1][2]=2;
	b[1][4]=4;
	b[1][6]=5;
	b[1][8]=9;
	b[2][1]=6;
	b[2][5]=2;
	b[2][8]=7;
	b[3][1]=5;
	b[3][5]=8;
	b[3][7]=7;
	b[3][8]=6;
	b[4][2]=6;
	b[4][3]=9;
	b[4][5]=4;
	b[4][6]=8;
	b[5][0]=2;
	b[5][1]=3;
	b[5][3]=7;
	b[5][7]=5;
	b[6][0]=9;
	b[6][3]=1;
	b[6][7]=6;
	b[7][0]=5;
	b[7][2]=7;
	b[7][4]=8;
	b[7][6]=2;
	b[7][7]=3;
	b[7][8]=1;
	given_value();
	get_value();
       for(i=0;i<9;i++)
       for(j=0;j<9;j++)
       {
	if(e1[i][j]!=b[i][j])
	{
	cnt=0;
	break;
	}
       }
	check(cnt);
	getch();
	break;
	}
       case 2:
       {
	b[0][4]=5;
	b[0][5]=7;
	b[0][6]=9;
	b[1][2]=8;
	b[1][3]=6;
	b[1][6]=2;
	b[2][1]=1;
	b[2][3]=3;
	b[2][6]=4;
	b[3][1]=7;
	b[3][3]=9;
	b[3][5]=8;
	b[3][7]=4;
	b[3][8]=6;
	b[4][0]=4;
	b[4][8]=9;
	b[5][0]=6;
	b[5][1]=8;
	b[5][3]=1;
	b[5][5]=4;
	b[5][7]=5;
	b[6][2]=2;
	b[6][5]=3;
	b[6][7]=8;
	b[7][2]=4;
	b[7][5]=5;
	b[7][6]=6;
	b[8][2]=5;
	b[8][3]=4;
	b[8][4]=6;
	given_value();
	get_value();
       for(i=0;i<9;i++)
       for(j=0;j<9;j++)
       {
	if(e2[i][j]!=b[i][j])
	{
	cnt=0;
	break;
	}
       }
	check(cnt);
	getch();

       break;
       }
      }
     break;
     }
     case 2:
     {
      randomize();
      ppt=random(3)+1;
      switch(ppt)
      {
      case 1:
      {
       b[0][2]=6;
       b[0][6]=4;
       b[1][1]=1;
       b[1][6]=9;
       b[2][0]=3;
       b[2][1]=2;
       b[2][2]=4;
       b[2][3]=5;
       b[2][5]=9;
       b[3][3]=9;
       b[3][5]=7;
       b[3][8]=5;
       b[4][0]=7;
       b[4][8]=8;
       b[5][0]=5;
       b[5][3]=2;
       b[5][5]=1;
       b[6][3]=6;
       b[6][5]=8;
       b[6][6]=7;
       b[6][7]=6;
       b[6][8]=9;
       b[7][2]=7;
       b[7][7]=1;
       b[8][2]=9;
       b[8][6]=8;
	given_value();
	get_value();
       for(i=0;i<9;i++)
       for(j=0;j<9;j++)
       {
	if(m1[i][j]!=b[i][j])
	{
	cnt=0;
	break;
	}
       }
	check(cnt);
	getch();

       break;
      }
      case 2:
      {
	b[0][1]=9;
	b[0][5]=5;
	b[0][6]=7;
	b[1][4]=9;
	b[1][5]=5;
	b[2][2]=2;
	b[2][3]=3;
	b[2][8]=6;
	b[3][1]=6;
	b[3][4]=7;
	b[3][6]=3;
	b[3][8]=2;
	b[4][2]=1;
	b[4][7]=8;
	b[5][0]=8;
	b[5][2]=9;
	b[5][4]=4;
	b[5][7]=4;
	b[6][0]=3;
	b[6][5]=9;
	b[6][6]=2;
	b[7][2]=4;
	b[7][3]=5;
	b[7][4]=1;
	b[8][2]=1;
	b[8][3]=8;
	b[8][7]=7;
	given_value();
	get_value();
       for(i=0;i<9;i++)
       for(j=0;j<9;j++)
       {
	if(m2[i][j]!=b[i][j])
	{
	cnt=0;
	break;
	}
       }
	check(cnt);
	getch();

       break;
      }
      case 3:
      {
	b[0][2]=4;
	b[0][4]=8;
	b[0][5]=2;
	b[0][6]=3;
	b[0][7]=6;
	b[1][0]=3;
	b[1][5]=1;
	b[2][0]=2;
	b[2][3]=6;
	b[2][8]=9;
	b[3][0]=4;
	b[3][1]=9;
	b[3][6]=1;
	b[4][0]=8;
	b[4][4]=7;
	b[4][8]=4;
	b[5][2]=7;
	b[5][7]=2;
	b[5][8]=6;
	b[6][0]=9;
	b[6][5]=3;
	b[6][8]=5;
	b[7][3]=7;
	b[7][8]=3;
	b[8][1]=3;
	b[8][2]=8;
	b[8][3]=5;
	b[8][4]=9;
	b[8][6]=2;
	given_value();
	get_value();
       for(i=0;i<9;i++)
       for(j=0;j<9;j++)
       {
	if(m3[i][j]!=b[i][j])
	{
	cnt=0;
	break;
	}
       }
	check(cnt);
	getch();

       break;
      }
      }
     break;
     }
     case 3:
     {
      randomize();
      ppt=random(3)+1;
      switch(ppt)
      {
       case 1:
       {
	b[0][1]=2;
	b[0][2]=3;
	b[0][6]=1;
	b[1][2]=5;
	b[1][4]=9;
	b[1][6]=4;
	b[2][1]=8;
	b[2][4]=6;
	b[3][1]=1;
	b[3][4]=2;
	b[3][8]=8;
	b[4][1]=9;
	b[4][3]=3;
	b[4][5]=4;
	b[4][7]=1;
	b[5][0]=7;
	b[5][4]=8;
	b[5][3]=3;
	b[6][4]=3;
	b[6][7]=7;
	b[7][2]=1;
	b[7][4]=4;
	b[7][6]=3;
	b[8][2]=7;
	b[8][6]=9;
	b[8][7]=5;
	 given_value();
	 get_value();
       for(i=0;i<9;i++)
       for(j=0;j<9;j++)
       {
	if(h1[i][j]!=b[i][j])
	{
	cnt=0;
	break;
	}
       }
	check(cnt);
	getch();

       break;
       }
      case 2:
      {
	b[0][2]=8;
	b[0][5]=4;
	b[0][7]=1;
	b[1][0]=7;
	b[1][6]=5;
	b[1][7]=6;
	b[2][2]=5;
	b[2][4]=6;
	b[2][5]=9;
	b[3][3]=5;
	b[4][0]=1;
	b[4][2]=7;
	b[4][6]=6;
	b[4][8]=3;
	b[5][5]=7;
	b[6][3]=9;
	b[6][4]=2;
	b[6][6]=4;
	b[7][1]=5;
	b[7][2]=3;
	b[7][8]=9;
	b[8][1]=2;
	b[8][3]=8;
	b[8][6]=7;
	given_value();
	get_value();
       for(i=0;i<9;i++)
       for(j=0;j<9;j++)
       {
	if(h2[i][j]!=b[i][j])
	{
	cnt=0;
	break;
	}
       }
	check(cnt);
	getch();

       break;
      }
      case 3:
      {
	b[0][2]=9;
	b[0][6]=7;
	b[0][7]=5;
	b[1][1]=1;
	b[1][4]=4;
	b[1][5]=5;
	b[2][3]=2;
	b[2][7]=8;
	b[3][1]=5;
	b[3][2]=1;
	b[3][3]=6;
	b[3][5]=7;
	b[3][6]=9;
	b[5][2]=8;
	b[5][3]=4;
	b[5][5]=1;
	b[5][6]=6;
	b[5][7]=3;
	b[6][1]=2;
	b[6][5]=6;
	b[7][3]=5;
	b[7][4]=3;
	b[7][7]=6;
	b[8][1]=6;
	b[8][2]=7;
	b[8][6]=2;
	 given_value();
	 get_value();

       for(i=0;i<9;i++)
       for(j=0;j<9;j++)
       {
	if(h3[i][j]!=b[i][j])
	{
	 cnt=0;
	 break;
	}
       }
	check(cnt);
	getch();
       break;
      }
      }
     }

   }
   break;
   }
   case 3:   //exit
   {
    p.load();
    exit(0);
   }
   }
   closegraph();
   break;
   }
  case 2:       //GUESSING GAME
   {
     textcolor(2);
     clrscr();
      cout<<"\n\t\t\t\tWELCOME TO THE GUESSING GAME";
      a:

      cout<<"\n\n\n\t\t\t\t\t1.RULES\n\t\t\t\t\t2.PLAY\n\t\t\t\t\t3.EXIT\n\t\t";
     cin>>opt;
     clrscr();
      switch(opt)
       {
	 case 1:   //rules
	  {
	       initgraph(&gdriver,&gmode,"");
	       p.load();
	       closegraph();
	       clrscr();
		cout<<"\n\n\n\t\t\t\tTHE RULES OF THE GUESSING GAME ARE :-\n\n\t\tYou have to guess a number between 1 to 100,such that it matches the number guessed by the computer.You have 10 chances to do that and the minimum chances you take the more score you get.For each guess a hint will be provided which will make it easier to play the game.\n\n\t\t\tBEST\tOF\tLUCK\t!\t!";
	       sleep(10);
	       clrscr();
	       goto a;
	  }
	case 2:   //play
	  {
	   do
	    {
	       initgraph(&gdriver,&gmode,"");
	       p.load();
	       closegraph();

		 clrscr();
		 randomize();
		 number=(int)(rand()%100);
		  cout<<"\n\n\t\tGuess a number from 1 to 100\n\t\t";
		  for(i=1;i<=10;i++)
		   {
		    cin>>ky;
		     if(number==ky)
		      {
		       score=(10-i)*10;
			cout<<"\n\n\t\tCONGRALATIONS! You have guessed the correct number\a\a\a\a\a\a\a\a"<<"\n\tYour score is "<<score;
			cout<<"\n\tEnter the name :";
		       gets(n);
		       obj<<n<<" "<<score;
		       break;
		      }
		     else if(number>ky)
		      {
			 cout<<ky<<"is low.Please try a higher number.";
		      }
		     else if((number<ky)&&(ky<=100))
		      {
			 cout<<ky<<"is high.Please try lower number.";
		      }
		     else
		      {
			 cout<<"WRONG!press only between 1 to 100.";
		      }
			 cout<<"\n\t\tyou have"<<10-i<<"chances left.";
		   }
		   if(i>10)
		    {
		       cout<<"\n\n\t\tGAME OVER!Better luck next time \n\t\t";
		       cout<<"The correct answer is"<<number<<".";
		    }
		       cout<<"\n\n\t\tDo you want to continue,press y/n\n";
		      cin>>ch;
	    }while(ch=='y');
	    clrscr();
 cout<<"\n\tThe scores are :";
obj.seekg(0,ios::beg);
while(obj)
{
 obj>>f[fi];
 obj>>s[si];
 if(obj)
 {
  cout<<"\n\t\t"<<f[fi];
  for(i=0;i<(15-strlen(f[fi]));i++)
   cout<<" ";
   cout<<s[si];
   fi++;
   si++;
 }
}
i=0;
while(i!=si)
{
 if(s[i]>temp)
  temp=s[i];
  i++;
}
 i=0;
 cout<<"\n\n\tThe highest score is:";
while(i!=si)
{
 if(s[i]==temp)
 {
 cout<<"\n";
 delay(200);
  for(j=0;j<strlen(f[i]);j++)
   {
    cout<<f[i][j]<<"\a";
    delay(200);
   }
   cout<<"  "<<s[i];
  }
i++;
}
obj.close();
	   break;
	  }
	case 3:      //exit
	  {
	  initgraph(&gdriver,&gmode,"");
	  p.load();
	  closegraph();
	   break;
	  }
	 default :
	   {
	      cout<<"please press a numbers 1,2and3 only.";
	     goto a;
	   }
       }
    break;
   }
  case 3:
   {
    textcolor(2);
    initgraph(&gdriver,&gmode,"");
    p.load();
    closegraph();
    clrscr();
     cout<<"\n\t\t\tWELCOME TO THE GUESS THE MONTH GAME";
    s:
     cout<<"\n\n\n\t\t\t\t\t1.RULES\n\t\t\t\t\t2.PLAY\n\t\t\t\t\t3.EXIT\n\t\t";
    cin>>op;
    clrscr();
     switch(op)
     {
      case 1:
       {
	initgraph(&gdriver,&gmode,"");
	p.load();
	closegraph();
	clrscr();
	 cout<<"\n\t\tPress any key";
	getch();
	clrscr();
	 cout<<"\n\t\t\tRULES:-\n\n\t\tYou have to guess a month \n and complete the calculations given by the computer , \n and give the final answer .\n The computer will say the month guessed by you.\n\n\t\t\tBEST OF LUCK!!";
	getch();
	clrscr();
	goto s;
       }
      case 2:
       {
	initgraph(&gdriver,&gmode,"");
	p.load();
	closegraph();
	clrscr();
	 cout<<"\n\t\tPress any key";
	getch();
	clrscr();
	 cout<<"\n\tGUESS THE MONTH";
	sleep(2);
	 cout<<"\n\tMULTIPLY IT BY 2";
	sleep(2);
	 cout<<"\n\tADD IT BY 5";
	sleep(2);
	 cout<<"\n\tMULTIPLY IT BY 50";
	sleep(2);
	 cout<<"\n\t\tTYPE THE FINAL ANSWER";
	cin>>k;
	k=k-200;
	k=k/100;
	 if(k==1)
	   cout<<"\n\n\t\tJANUARY";
	 else if(k==2)
	   cout<<"\n\n\t\tFEBRUARY";
	 else if(k==3)
	   cout<<"\n\n\t\tMARCH";
	 else if(k==4)
	   cout<<"\n\n\t\tAPRIL";
	 else if(k==5)
	   cout<<"\n\n\t\tMAY";
	 else if(k==6)
	   cout<<"\n\n\t\tJUNE";
	 else if(k==7)
	   cout<<"\n\n\t\tJULY";
	 else if(k==8)
	   cout<<"\n\n\t\tAUGUST";
	 else if(k==9)
	   cout<<"\n\n\t\tSEPTEMBER";
	 else if(k==10)
	   cout<<"\n\n\t\tOCTOBER";
	 else if(k==11)
	   cout<<"\n\n\t\tNOVEMBER";
	 else
	   cout<<"\n\n\t\tDECEMBER";
	   getch();
	   clrscr();
	   goto d;
       }
      case 3:
       {
	exit(0);
       }
      }
      break;
    }
  case 4:      //exit
    {
     cout<<"\n\t\tAre you sure?  press y / n";
     cin>>fu;
     if(fu=='y')
      {
       break;
      }
     else
      {
       clrscr();
       goto d;
      }
    }
  default :
    {
      cout<<"\n\t\tEnter a numbers 1,2and3 only";
     goto d;
    }
  }
getch();
}