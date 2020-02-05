#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<string.h>
#include<unistd.h>
int flag = 0;
void *currentfont;

void setFont(void *font)
{
	currentfont = font;
}


void drawstring(float x, float y, float z,const char *string)
{
	//char *c;
	int len = (int)strlen(string);
	int i;
	glRasterPos3f(x, y, z);
	/*for(c=string;*c!='\0';c++)
	{
		glColor3f(0.0,0.0,0.0);
		glutBitmapCharacter(currentfont,*c);
	}*/
	for (i = 0; i < len; i++)
	{
		glColor3f(0.0, 0.0, 0.0);
		glutBitmapCharacter(currentfont, string[i]);
	}
}

void frontscreen(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0, 1);
	drawstring(200.0 , 800.0, 0.0, "MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING");
	glColor3f(0.7, 0, 1);
	drawstring(215, 750, 0.0, "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
	glColor3f(1, 0.5, 0);
	drawstring(375, 700, 0.0, "A MINI PROJECT ON");
	glColor3f(1, 0, 0);
	drawstring(275, 650, 0.0, "SIMULATION OF DRIP IRRIGATION SYSTEM");
	glColor3f(1, 0.5, 0);
	drawstring(215,600, 0.0, "BY:");
	glColor3f(0.5, 0, 0.5);
	drawstring(215, 565, 0.0, "RISHIKA M R            (4MT16CS071)");
	drawstring(215, 520, 0.0, "SHALMALI M            (4MT16CS081)");
	glColor3f(1, 0.5, 0);
	drawstring(215, 470, 0.0, "GUIDES:");
	glColor3f(0.5, 0.2, 0.2);
	drawstring(215,435, 0.0, "MR PRASHANTH BS");
	drawstring(215,390, 0.0, "MRS SARANYA BABU");
	glColor3f(1, 0.1, 1);
	drawstring(375,290, 0.0, "PRESS ENTER TO START");
	glutSwapBuffers();
	glFlush();
}

	void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0, 1);
	drawstring(300 , 750, 0.0, "SIMULATION OF DRIP IRRIGATION SYSTEM");
	glColor3f(0, .5, .5);
	drawstring(350, 650, 0.0, "PRESS 'n' : NEXT PAGE");
	glColor3f(0, .5, .5);
	drawstring(350, 550, 0.0, "PRESS 'p' : PREVIOUS PAGE");
	glutSwapBuffers();
	glFlush();
	//code to graphics
}




void bigfarm()
 {


	glBegin(GL_POLYGON);
	glColor3f(0.1,0.0,0.0);
	glVertex2f(0,0);
	glColor3f(0.1,0.0,0.0);
	glVertex2f(520,0);
	glVertex2f(700,650);
    glColor3f(0.1,0.0,0.0);
	glVertex2f(0,650);
	glEnd();
	//glFlush();

 }

void tank()
 {
      //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glColor3f(0.60,0.59,0.60);
	glVertex2f(675,350);
	glColor3f(0.26,0.25,0.26);
	glVertex2f(750,300);
	glColor3f(0.44,0.43,0.44);
	glVertex2f(750,500);
	glColor3f(0.44,0.43,0.44);
	glVertex2f(675,550);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glColor3f(0.60,0.59,0.60);
	glVertex2f(750,300);
	glColor3f(0.26,0.25,0.26);
	glVertex2f(825,350);
	glColor3f(0.44,0.43,0.44);
	glVertex2f(825,550);
	glColor3f(0.44,0.43,0.44);
	glVertex2f(750,500);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glColor3f(0.26,0.25,0.26);
	glVertex2f(750,500);
    glColor3f(0.26,0.25,0.26);
	glVertex2f(825,550);
    glVertex2f(750,600);
	glVertex2f(675,550);
	glEnd();


 }


 void base()
 {
      //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glColor3f(0.26,0.25,0.26);
    glVertex2f(750,275);
	glVertex2f(850,350);
    glVertex2f(750,425);
     glVertex2f(650,350);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glColor3f(0.26,0.25,0.26);
    glVertex2f(750,225);
    glColor3f(0.26,0.25,0.26);
	glVertex2f(750,275);
    glColor3f(0.60,0.59,0.60);
    glVertex2f(650,350);
    glColor3f(0.26,0.25,0.26);
	glVertex2f(650,300);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glColor3f(0.26,0.25,0.26);
    glVertex2f(750,225);
    glColor3f(0.26,0.25,0.26);
	glVertex2f(850,300);
    glColor3f(0.60,0.59,0.60);
    glVertex2f(850,350);
    glColor3f(0.26,0.25,0.26);
	glVertex2f(750,275);
	glEnd();

 }

