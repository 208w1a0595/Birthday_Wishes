#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<time.h>
#include<stdlib.h>
void song();
char name[100];
void main()
{
  int gmode=DETECT,gdriver;
  initgraph(&gmode,&gdriver,"c:\\tc\\bgi");
  int i;
  setcolor(CYAN);
  printf("ENTER BIRTHDAY PERSON NAME\n");
  scanf("%s",&name);
  printf("\n\n\n\t\tMANY MORE HAPPY RETURNS OF THE DAY %s",name);
   setcolor(MAGENTA);
  rectangle(0,200,175,230);
  setfillstyle(7,MAGENTA);
  floodfill(1,201,MAGENTA);
  delay(1000);
  setcolor(CYAN);
    delay(1000);
  rectangle(25,175,150,200);
  setfillstyle(8,CYAN);
  floodfill(26,176,CYAN);
  delay(1000);
  setcolor(WHITE);
    delay(1000);
  rectangle(50,140,125,175);
  setfillstyle(10,WHITE);
  floodfill(51,141,WHITE);
  delay(1000);
  setcolor(LIGHTBLUE);
    delay(1000);
  rectangle(80,120,90,140);
  setfillstyle(3,LIGHTBLUE);
  floodfill(81,121,LIGHTBLUE);
  delay(1000);
  line(85,110,85,120);
  delay(1000);
  setcolor(RED);
    delay(1000);
  ellipse(85,105,0,360,1,5);
  setfillstyle(SOLID_FILL,RED);
  floodfill(86,106,RED);
  delay(1000);
  song();
 setcolor(BLUE);
   delay(1000);
 ellipse(300,200,0,360,50,15);
   delay(1000);
 rectangle(300,175,290,200);
   delay(1000);
 line(295,175,295,160);
    delay(1000);
 line(300,200,300,180);
   delay(1000);
 line(250,200,250,235);
  delay(1000);
  line(350,200,350,235);
  delay(1000);
  ellipse(260,222,180,0,10,4);
    delay(1000);
  ellipse(280,224,180,0,10,4);
  delay(1000);
  ellipse(300,224,180,0,10,4);
  delay(1000);
  ellipse(320,224,180,0,10,4);
  delay(1000);
  ellipse(340,222,180,0,10,4);
  delay(1000);
  ellipse(300,250,140,40,65,15);
  delay(1000);
  line(235,250,235,300);
    delay(1000);
  line(365,250,365,300);
    delay(1000);
  ellipse(300,300,180,0,65,15);
    delay(1000);
  ellipse(300,290,180,0,6,15);
    delay(1000);
  ellipse(245,280,180,0,10,4);
    delay(1000);
  ellipse(265,284,180,0,10,4);
    delay(1000);
  ellipse(285,284,180,0,10,4);
    delay(1000);
  ellipse(305,284,180,0,10,4);
    delay(1000);
  ellipse(325,284,180,0,10,4);
    delay(1000);
  ellipse(345,284,180,0,10,4);
    delay(1000);
  ellipse(360,282,180,0,10,4);
    delay(1000);
  ellipse(300,282,180,0,10,4);
    delay(1000);
  ellipse(300,315,140,40,80,15);
    delay(1000);
  line(220,315,220,375);
    delay(1000);
  line(380,315,380,375);
    delay(1000);
  ellipse(300,375,180,0,80,15);
    delay(1000);
  ellipse(300,365,180,0,80,15);
     delay(1000);
  ellipse(250,354,180,0,10,4);
  delay(1000);
  ellipse(230,354,180,0,10,4);
  delay(1000);
  ellipse(270,354,180,0,10,4);
    delay(1000);
  ellipse(290,354,180,0,10,4);
    delay(1000);
  ellipse(310,354,180,0,10,4);
    delay(1000);
  ellipse(330,354,180,0,10,4);
    delay(1000);
  ellipse(350,354,180,0,10,4);
  delay(1000);
  ellipse(370,350,180,0,10,4);
    delay(1000);
  setcolor(RED);
   ellipse(295,160,0,360,1,5);
 setcolor(6);
 settextstyle(1,HORIZ_DIR,4);
 outtextxy(0,400,"HAPPY");
 outtextxy(200,400,"BIRTHDAY");
 outtextxy(60,430,"FROM MGS");
 getch();
}
void song()
{
  sound(262);
  delay(500);
  sound(262);
  delay(500);
  sound(294);
  delay(1000);
  sound(262);
  delay(1000);
  sound(349);
  delay(1000);
  sound(330);
  delay(2000);
  sound(262);
  delay(500);
  sound(294);
  delay(1000);
  sound(262);
  delay(1000);
  sound(392);
  delay(1000);
  sound(349);
  delay(2000);
  sound(262);
  delay(500);
  sound(262);
  delay(500);
  sound(523);
  delay(1000);
  sound(440);
  delay(1000);
  sound(349);
  delay(1000);
  sound(330);
  delay(1000);
  sound(294);
  delay(3000);
  sound(466);
  delay(1000);
  sound(466);
  delay(1000);
  sound(440);
  delay(1000);
  sound(349);
  delay(1000);
  sound(392);
  delay(1000);
  sound(349);
  delay(2000);
 nosound();
}