void sky()
{
    glBegin(GL_POLYGON);
    glColor3f(0.25,1.00,0.1);
     glColor3f(.8,.8,0);
    glVertex2f(0,650);
    glColor3f(0.25,1.00,0.1);
    glVertex2f(900,650);
     glColor3f(0.5,1.00,1);
     glVertex2f(900,900);
     glColor3f(0.5,1.00,1);
      glVertex2f(0,900);
    glEnd();
}

  void water()
 {
      //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glColor3f(0.130,0.23,0.90);
	//glColor3f(0.060,0.05,0.35);
	glVertex2f(750,510);
	glColor3f(0.070,0.09,0.69);
	glVertex2f(815,550);
	//glColor3f(0.10,0.13,0.89);
	//glColor3f(0.78,0.79,0.96);
	glColor3f(0.68,0.66,0.66);
	glVertex2f(750,590);
	glColor3f(0.130,0.23,0.90);
	glVertex2f(685,550);
	glEnd();
	//glFlush();

 }

 void plant()
{ glBegin(GL_TRIANGLES);//plant 41
       glColor3f(0.76,0.60,0.33);
    glVertex2f(75,350);
    glVertex2f(85,355);
    glVertex2f(80,390);

      glColor3f(0,1,0);
    glVertex2f(80,390);
    glVertex2f(50,405);
    glVertex2f(50,395);

     glColor3f(0,1,0);
     glVertex2f(80,390);
     glVertex2f(55,425);
    glVertex2f(65,428);

     glColor3f(0,1,0);
     glVertex2f(80,390);
     glVertex2f(90,420);
    glVertex2f(95,405);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 42
       glColor3f(0.76,0.60,0.33);
    glVertex2f(100,450);
    glVertex2f(110,455);
    glVertex2f(105,490);

      glColor3f(0,1,0);
    glVertex2f(105,490);
    glVertex2f(75,505);
    glVertex2f(75,495);

     glColor3f(0,1,0);
     glVertex2f(105,490);
     glVertex2f(80,525);
    glVertex2f(95,528);

     glColor3f(0,1,0);
     glVertex2f(105,490);
     glVertex2f(115,520);
    glVertex2f(120,505);
    glEnd();

     glBegin(GL_TRIANGLES);//plant 43
       glColor3f(0.76,0.60,0.33);
    glVertex2f(125,550);
    glVertex2f(135,555);
    glVertex2f(130,590);

      glColor3f(0,1,0);
    glVertex2f(130,590);
    glVertex2f(100,605);
    glVertex2f(100,595);

     glColor3f(0,1,0);
     glVertex2f(130,590);
     glVertex2f(105,625);
    glVertex2f(115,628);

     glColor3f(0,1,0);
     glVertex2f(130,590);
     glVertex2f(140,620);
    glVertex2f(145,605);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 411
       glColor3f(0.76,0.60,0.33);
    glVertex2f(175,350);
    glVertex2f(185,355);
    glVertex2f(180,390);

      glColor3f(0,1,0);
    glVertex2f(180,390);
    glVertex2f(150,405);
    glVertex2f(150,395);

     glColor3f(0,1,0);
     glVertex2f(180,390);
     glVertex2f(155,425);
    glVertex2f(165,428);

     glColor3f(0,1,0);
     glVertex2f(180,390);
     glVertex2f(190,420);
    glVertex2f(195,405);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 422
       glColor3f(0.76,0.60,0.33);
    glVertex2f(200,450);
    glVertex2f(210,455);
    glVertex2f(205,490);

      glColor3f(0,1,0);
    glVertex2f(205,490);
    glVertex2f(175,505);
    glVertex2f(175,495);

     glColor3f(0,1,0);
     glVertex2f(205,490);
     glVertex2f(180,525);
    glVertex2f(195,528);

     glColor3f(0,1,0);
     glVertex2f(205,490);
     glVertex2f(215,520);
    glVertex2f(220,505);
    glEnd();

    glBegin(GL_TRIANGLES);//plant433
       glColor3f(0.76,0.60,0.33);
    glVertex2f(225,550);
    glVertex2f(235,555);
    glVertex2f(230,590);

      glColor3f(0,1,0);
    glVertex2f(230,590);
    glVertex2f(200,605);
    glVertex2f(200,595);

     glColor3f(0,1,0);
     glVertex2f(230,590);
     glVertex2f(205,625);
    glVertex2f(215,628);

     glColor3f(0,1,0);
     glVertex2f(230,590);
     glVertex2f(240,620);
    glVertex2f(245,605);
    glEnd();

    glBegin(GL_TRIANGLES);//plant51
       glColor3f(0.76,0.60,0.33);
    glVertex2f(275,350);
    glVertex2f(285,355);
    glVertex2f(280,390);

      glColor3f(0,1,0);
    glVertex2f(280,390);
    glVertex2f(250,405);
    glVertex2f(250,395);

     glColor3f(0,1,0);
     glVertex2f(280,390);
     glVertex2f(255,425);
    glVertex2f(265,428);

     glColor3f(0,1,0);
     glVertex2f(280,390);
     glVertex2f(290,420);
    glVertex2f(295,405);
    glEnd();

    glBegin(GL_TRIANGLES);//plant52
       glColor3f(0.76,0.60,0.33);
    glVertex2f(300,450);
    glVertex2f(310,455);
    glVertex2f(305,490);

      glColor3f(0,1,0);
    glVertex2f(305,490);
    glVertex2f(275,505);
    glVertex2f(275,495);

     glColor3f(0,1,0);
     glVertex2f(305,490);
     glVertex2f(280,525);
    glVertex2f(295,528);

     glColor3f(0,1,0);
     glVertex2f(305,490);
     glVertex2f(315,520);
    glVertex2f(320,505);
    glEnd();

    glBegin(GL_TRIANGLES);//plant53
       glColor3f(0.76,0.60,0.33);
    glVertex2f(325,550);
    glVertex2f(335,555);
    glVertex2f(330,590);

      glColor3f(0,1,0);
    glVertex2f(330,590);
    glVertex2f(300,605);
    glVertex2f(300,595);

     glColor3f(0,1,0);
     glVertex2f(330,590);
     glVertex2f(305,625);
    glVertex2f(315,628);

     glColor3f(0,1,0);
     glVertex2f(330,590);
     glVertex2f(340,620);
    glVertex2f(345,605);
  glEnd();

    glBegin(GL_TRIANGLES);//plant511
       glColor3f(0.76,0.60,0.33);
    glVertex2f(375,350);
    glVertex2f(385,355);
    glVertex2f(380,390);

      glColor3f(0,1,0);
    glVertex2f(380,390);
    glVertex2f(350,405);
    glVertex2f(350,395);

     glColor3f(0,1,0);
     glVertex2f(380,390);
     glVertex2f(355,425);
    glVertex2f(365,428);

     glColor3f(0,1,0);
     glVertex2f(380,390);
     glVertex2f(390,420);
    glVertex2f(395,405);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 522
       glColor3f(0.76,0.60,0.33);
    glVertex2f(400,450);
    glVertex2f(410,455);
    glVertex2f(405,490);

      glColor3f(0,1,0);
    glVertex2f(405,490);
    glVertex2f(375,505);
    glVertex2f(375,495);

     glColor3f(0,1,0);
     glVertex2f(405,490);
     glVertex2f(380,525);
    glVertex2f(395,528);

     glColor3f(0,1,0);
     glVertex2f(405,490);
     glVertex2f(415,520);
    glVertex2f(420,505);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 533
       glColor3f(0.76,0.60,0.33);
    glVertex2f(425,550);
    glVertex2f(435,555);
    glVertex2f(430,590);

      glColor3f(0,1,0);
    glVertex2f(430,590);
    glVertex2f(400,605);
    glVertex2f(400,595);

     glColor3f(0,1,0);
     glVertex2f(430,590);
     glVertex2f(405,625);
    glVertex2f(415,628);

     glColor3f(0,1,0);
     glVertex2f(430,590);
     glVertex2f(440,620);
    glVertex2f(445,605);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 61
       glColor3f(0.76,0.60,0.33);
    glVertex2f(475,350);
    glVertex2f(485,355);
    glVertex2f(480,390);

      glColor3f(0,1,0);
    glVertex2f(480,390);
    glVertex2f(450,405);
    glVertex2f(450,395);

     glColor3f(0,1,0);
     glVertex2f(480,390);
     glVertex2f(455,425);
    glVertex2f(465,428);

     glColor3f(0,1,0);
     glVertex2f(480,390);
     glVertex2f(490,420);
    glVertex2f(495,405);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 62
       glColor3f(0.76,0.60,0.33);
    glVertex2f(500,450);
    glVertex2f(510,455);
    glVertex2f(505,490);

      glColor3f(0,1,0);
    glVertex2f(505,490);
    glVertex2f(475,505);
    glVertex2f(475,495);

     glColor3f(0,1,0);
     glVertex2f(505,490);
     glVertex2f(480,525);
    glVertex2f(495,528);

     glColor3f(0,1,0);
     glVertex2f(505,490);
     glVertex2f(515,520);
    glVertex2f(520,505);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 63
       glColor3f(0.76,0.60,0.33);
    glVertex2f(525,550);
    glVertex2f(535,555);
    glVertex2f(530,590);

      glColor3f(0,1,0);
    glVertex2f(530,590);
    glVertex2f(500,605);
    glVertex2f(500,595);

     glColor3f(0,1,0);
     glVertex2f(530,590);
     glVertex2f(505,625);
    glVertex2f(515,628);

     glColor3f(0,1,0);
     glVertex2f(530,590);
     glVertex2f(540,620);
    glVertex2f(545,605);
   glEnd();

     glBegin(GL_TRIANGLES);//plant611
       glColor3f(0.76,0.60,0.33);
    glVertex2f(575,350);
    glVertex2f(585,355);
    glVertex2f(580,390);

      glColor3f(0,1,0);
    glVertex2f(580,390);
    glVertex2f(550,405);
    glVertex2f(550,395);

     glColor3f(0,1,0);
     glVertex2f(580,390);
     glVertex2f(555,425);
    glVertex2f(565,428);

     glColor3f(0,1,0);
     glVertex2f(580,390);
     glVertex2f(590,420);
    glVertex2f(595,405);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 622
       glColor3f(0.76,0.60,0.33);
    glVertex2f(600,450);
    glVertex2f(610,455);
    glVertex2f(605,490);

      glColor3f(0,1,0);
    glVertex2f(605,490);
    glVertex2f(575,505);
    glVertex2f(575,495);

     glColor3f(0,1,0);
     glVertex2f(605,490);
     glVertex2f(580,525);
    glVertex2f(590,528);

     glColor3f(0,1,0);
     glVertex2f(605,490);
     glVertex2f(615,520);
    glVertex2f(620,505);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 633
       glColor3f(0.76,0.60,0.33);
    glVertex2f(625,550);
    glVertex2f(635,555);
    glVertex2f(630,590);

      glColor3f(0,1,0);
    glVertex2f(630,590);
    glVertex2f(600,605);
    glVertex2f(600,595);

     glColor3f(0,1,0);
     glVertex2f(630,590);
     glVertex2f(605,625);
    glVertex2f(615,628);

     glColor3f(0,1,0);
     glVertex2f(630,590);
     glVertex2f(640,620);
    glVertex2f(645,605);
    glEnd();

    glBegin(GL_TRIANGLES);//plant11
       glColor3f(0.76,0.60,0.33);
    glVertex2f(0,50);
    glVertex2f(05,55);
    glVertex2f(00,90);

      glColor3f(0,1,0);
    glVertex2f(00,90);
    glVertex2f(0,105);
    glVertex2f(0,95);

     glColor3f(0,1,0);
     glVertex2f(00,90);
     glVertex2f(5,125);
    glVertex2f(5,128);

     glColor3f(0,1,0);
     glVertex2f(00,90);
     glVertex2f(10,120);
    glVertex2f(15,105);
    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(20,150);
    glVertex2f(30,155);
    glVertex2f(25,190);

      glColor3f(0,1,0);
    glVertex2f(25,190);
    glVertex2f(5,205);
    glVertex2f(5,195);

     glColor3f(0,1,0);
     glVertex2f(25,190);
     glVertex2f(00,225);
    glVertex2f(10,228);

     glColor3f(0,1,0);
     glVertex2f(25,190);
     glVertex2f(35,220);
    glVertex2f(40,205);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 13
       glColor3f(0.76,0.60,0.33);
    glVertex2f(45,250);
    glVertex2f(55,255);
    glVertex2f(50,290);

      glColor3f(0,1,0);
    glVertex2f(50,290);
    glVertex2f(20,305);
    glVertex2f(20,295);

     glColor3f(0,1,0);
     glVertex2f(50,290);
     glVertex2f(25,325);
    glVertex2f(35,328);

     glColor3f(0,1,0);
     glVertex2f(50,290);
     glVertex2f(60,320);
    glVertex2f(65,305);
    glEnd();

    glBegin(GL_TRIANGLES);//plant111
       glColor3f(0.76,0.60,0.33);
    glVertex2f(95,50);
    glVertex2f(105,55);
    glVertex2f(100,90);

      glColor3f(0,1,0);
    glVertex2f(100,90);
    glVertex2f(70,105);
    glVertex2f(70,95);

     glColor3f(0,1,0);
     glVertex2f(100,90);
     glVertex2f(75,125);
    glVertex2f(95,128);

     glColor3f(0,1,0);
     glVertex2f(100,90);
     glVertex2f(110,120);
    glVertex2f(115,105);
    glEnd();

     glBegin(GL_TRIANGLES);//plant122
       glColor3f(0.76,0.60,0.33);
    glVertex2f(120,150);
    glVertex2f(130,155);
    glVertex2f(125,190);

      glColor3f(0,1,0);
    glVertex2f(125,190);
    glVertex2f(95,205);
    glVertex2f(95,195);

     glColor3f(0,1,0);
     glVertex2f(125,190);
     glVertex2f(100,225);
    glVertex2f(110,228);

     glColor3f(0,1,0);
     glVertex2f(125,190);
     glVertex2f(135,220);
    glVertex2f(140,205);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 133
       glColor3f(0.76,0.60,0.33);
    glVertex2f(145,250);
    glVertex2f(155,255);
    glVertex2f(150,290);

      glColor3f(0,1,0);
    glVertex2f(150,290);
    glVertex2f(120,305);
    glVertex2f(120,295);

     glColor3f(0,1,0);
     glVertex2f(150,290);
     glVertex2f(125,325);
    glVertex2f(135,328);

     glColor3f(0,1,0);
     glVertex2f(150,290);
     glVertex2f(160,320);
    glVertex2f(165,305);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 21
       glColor3f(0.76,0.60,0.33);
    glVertex2f(195,50);
    glVertex2f(205,55);
    glVertex2f(200,90);

      glColor3f(0,1,0);
    glVertex2f(200,90);
    glVertex2f(170,105);
    glVertex2f(170,95);

     glColor3f(0,1,0);
     glVertex2f(200,90);
     glVertex2f(175,125);
    glVertex2f(195,128);

     glColor3f(0,1,0);
     glVertex2f(200,90);
     glVertex2f(210,120);
    glVertex2f(215,105);
    glEnd();

     glBegin(GL_TRIANGLES);//plant 22
       glColor3f(0.76,0.60,0.33);
    glVertex2f(220,150);
    glVertex2f(230,155);
    glVertex2f(225,190);

      glColor3f(0,1,0);
    glVertex2f(225,190);
    glVertex2f(195,205);
    glVertex2f(195,195);

     glColor3f(0,1,0);
     glVertex2f(225,190);
     glVertex2f(200,225);
    glVertex2f(210,228);

     glColor3f(0,1,0);
     glVertex2f(225,190);
     glVertex2f(235,220);
    glVertex2f(240,205);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 23
       glColor3f(0.76,0.60,0.33);
    glVertex2f(245,250);
    glVertex2f(255,255);
    glVertex2f(250,290);

      glColor3f(0,1,0);
    glVertex2f(250,290);
    glVertex2f(220,305);
    glVertex2f(220,295);

     glColor3f(0,1,0);
     glVertex2f(250,290);
     glVertex2f(225,325);
    glVertex2f(235,328);

     glColor3f(0,1,0);
     glVertex2f(250,290);
     glVertex2f(260,320);
    glVertex2f(265,305);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 211
       glColor3f(0.76,0.60,0.33);
    glVertex2f(295,50);
    glVertex2f(305,55);
    glVertex2f(300,90);

      glColor3f(0,1,0);
    glVertex2f(300,90);
    glVertex2f(270,105);
    glVertex2f(270,95);

     glColor3f(0,1,0);
     glVertex2f(300,90);
     glVertex2f(275,125);
    glVertex2f(295,128);

     glColor3f(0,1,0);
     glVertex2f(300,90);
     glVertex2f(310,120);
    glVertex2f(315,105);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 222
       glColor3f(0.76,0.60,0.33);
    glVertex2f(320,150);
    glVertex2f(330,155);
    glVertex2f(325,190);

      glColor3f(0,1,0);
    glVertex2f(325,190);
    glVertex2f(295,205);
    glVertex2f(295,195);

     glColor3f(0,1,0);
     glVertex2f(325,190);
     glVertex2f(300,225);
    glVertex2f(310,228);

     glColor3f(0,1,0);
     glVertex2f(325,190);
     glVertex2f(335,220);
    glVertex2f(340,205);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 233
       glColor3f(0.76,0.60,0.33);
    glVertex2f(345,250);
    glVertex2f(355,255);
    glVertex2f(350,290);

      glColor3f(0,1,0);
    glVertex2f(350,290);
    glVertex2f(320,305);
    glVertex2f(320,295);

     glColor3f(0,1,0);
     glVertex2f(350,290);
     glVertex2f(325,325);
    glVertex2f(335,328);

     glColor3f(0,1,0);
     glVertex2f(350,290);
     glVertex2f(360,320);
    glVertex2f(365,305);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 31
       glColor3f(0.76,0.60,0.33);
    glVertex2f(395,50);
    glVertex2f(405,55);
    glVertex2f(400,90);

      glColor3f(0,1,0);
    glVertex2f(400,90);
    glVertex2f(370,105);
    glVertex2f(370,95);

     glColor3f(0,1,0);
     glVertex2f(400,90);
     glVertex2f(375,125);
    glVertex2f(395,128);

     glColor3f(0,1,0);
     glVertex2f(400,90);
     glVertex2f(410,120);
    glVertex2f(415,105);
    glEnd();

     glBegin(GL_TRIANGLES);//plant 32
       glColor3f(0.76,0.60,0.33);
    glVertex2f(420,150);
    glVertex2f(430,155);
    glVertex2f(425,190);

      glColor3f(0,1,0);
    glVertex2f(425,190);
    glVertex2f(395,205);
    glVertex2f(395,195);

     glColor3f(0,1,0);
     glVertex2f(425,190);
     glVertex2f(400,225);
    glVertex2f(410,228);

     glColor3f(0,1,0);
     glVertex2f(425,190);
     glVertex2f(435,220);
    glVertex2f(440,205);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 33
       glColor3f(0.76,0.60,0.33);
    glVertex2f(445,250);
    glVertex2f(455,255);
    glVertex2f(450,290);

      glColor3f(0,1,0);
    glVertex2f(450,290);
    glVertex2f(420,305);
    glVertex2f(420,295);

     glColor3f(0,1,0);
     glVertex2f(450,290);
     glVertex2f(425,325);
    glVertex2f(435,328);

     glColor3f(0,1,0);
     glVertex2f(450,290);
     glVertex2f(460,320);
    glVertex2f(465,305);
    glEnd();

    glBegin(GL_TRIANGLES);//plant 311
       glColor3f(0.76,0.60,0.33);
    glVertex2f(495,50);
    glVertex2f(505,55);
    glVertex2f(500,90);

      glColor3f(0,1,0);
    glVertex2f(500,90);
    glVertex2f(470,105);
    glVertex2f(470,95);

     glColor3f(0,1,0);
     glVertex2f(500,90);
     glVertex2f(475,125);
    glVertex2f(495,128);

     glColor3f(0,1,0);
     glVertex2f(500,90);
     glVertex2f(510,120);
    glVertex2f(515,105);
    glEnd();

     glBegin(GL_TRIANGLES);//plant 322
       glColor3f(0.76,0.60,0.33);
    glVertex2f(520,150);
    glVertex2f(530,155);
    glVertex2f(525,190);

      glColor3f(0,1,0);
    glVertex2f(525,190);
    glVertex2f(495,205);
    glVertex2f(495,195);

     glColor3f(0,1,0);
     glVertex2f(525,190);
     glVertex2f(500,225);
    glVertex2f(510,228);

     glColor3f(0,1,0);
     glVertex2f(525,190);
     glVertex2f(535,220);
    glVertex2f(540,205);
    glEnd();

     glBegin(GL_TRIANGLES);//plant 333
       glColor3f(0.76,0.60,0.33);
    glVertex2f(545,250);
    glVertex2f(555,255);
    glVertex2f(550,290);

      glColor3f(0,1,0);
    glVertex2f(550,290);
    glVertex2f(520,305);
    glVertex2f(520,295);

     glColor3f(0,1,0);
     glVertex2f(550,290);
     glVertex2f(525,325);
    glVertex2f(535,328);

     glColor3f(0,1,0);
     glVertex2f(550,290);
     glVertex2f(560,320);
    glVertex2f(565,305);
    glEnd();
}

void farm()
{

	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	 glColor3f(0.72,0.51,0.24);
	glVertex2f(520,0);
	glColor3f(0.72,0.51,0.24);
	glVertex2f(900,0);
	glColor3f(.70,58,.00);
	glColor3f(0.47,0.33,0.16);
	glVertex2f(900,650);

	glColor3f(0.47,0.33,0.16);
	glVertex2f(700,650);
	glEnd();

}
void mainpipe()
{
    //glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
   glColor3f(0.26,0.25,0.26);
    glVertex2f(644,330);
     glVertex2f(644,345);
      glVertex2f(103,345);
       glVertex2f(100,330);
    glEnd();
    glBegin(GL_POLYGON);
   glColor3f(0.26,0.25,0.26);
    glVertex2f(635,330);
     glVertex2f(644,330);
      glVertex2f(644,400);
       glVertex2f(635,400);
    glEnd();
    glBegin(GL_POLYGON);
   glColor3f(0.26,0.25,0.26);
    glVertex2f(635,384);
     glVertex2f(675,384);
      glVertex2f(675,400);
       glVertex2f(635,400);
    glEnd();
}

void p1()
{//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glBegin(GL_POLYGON);

      glColor3f(0.26,0.25,0.26);
     glVertex2f(435,50);
      glVertex2f(445,50);
       glVertex2f(585,600);
        glVertex2f(575,600);

     glEnd();
}
void p2()
{
    //glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(230,50);
      glVertex2f(240,50);
       glVertex2f(390,600);
        glVertex2f(380,600);
     glEnd();
}
void p3()
{
    //glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(20,50);
      glVertex2f(30,50);
       glVertex2f(185,600);
        glVertex2f(175,600);
     glEnd();
}



void ds()
{
  glClearColor(0.1,0.0,0.0,0);
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	for(int i=0;i<900;i++)
    {
	glColor3f(0.63,0.48,0.45);
	drawstring(300,750, 0.0, "SIMULATION OF DRIP IRRIGATION");
	glutSwapBuffers();
	glColor3f(0.79,1.0,0.9);
	drawstring(90,650,0.0,"Drip irrigation is a type of micro-irrigation system that has the potential to save water and nutrients by  allowing ");
	glColor3f(0.79,1.0,0.9);
    drawstring(90,610,0.0,"water to drip slowly to the roots of plants,either from above the salt surface or buried below the surface.The goal");
    glColor3f(0.79,1.0,0.9);
    drawstring(90,570,0.0,"is to  place water  directly  into  the  root zone and minimize evaporation. Drip irrigation systems distribute water ");
    glColor3f(0.79,1.0,0.9);
    drawstring(90,530,0.0,"through a  network  of values , pipes and tubing . Depending on  how  well designed , installed , maintained and ");
    glColor3f(0.79,1.0,0.9);
    drawstring(90,490,0.0,"operated it is, a drip irrigation system can be  more  efficient than other  types of irrigation  system . This system ");
    glColor3f(0.79,1.0,0.9);
    drawstring(90,450,0.0,"can help reduce  evaporation and runoff, and contribute to water conversation . This system can produce higher ");
    glColor3f(0.79,1.0,0.9);
    drawstring(90,410,0.0,"yields while saving water as well as fertilizers,energy and even crop protection products.");
    glColor3f(0.79,1.0,0.9);
 glColor3f(0.63,0.48,0.45);
    drawstring(330,290,0.0,"PRESS 't' TO CONTINUE");

    }
}






void pp11()
{
    glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(415,50);
      glVertex2f(470,50);
       glVertex2f(470,60);
        glVertex2f(415,60);
     glEnd();
     glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(445,155);
      glVertex2f(500,155);
       glVertex2f(500,165);
        glVertex2f(445,165);
     glEnd();
     glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(475,260);
      glVertex2f(530,260);
       glVertex2f(530,270);
        glVertex2f(475,270);
     glEnd();
     glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(500,365);
      glVertex2f(550,365);
       glVertex2f(550,375);
        glVertex2f(500,375);
     glEnd();
      glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(525,470);
      glVertex2f(575,470);
       glVertex2f(575,480);
        glVertex2f(525,480);
     glEnd();
       glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(550,575);
      glVertex2f(600,575);
       glVertex2f(600,585);
        glVertex2f(550,585);
     glEnd();
}

void pp21()
{
    glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(215,50);
      glVertex2f(260,50);
       glVertex2f(260,60);
        glVertex2f(215,60);
     glEnd();
     glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(240,155);
      glVertex2f(290,155);
       glVertex2f(290,165);
        glVertex2f(240,165);
     glEnd();
     glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(270,260);
      glVertex2f(320,260);
       glVertex2f(320,270);
        glVertex2f(270,270);
     glEnd();
      glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(300,365);
      glVertex2f(350,365);
       glVertex2f(350,375);
        glVertex2f(300,375);
     glEnd();
     glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(325,470);
      glVertex2f(375,470);
       glVertex2f(375,480);
        glVertex2f(325,480);
     glEnd();
      glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(355,575);
      glVertex2f(405,575);
       glVertex2f(405,585);
        glVertex2f(355,585);
     glEnd();
}

void pp31()
{
    glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(10,50);
      glVertex2f(55,50);
       glVertex2f(55,60);
        glVertex2f(10,60);
     glEnd();
       glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(35,155);
      glVertex2f(85,155);
       glVertex2f(85,165);
        glVertex2f(35,165);
     glEnd();
      glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(65,260);
      glVertex2f(115,260);
       glVertex2f(115,270);
        glVertex2f(65,270);
     glEnd();
     glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(95,365);
      glVertex2f(145,365);
       glVertex2f(145,375);
        glVertex2f(95,375);
     glEnd();
     glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(122,470);
      glVertex2f(175,470);
       glVertex2f(175,480);
        glVertex2f(122,480);
     glEnd();
      glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(151,575);
      glVertex2f(205,575);
       glVertex2f(205,585);
        glVertex2f(151,585);
     glEnd();
}



void drop1()
{

     glColor3f(0.68,0.60,0.66);
    glPointSize(2.5);
    glBegin(GL_POINTS);
    glVertex2f(412,55);
    glVertex2f(442,160);
    glVertex2f(472,265);
     glVertex2f(496,370);
      glVertex2f(522,474);
      glVertex2f(547,580);

      glVertex2f(475,56);
    glVertex2f(503,160);
    glVertex2f(533,265);
     glVertex2f(553,370);
      glVertex2f(578,475);
      glVertex2f(603,580);
    glEnd();


     glColor3f(0.68,0.60,0.66);
    glPointSize(2.5);
    glBegin(GL_POINTS);
    glVertex2f(212,54);
    glVertex2f(237,159);
     glVertex2f(267,267);
    glVertex2f(297,371);

   glVertex2f(323,475);
    glVertex2f(351,582);
    glEnd();



     glColor3f(0.68,0.60,0.66);
    glPointSize(2.5);
    glBegin(GL_POINTS);
    glVertex2f(263,56);
    glVertex2f(293,162);
    glVertex2f(323,266);
    glVertex2f(353,370);

    glVertex2f(378,472);
     glVertex2f(408,579);
    glEnd();

      glColor3f(0.68,0.60,0.66);
    glPointSize(2.5);
    glBegin(GL_POINTS);
    glVertex2f(7,52);
    glVertex2f(32,157);
   glVertex2f(63,262);
       glVertex2f(92,367);
     glVertex2f(118,473);

      glVertex2f(147,577);
      glEnd();


      glColor3f(0.68,0.60,0.66);
    glPointSize(2.5);
         glBegin(GL_POINTS);
    glVertex2f(58,54);
    glVertex2f(88,162);
   glVertex2f(120,266);
        glVertex2f(148,371);
     glVertex2f(178,476);

      glVertex2f(208,582);
      glEnd();
}


void drop2()
{
   glColor3f(0.68,0.60,0.66);
    glPointSize(3.5);
    glBegin(GL_POINTS);
    glVertex2f(407,53);
    glVertex2f(437,158);
    glVertex2f(467,263);
     glVertex2f(491,365);
      glVertex2f(518,471);
      glVertex2f(543,576);


      glVertex2f(480,54);
    glVertex2f(508,157);
    glVertex2f(537,263);
     glVertex2f(558,366);
      glVertex2f(583,471);
      glVertex2f(608,576);
    glEnd();

     glColor3f(0.68,0.60,0.66);
    glPointSize(3.5);
    glBegin(GL_POINTS);
    glVertex2f(207,51);
    glVertex2f(232,156);
     glVertex2f(263,264);
    glVertex2f(292,368);

    glVertex2f(319,472);
    glVertex2f(345,578);
    glEnd();



           glColor3f(0.68,0.60,0.66);
    glPointSize(3.5);
    glBegin(GL_POINTS);
    glVertex2f(268,52);
    glVertex2f(297,158);
    glVertex2f(328,263);
    glVertex2f(358,365);

    glVertex2f(383,469);
    glVertex2f(415,575);
    glEnd();

    glColor3f(0.68,0.60,0.66);
    glPointSize(3.5);
    glBegin(GL_POINTS);
     glVertex2f(59,262);
     glVertex2f(88,367);
     glVertex2f(113,470);
      glVertex2f(142,573);
      glEnd();


       glColor3f(0.68,0.60,0.66);
    glPointSize(3.5);
        glBegin(GL_POINTS);
    glVertex2f(64,52);
    glVertex2f(93,160);
   glVertex2f(124,263);
     glVertex2f(153,368);
     glVertex2f(184,474);

      glVertex2f(213,578);
      glEnd();


}

void drop3()
{
     glColor3f(0.68,0.60,0.66);
    glPointSize(4.5);
    glBegin(GL_POINTS);
   // glVertex2f(406,49);
    //glVertex2f(436,154);
    glVertex2f(462,260);
     //glVertex2f(491,364);
      glVertex2f(515,460);
      glVertex2f(540,569);

      glVertex2f(486,50);
      glVertex2f(514,154);
      glVertex2f(543,258);
      glVertex2f(564,363);
      glVertex2f(589,468);
      glVertex2f(614,573);

    glEnd();





          glColor3f(0.68,0.60,0.66);
    glPointSize(4.5);
    glBegin(GL_POINTS);
    //glVertex2f(206,51);
   // glVertex2f(231,154);
    glVertex2f(258,260);
    glVertex2f(289,358);

    glVertex2f(314,465);
    glVertex2f(340,572);
    glEnd();
////2r




              glColor3f(0.68,0.60,0.66);
    glPointSize(4.5);
    glBegin(GL_POINTS);
    glVertex2f(275,50);
    glVertex2f(304,155);
     glVertex2f(334,260);
    glVertex2f(365,360);

    glVertex2f(389,464);
    glVertex2f(420,570);
    glEnd();




 glColor3f(0.68,0.60,0.66);
    glPointSize(4.5);
    glBegin(GL_POINTS);
     glVertex2f(138,569);
 glEnd();

 glColor3f(0.68,0.60,0.66);
    glPointSize(4.5);
        glBegin(GL_POINTS);
    glVertex2f(70,50);
    glVertex2f(100,157);
   glVertex2f(129,259);
     glVertex2f(158,365);
     glVertex2f(189,469);

      glVertex2f(218,572);
      glEnd();



       glPointSize(5.5);
        glBegin(GL_POINTS);
    glVertex2f(76,47);
    glVertex2f(107,153);
   glVertex2f(136,255);
       glVertex2f(164,361);
     glVertex2f(196,463);

      glVertex2f(223,567);
      glEnd();

}

void plantpg()
{
glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(75,350);
    glVertex2f(85,355);
    glVertex2f(80,430);

      glColor3f(0,1,0);
    glVertex2f(80,430);
    glVertex2f(50,445);
    glVertex2f(50,435);

     glColor3f(0,1,0);
     glVertex2f(80,430);
     glVertex2f(55,465);
    glVertex2f(65,468);

     glColor3f(0,1,0);
     glVertex2f(80,430);
     glVertex2f(90,460);
    glVertex2f(95,445);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(100,450);
    glVertex2f(110,455);
    glVertex2f(105,530);

      glColor3f(0,1,0);
    glVertex2f(105,530);
    glVertex2f(75,545);
    glVertex2f(75,535);

     glColor3f(0,1,0);
     glVertex2f(105,530);
     glVertex2f(80,565);
    glVertex2f(95,568);

     glColor3f(0,1,0);
     glVertex2f(105,530);
     glVertex2f(115,560);
    glVertex2f(120,545);



    glEnd();


     glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(125,550);
    glVertex2f(135,555);
    glVertex2f(130,630);

      glColor3f(0,1,0);
    glVertex2f(130,630);
    glVertex2f(100,645);
    glVertex2f(100,635);

     glColor3f(0,1,0);
     glVertex2f(130,630);
     glVertex2f(105,665);
    glVertex2f(115,668);

     glColor3f(0,1,0);
     glVertex2f(130,630);
     glVertex2f(140,660);
    glVertex2f(145,645);



    glEnd();
glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(175,350);
    glVertex2f(185,355);
    glVertex2f(180,430);

      glColor3f(0,1,0);
    glVertex2f(180,430);
    glVertex2f(150,445);
    glVertex2f(150,435);

     glColor3f(0,1,0);
     glVertex2f(180,430);
     glVertex2f(155,465);
    glVertex2f(165,468);

     glColor3f(0,1,0);
     glVertex2f(180,430);
     glVertex2f(190,460);
    glVertex2f(195,445);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(200,450);
    glVertex2f(210,455);
    glVertex2f(205,530);

      glColor3f(0,1,0);
    glVertex2f(205,530);
    glVertex2f(175,545);
    glVertex2f(175,535);

     glColor3f(0,1,0);
     glVertex2f(205,530);
     glVertex2f(180,565);
    glVertex2f(195,568);

     glColor3f(0,1,0);
     glVertex2f(205,530);
     glVertex2f(215,560);
    glVertex2f(220,545);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(225,550);
    glVertex2f(235,555);
    glVertex2f(230,630);

      glColor3f(0,1,0);
    glVertex2f(230,630);
    glVertex2f(200,645);
    glVertex2f(200,635);

     glColor3f(0,1,0);
     glVertex2f(230,630);
     glVertex2f(205,665);
    glVertex2f(215,668);

     glColor3f(0,1,0);
     glVertex2f(230,630);
     glVertex2f(240,660);
    glVertex2f(245,645);



    glEnd();
glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(275,350);
    glVertex2f(285,355);
    glVertex2f(280,430);

      glColor3f(0,1,0);
    glVertex2f(280,430);
    glVertex2f(250,445);
    glVertex2f(250,435);

     glColor3f(0,1,0);
     glVertex2f(280,430);
     glVertex2f(255,465);
    glVertex2f(265,468);

     glColor3f(0,1,0);
     glVertex2f(280,430);
     glVertex2f(290,460);
    glVertex2f(295,445);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(300,450);
    glVertex2f(310,455);
    glVertex2f(305,530);

      glColor3f(0,1,0);
    glVertex2f(305,530);
    glVertex2f(275,545);
    glVertex2f(275,535);

     glColor3f(0,1,0);
     glVertex2f(305,530);
     glVertex2f(280,565);
    glVertex2f(295,568);

     glColor3f(0,1,0);
     glVertex2f(305,530);
     glVertex2f(315,560);
    glVertex2f(320,545);



    glEnd();

     glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(325,550);
    glVertex2f(335,555);
    glVertex2f(330,630);

      glColor3f(0,1,0);
    glVertex2f(330,630);
    glVertex2f(300,645);
    glVertex2f(300,635);

     glColor3f(0,1,0);
     glVertex2f(330,630);
     glVertex2f(305,665);
    glVertex2f(315,668);

     glColor3f(0,1,0);
     glVertex2f(330,630);
     glVertex2f(340,660);
    glVertex2f(345,645);



    glEnd();
 glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(375,350);
    glVertex2f(385,355);
    glVertex2f(380,430);

      glColor3f(0,1,0);
    glVertex2f(380,430);
    glVertex2f(350,445);
    glVertex2f(350,435);

     glColor3f(0,1,0);
     glVertex2f(380,430);
     glVertex2f(355,465);
    glVertex2f(365,468);

     glColor3f(0,1,0);
     glVertex2f(380,430);
     glVertex2f(390,460);
    glVertex2f(395,445);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(400,450);
    glVertex2f(410,455);
    glVertex2f(405,530);

      glColor3f(0,1,0);
    glVertex2f(405,530);
    glVertex2f(375,545);
    glVertex2f(375,535);

     glColor3f(0,1,0);
     glVertex2f(405,530);
     glVertex2f(380,565);
    glVertex2f(395,568);

     glColor3f(0,1,0);
     glVertex2f(405,530);
     glVertex2f(415,560);
    glVertex2f(420,545);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(425,550);
    glVertex2f(435,555);
    glVertex2f(430,630);

      glColor3f(0,1,0);
    glVertex2f(430,630);
    glVertex2f(400,645);
    glVertex2f(400,635);

     glColor3f(0,1,0);
     glVertex2f(430,630);
     glVertex2f(405,665);
    glVertex2f(415,668);

     glColor3f(0,1,0);
     glVertex2f(430,630);
     glVertex2f(440,660);
    glVertex2f(445,645);



    glEnd();
 glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(475,350);
    glVertex2f(485,355);
    glVertex2f(480,430);

      glColor3f(0,1,0);
    glVertex2f(480,430);
    glVertex2f(450,445);
    glVertex2f(450,435);

     glColor3f(0,1,0);
     glVertex2f(480,430);
     glVertex2f(455,465);
    glVertex2f(465,468);

     glColor3f(0,1,0);
     glVertex2f(480,430);
     glVertex2f(490,460);
    glVertex2f(495,445);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(500,450);
    glVertex2f(510,455);
    glVertex2f(505,530);

      glColor3f(0,1,0);
    glVertex2f(505,530);
    glVertex2f(475,545);
    glVertex2f(475,535);

     glColor3f(0,1,0);
     glVertex2f(505,530);
     glVertex2f(480,565);
    glVertex2f(495,568);

     glColor3f(0,1,0);
     glVertex2f(505,530);
     glVertex2f(515,560);
    glVertex2f(520,545);



    glEnd();

     glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(525,550);
    glVertex2f(535,555);
    glVertex2f(530,630);

      glColor3f(0,1,0);
    glVertex2f(530,630);
    glVertex2f(500,645);
    glVertex2f(500,635);

     glColor3f(0,1,0);
     glVertex2f(530,630);
     glVertex2f(505,665);
    glVertex2f(515,668);

     glColor3f(0,1,0);
     glVertex2f(530,630);
     glVertex2f(540,660);
    glVertex2f(545,645);



    glEnd();
     glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(575,350);
    glVertex2f(585,355);
    glVertex2f(580,430);

      glColor3f(0,1,0);
    glVertex2f(580,430);
    glVertex2f(550,445);
    glVertex2f(550,435);

     glColor3f(0,1,0);
     glVertex2f(580,430);
     glVertex2f(555,465);
    glVertex2f(565,468);

     glColor3f(0,1,0);
     glVertex2f(580,430);
     glVertex2f(590,460);
    glVertex2f(595,445);



    glEnd();////

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(600,450);
    glVertex2f(610,455);
    glVertex2f(605,530);

      glColor3f(0,1,0);
    glVertex2f(605,530);
    glVertex2f(575,545);
    glVertex2f(575,535);

     glColor3f(0,1,0);
     glVertex2f(605,530);
     glVertex2f(580,565);
    glVertex2f(590,568);

     glColor3f(0,1,0);
     glVertex2f(605,530);
     glVertex2f(615,560);
    glVertex2f(620,545);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(625,550);
    glVertex2f(635,555);
    glVertex2f(630,630);

      glColor3f(0,1,0);
    glVertex2f(630,630);
    glVertex2f(600,645);
    glVertex2f(600,635);

     glColor3f(0,1,0);
     glVertex2f(630,630);
     glVertex2f(605,665);
    glVertex2f(615,668);

     glColor3f(0,1,0);
     glVertex2f(630,630);
     glVertex2f(640,660);
    glVertex2f(645,645);



    glEnd();////////////////////////

  glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(0,50);
    glVertex2f(05,55);
    glVertex2f(00,130);

      glColor3f(0,1,0);
    glVertex2f(00,130);
    glVertex2f(0,145);
    glVertex2f(0,135);

     glColor3f(0,1,0);
     glVertex2f(00,130);
     glVertex2f(5,165);
    glVertex2f(5,168);

     glColor3f(0,1,0);
     glVertex2f(00,130);
     glVertex2f(10,160);
    glVertex2f(15,145);



    glEnd();//1

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(20,150);
    glVertex2f(30,155);
    glVertex2f(25,230);

      glColor3f(0,1,0);
    glVertex2f(25,230);
    glVertex2f(5,245);
    glVertex2f(5,235);

     glColor3f(0,1,0);
     glVertex2f(25,230);
     glVertex2f(00,265);
    glVertex2f(10,268);

     glColor3f(0,1,0);
     glVertex2f(25,230);
     glVertex2f(35,260);
    glVertex2f(40,245);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(45,250);
    glVertex2f(55,255);
    glVertex2f(50,330);

      glColor3f(0,1,0);
    glVertex2f(50,330);
    glVertex2f(20,345);
    glVertex2f(20,335);

     glColor3f(0,1,0);
     glVertex2f(50,330);
     glVertex2f(25,365);
    glVertex2f(35,368);

     glColor3f(0,1,0);
     glVertex2f(50,330);
     glVertex2f(60,360);
    glVertex2f(65,345);



    glEnd();//2

  glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(95,50);
    glVertex2f(105,55);
    glVertex2f(100,130);

      glColor3f(0,1,0);
    glVertex2f(100,130);
    glVertex2f(70,145);
    glVertex2f(70,135);

     glColor3f(0,1,0);
     glVertex2f(100,130);
     glVertex2f(75,165);
    glVertex2f(95,168);

     glColor3f(0,1,0);
     glVertex2f(100,130);
     glVertex2f(110,160);
    glVertex2f(115,145);



    glEnd();//3

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(120,150);
    glVertex2f(130,155);
    glVertex2f(125,230);

      glColor3f(0,1,0);
    glVertex2f(125,230);
    glVertex2f(95,245);
    glVertex2f(95,235);

     glColor3f(0,1,0);
     glVertex2f(125,230);
     glVertex2f(100,265);
    glVertex2f(110,268);

     glColor3f(0,1,0);
     glVertex2f(125,230);
     glVertex2f(135,260);
    glVertex2f(140,245);



    glEnd();

     glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(145,250);
    glVertex2f(155,255);
    glVertex2f(150,330);

      glColor3f(0,1,0);
    glVertex2f(150,330);
    glVertex2f(120,345);
    glVertex2f(120,335);

     glColor3f(0,1,0);
     glVertex2f(150,330);
     glVertex2f(125,365);
    glVertex2f(135,368);

     glColor3f(0,1,0);
     glVertex2f(150,330);
     glVertex2f(160,360);
    glVertex2f(165,345);



    glEnd();//4

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(195,50);
    glVertex2f(205,55);
    glVertex2f(200,130);

      glColor3f(0,1,0);
    glVertex2f(200,130);
    glVertex2f(170,145);
    glVertex2f(170,135);

     glColor3f(0,1,0);
     glVertex2f(200,130);
     glVertex2f(175,165);
    glVertex2f(195,168);

     glColor3f(0,1,0);
     glVertex2f(200,130);
     glVertex2f(210,160);
    glVertex2f(215,145);



    glEnd();

     glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(220,150);
    glVertex2f(230,155);
    glVertex2f(225,230);

      glColor3f(0,1,0);
    glVertex2f(225,230);
    glVertex2f(195,245);
    glVertex2f(195,235);

     glColor3f(0,1,0);
     glVertex2f(225,230);
     glVertex2f(200,265);
    glVertex2f(210,268);

     glColor3f(0,1,0);
     glVertex2f(225,230);
     glVertex2f(235,260);
    glVertex2f(240,245);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(245,250);
    glVertex2f(255,255);
    glVertex2f(250,330);

      glColor3f(0,1,0);
    glVertex2f(250,330);
    glVertex2f(220,345);
    glVertex2f(220,335);

     glColor3f(0,1,0);
     glVertex2f(250,330);
     glVertex2f(225,365);
    glVertex2f(235,368);

     glColor3f(0,1,0);
     glVertex2f(250,330);
     glVertex2f(260,360);
    glVertex2f(265,345);



    glEnd();


   glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(295,50);
    glVertex2f(305,55);
    glVertex2f(300,130);

      glColor3f(0,1,0);
    glVertex2f(300,130);
    glVertex2f(270,145);
    glVertex2f(270,135);

     glColor3f(0,1,0);
     glVertex2f(300,130);
     glVertex2f(275,165);
    glVertex2f(295,168);

     glColor3f(0,1,0);
     glVertex2f(300,130);
     glVertex2f(310,160);
    glVertex2f(315,145);



    glEnd();

     glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(320,150);
    glVertex2f(330,155);
    glVertex2f(325,230);

      glColor3f(0,1,0);
    glVertex2f(325,230);
    glVertex2f(295,245);
    glVertex2f(295,235);

     glColor3f(0,1,0);
     glVertex2f(325,230);
     glVertex2f(300,265);
    glVertex2f(310,268);

     glColor3f(0,1,0);
     glVertex2f(325,230);
     glVertex2f(335,260);
    glVertex2f(340,245);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(345,250);
    glVertex2f(355,255);
    glVertex2f(350,330);

      glColor3f(0,1,0);
    glVertex2f(350,330);
    glVertex2f(320,345);
    glVertex2f(320,335);

     glColor3f(0,1,0);
     glVertex2f(350,330);
     glVertex2f(325,365);
    glVertex2f(335,368);

     glColor3f(0,1,0);
     glVertex2f(350,330);
     glVertex2f(360,360);
    glVertex2f(365,345);



    glEnd();
  glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(395,50);
    glVertex2f(405,55);
    glVertex2f(400,130);

      glColor3f(0,1,0);
    glVertex2f(400,130);
    glVertex2f(370,145);
    glVertex2f(370,135);

     glColor3f(0,1,0);
     glVertex2f(400,130);
     glVertex2f(375,165);
    glVertex2f(395,168);

     glColor3f(0,1,0);
     glVertex2f(400,130);
     glVertex2f(410,160);
    glVertex2f(415,145);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(420,150);
    glVertex2f(430,155);
    glVertex2f(425,230);

      glColor3f(0,1,0);
    glVertex2f(425,230);
    glVertex2f(395,245);
    glVertex2f(395,235);

     glColor3f(0,1,0);
     glVertex2f(425,230);
     glVertex2f(400,265);
    glVertex2f(410,268);

     glColor3f(0,1,0);
     glVertex2f(425,230);
     glVertex2f(435,260);
    glVertex2f(440,245);



    glEnd();
    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(445,250);
    glVertex2f(455,255);
    glVertex2f(450,330);

      glColor3f(0,1,0);
    glVertex2f(450,330);
    glVertex2f(420,345);
    glVertex2f(420,335);

     glColor3f(0,1,0);
     glVertex2f(450,330);
     glVertex2f(425,365);
    glVertex2f(435,368);

     glColor3f(0,1,0);
     glVertex2f(450,330);
     glVertex2f(460,360);
    glVertex2f(465,345);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(495,50);
    glVertex2f(505,55);
    glVertex2f(500,130);

      glColor3f(0,1,0);
    glVertex2f(500,130);
    glVertex2f(470,145);
    glVertex2f(470,135);

     glColor3f(0,1,0);
     glVertex2f(500,130);
     glVertex2f(475,165);
    glVertex2f(495,168);

     glColor3f(0,1,0);
     glVertex2f(500,130);
     glVertex2f(510,160);
    glVertex2f(515,145);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(520,150);
    glVertex2f(530,155);
    glVertex2f(525,230);

      glColor3f(0,1,0);
    glVertex2f(525,230);
    glVertex2f(495,245);
    glVertex2f(495,235);

     glColor3f(0,1,0);
     glVertex2f(525,230);
     glVertex2f(500,265);
    glVertex2f(510,268);

     glColor3f(0,1,0);
     glVertex2f(525,230);
     glVertex2f(535,260);
    glVertex2f(540,245);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(545,250);
    glVertex2f(555,255);
    glVertex2f(550,330);

      glColor3f(0,1,0);
    glVertex2f(550,330);
    glVertex2f(520,345);
    glVertex2f(520,335);

     glColor3f(0,1,0);
     glVertex2f(550,330);
     glVertex2f(525,365);
    glVertex2f(535,368);

     glColor3f(0,1,0);
     glVertex2f(550,330);
     glVertex2f(560,360);
    glVertex2f(565,345);



    glEnd();
}


void delaypipe()
{

 glutSwapBuffers();
 usleep(500000);
p1();
   glutSwapBuffers();
 usleep(550000);
p2();
  glutSwapBuffers();
 usleep(600000);
p3();
  glutSwapBuffers();
 usleep(600000);
 pp11();
glutSwapBuffers();
 usleep(650000);
 pp21();
 glutSwapBuffers();
 usleep(700000);
pp31();
glutSwapBuffers();
 usleep(750000);
 drop1();
 glutSwapBuffers();
 usleep(800000);
  drop2();
   glutSwapBuffers();
 usleep(800000);
 drop3();

}
void compplant()
{
glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(75,350);
    glVertex2f(85,355);
    glVertex2f(80,430);

      glColor3f(0,1,0);
    glVertex2f(80,430);
    glVertex2f(50,445);
    glVertex2f(50,435);

     glColor3f(0,1,0);
     glVertex2f(80,430);
     glVertex2f(55,465);
    glVertex2f(65,468);

     glColor3f(0,1,0);
     glVertex2f(80,430);
     glVertex2f(90,460);
    glVertex2f(95,445);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(100,450);
    glVertex2f(110,455);
    glVertex2f(105,530);

      glColor3f(0,1,0);
    glVertex2f(105,530);
    glVertex2f(75,545);
    glVertex2f(75,535);

     glColor3f(0,1,0);
     glVertex2f(105,530);
     glVertex2f(80,565);
    glVertex2f(95,568);

     glColor3f(0,1,0);
     glVertex2f(105,530);
     glVertex2f(115,560);
    glVertex2f(120,545);



    glEnd();


     glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(125,550);
    glVertex2f(135,555);
    glVertex2f(130,630);

      glColor3f(0,1,0);
    glVertex2f(130,630);
    glVertex2f(100,645);
    glVertex2f(100,635);

     glColor3f(0,1,0);
     glVertex2f(130,630);
     glVertex2f(105,665);
    glVertex2f(115,668);

     glColor3f(0,1,0);
     glVertex2f(130,630);
     glVertex2f(140,660);
    glVertex2f(145,645);



    glEnd();




    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(175,350);
    glVertex2f(185,355);
    glVertex2f(180,430);

      glColor3f(0,1,0);
    glVertex2f(180,430);
    glVertex2f(150,445);
    glVertex2f(150,435);

     glColor3f(0,1,0);
     glVertex2f(180,430);
     glVertex2f(155,465);
    glVertex2f(165,468);

     glColor3f(0,1,0);
     glVertex2f(180,430);
     glVertex2f(190,460);
    glVertex2f(195,445);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(200,450);
    glVertex2f(210,455);
    glVertex2f(205,530);

      glColor3f(0,1,0);
    glVertex2f(205,530);
    glVertex2f(175,545);
    glVertex2f(175,535);

     glColor3f(0,1,0);
     glVertex2f(205,530);
     glVertex2f(180,565);
    glVertex2f(195,568);

     glColor3f(0,1,0);
     glVertex2f(205,530);
     glVertex2f(215,560);
    glVertex2f(220,545);



    glEnd();

    glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(225,550);
    glVertex2f(235,555);
    glVertex2f(230,630);

      glColor3f(0,1,0);
    glVertex2f(230,630);
    glVertex2f(200,645);
    glVertex2f(200,635);

     glColor3f(0,1,0);
     glVertex2f(230,630);
     glVertex2f(205,665);
    glVertex2f(215,668);

     glColor3f(0,1,0);
     glVertex2f(230,630);
     glVertex2f(240,660);
    glVertex2f(245,645);



    glEnd();

    //ooooo
  glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(45,250);
    glVertex2f(55,255);
    glVertex2f(50,330);

      glColor3f(0,1,0);
    glVertex2f(50,330);
    glVertex2f(20,345);
    glVertex2f(20,335);

     glColor3f(0,1,0);
     glVertex2f(50,330);
     glVertex2f(25,365);
    glVertex2f(35,368);

     glColor3f(0,1,0);
     glVertex2f(50,330);
     glVertex2f(60,360);
    glVertex2f(65,345);



    glEnd();
    //////////
     glBegin(GL_TRIANGLES);
       glColor3f(0.76,0.60,0.33);
    glVertex2f(145,250);
    glVertex2f(155,255);
    glVertex2f(150,330);

      glColor3f(0,1,0);
    glVertex2f(150,330);
    glVertex2f(120,345);
    glVertex2f(120,335);

     glColor3f(0,1,0);
     glVertex2f(150,330);
     glVertex2f(125,365);
    glVertex2f(135,368);

     glColor3f(0,1,0);
     glVertex2f(150,330);
     glVertex2f(160,360);
    glVertex2f(165,345);



    glEnd();


}
void  compipe()
{
     //glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
   glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(330,260);
      glVertex2f(340,260);
       glVertex2f(490,600);
        glVertex2f(480,600);
     glEnd();
     glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(320,260);
      glVertex2f(370,260);
       glVertex2f(370,270);
        glVertex2f(320,270);
     glEnd();
      glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(360,365);
      glVertex2f(410,365);
       glVertex2f(410,375);
        glVertex2f(360,375);
     glEnd();
     glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(405,470);
      glVertex2f(455,470);
       glVertex2f(455,480);
        glVertex2f(405,480);
     glEnd();
      glBegin(GL_POLYGON);
      glColor3f(0.26,0.25,0.26);
     glVertex2f(455,575);
      glVertex2f(505,575);
       glVertex2f(505,585);
        glVertex2f(455,585);
     glEnd();


}


void com()
{

   glClearColor(0.1,0.0,0.0,0);
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	for(int i=0;i<900;i++)
    {
	glColor3f(0.79,1.0,0.9);
	drawstring(350,800, 0.0, "COMPONENTS USED ARE");
	glColor3f(0.79,1.0,0.9);
    drawstring(60,170,0.0,"PLANTS ");
   glColor3f(0.79,1.0,0.9);
    drawstring(280,170,0.0,"PIPELINE AND SPRINKLERS");
glColor3f(0.79,1.0,0.9);
    drawstring(700,170,0.0,"WATER TANK ");
     glColor3f(0.79,1.0,0.9);
    drawstring(650,30,0.0,"PRESS 'g' TO CONTINUE");

	glutSwapBuffers();
		water();
	tank();
	base();

compipe();
 compplant();
}
}
void mydisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	if (flag == 0)
		frontscreen();
	if (flag == 1)
		display();
		if(flag==2)
        {
            ds();
        }

    if(flag==3)
        {
           com();

        }

    if (flag ==4)
       {

        sky();
       water();
       tank();
       base();
      plant();
      bigfarm();
      farm();
       }

       if (flag ==5)
       {

 mainpipe();
water();
tank();
 base();
sky();
  farm();
plant();
 delaypipe();
bigfarm();

}
 if (flag ==6)
 {

plantpg();
sky();
 water();
mainpipe();
p1();
p2();
p3();
pp11();
pp21();
pp31();
tank();
 base();
bigfarm();
farm();
 }
glFlush();
}

void myKeyboardFunc(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 13:if (flag == 0) //Ascii of 'enter'
		flag = 1;
		break;
    case 112:if (flag == 1) //Ascii of 'p'
	    flag = 0;
		break;
    case 110:if (flag == 1) //Ascii of 'n'
		flag = 2;
		break;

    case 116:if (flag == 2) //Ascii of 't'
	    flag = 3;
		break;
    case 114:if (flag == 3) //Ascii of 'r'
		flag = 2;
		break;
   case 101:if (flag == 2) //Ascii of 'e'
	    flag = 1;
		break;
		 case 119:if (flag == 1) //Ascii of 'w'
	    flag = 0;
		break;


   case 103:if (flag == 3) //Ascii of 'g'
	   flag = 4;
	   break;
   case 102:if (flag == 4) //Ascii of 'f'
	   flag = 3;
	   break;
   case 100:if (flag == 3) //Ascii of 'd'
	   flag = 2;
	   break;
   case 115:if (flag == 2) //Ascii of 's'
	   flag = 1;
	   break;
   case 97:if (flag == 1) //Ascii of 'a'
	   flag = 0;
	   break;
case 104:if (flag == 4) //Ascii of 'h'
	   flag = 5;
	   break;
case 99:if (flag == 5) //Ascii of 'c'
	   flag = 6;
	   break;
case 105:if (flag == 6) //Ascii of 'i'
	   flag = 7;
	   break;
	}
	mydisplay();
}

void reshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, w, h, 0);
	glMatrixMode(GL_MODELVIEW);
}

void myinit()
{
    //glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	//glOrtho(0, 900.0,0, 900.0, 0.0, 900.0);
	gluOrtho2D(0,900,0,900);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(900,900);
	glutCreateWindow("Simulation of Drip Irrigation system");
	glutDisplayFunc(mydisplay);
	glutKeyboardFunc(myKeyboardFunc);
	myinit();
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
}
