#include<windows.h>
#include <GL/glut.h>
#include<math.h>
# define PI 3.14
//#include <GL/glut.h>
void myInit(void)
{
glClearColor(0.0, 0.0, 0.0, 0.0); // set the bg color to a bright black
//glPointSize(4.0); // set the point size to 4 by 4 pixels
glMatrixMode(GL_PROJECTION); // set up appropriate matrices-
//glLoadIdentity(); // to be explained
gluOrtho2D(0.0, 1050.0, 0.0, 1000.0);
//gluOrtho2D(0.0, 1000.0, 0.0, 1000.0);
}
void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT); // clear the screen
//glLineWidth(4.0);
//Sky
glBegin(GL_QUADS);
      glColor3ub(224,224,224);//(166, 189, 219); // Maximum Green
      glVertex2i(0,800);
      glVertex2i(1050,800);
      glVertex2i(1050,1000);
      glVertex2i(0,1000);
      glEnd();
glFlush();
//////
glBegin(GL_QUADS);
      glColor3ub(30, 86, 49); // Maximum Green
      glVertex2i(0,800);
      glVertex2i(1050,750);
      glVertex2i(1050,900);
      glVertex2i(900,860);
      glVertex2i(860,820);
      glVertex2i(800,870);
      glVertex2i(700,870);
      glVertex2i(600,820);
      glVertex2i(0,840);
      //glVertex2i(0,800);
      glEnd();

//River
glBegin(GL_QUADS);
      glColor3ub(102,178,255);//(0, 128, 255); // Maximum Green
      glVertex2i(0,600);
      glVertex2i(1050,600);
      glVertex2i(1050,800);
      glVertex2i(0,800);
      glEnd();
glFlush();
//Boat 1 part 1
glBegin(GL_POLYGON);
      glColor3ub(0,0,0);
      glVertex2i(50,720);
      glVertex2i(120,720);
      glVertex2i(130,740);
      glVertex2i(40,740);
      glEnd();
glFlush();
//Boat 1 part 2
glBegin(GL_POLYGON);
      glColor3ub(255,255,0);
      glVertex2i(60,740);
      glVertex2i(110,740);
      glVertex2i(90,750);
      glVertex2i(80,750);
      glEnd();
glFlush();
//Boat 1 part 3
glBegin(GL_QUADS);
      glColor3ub(0,1,0);
      glVertex2i(50,740);
      glVertex2i(55,740);
      glVertex2i(55,780);
      glVertex2i(50,780);
      glEnd();
glFlush();

//Boat 2 part 1
glBegin(GL_POLYGON);
      glColor3ub(0,0,0);
      glVertex2i(850,770);
      glVertex2i(920,770);
      glVertex2i(930,790);
      glVertex2i(840,790);
      glEnd();
glFlush();
//Boat 2 part 2
glBegin(GL_POLYGON);
      glColor3ub(0,255,0);
      glVertex2i(860,790);
      glVertex2i(910,790);
      glVertex2i(890,800);
      glVertex2i(880,800);
      glEnd();
glFlush();
//Boat 2 part 3
glBegin(GL_QUADS);
      glColor3ub(0,1,0);
      glVertex2i(850,790);
      glVertex2i(855,790);
      glVertex2i(855,830);
      glVertex2i(850,830);
      glEnd();
glFlush();
//for home place
glBegin(GL_QUADS);
      glColor3ub(76, 154, 42); // Maximum Green
      glVertex2i(0,220);
      glVertex2i(1050,220);
      glVertex2i(1050,600);
      glVertex2i(0,600);
      glEnd();
glFlush();
//home 1 land
glBegin(GL_POLYGON);
      glColor3ub(46,139,87); // Maximum Green
      glVertex2i(1050,220);
      glVertex2i(1050,320);
      glVertex2i(690,220);
      glEnd();
glFlush();

//home land shade2
glBegin(GL_POLYGON);
      glColor3ub(46,139,87); // Maximum Green
      glVertex2i(1050,330);
      glVertex2i(0,300);
      glVertex2i(0,650);
      glVertex2i(1050,380);
      glEnd();
glFlush();

//home land shade4
glBegin(GL_POLYGON);
      glColor3ub(0,204,102);//107,142,35);//(107, 142, 0); // Maximum Green
      glVertex2i(1050,620);
      glVertex2i(1050,500);
      glVertex2i(500,490);
      glVertex2i(500,400);
      glEnd();
glFlush();
//1st home 1 tree 1
glBegin(GL_POLYGON);
      glColor3ub(153, 76, 0); // Maximum Green
      glVertex2i(540,500);
      glVertex2i(560,500);
      glVertex2i(560,580);
      glVertex2i(540,580);
      glEnd();
glFlush();
//1st home 1 tree 1 leaf
glBegin(GL_POLYGON);
      glColor3ub(0, 51, 25); // Maximum Green
      glVertex2i(510,580);
      glVertex2i(590,580);
      glVertex2i(550,630);
      glEnd();
glFlush();
glBegin(GL_POLYGON);
      glColor3ub(0, 102, 0); // Maximum Green
      glVertex2i(510,610);
      glVertex2i(590,610);
      glVertex2i(550,660);
      glEnd();
glFlush();
glBegin(GL_POLYGON);
      glColor3ub(76, 153, 0); // Maximum Green
       glVertex2i(510,640);
      glVertex2i(590,640);
      glVertex2i(550,740);

      glEnd();
glFlush();


//1st home 1
glBegin(GL_POLYGON);
      glColor3ub(225, 204, 229); // Maximum Green
      glVertex2i(600,550);
      glVertex2i(660,530);
      glVertex2i(660,590);
      glVertex2i(630,640);
      glVertex2i(600,590);
      glEnd();
      //
    glBegin(GL_POLYGON);
      glColor3ub(102,0,102); // Maximum Green
     glVertex2i(630,640);
     glVertex2i(640,630);
     glVertex2i(600,585);
     glVertex2i(590,585);
      glEnd();
  //door in 1`
       glBegin(GL_POLYGON);
      glColor3ub(0,0,0); // Maximum Green
     glVertex2i(610,545);
     glVertex2i(640,535);
     glVertex2i(640,580);
     glVertex2i(610,585);
      glEnd();
glFlush();
//2
glBegin(GL_POLYGON);
      glColor3ub(102,0,102); // Maximum Green
      glVertex2i(660,580);
      glVertex2i(720,590);
      glVertex2i(740,640);
      glVertex2i(630,640);
      glEnd();
glFlush();
//3
glBegin(GL_POLYGON);
      glColor3ub(255,204,255); // Maximum Green
      glVertex2i(660,530);
      glVertex2i(720,545);
      glVertex2i(720,590);
      glVertex2i(660,580);
      glEnd();
glFlush();
//4
glBegin(GL_POLYGON);
      glColor3ub(255,255,255); // Maximum Green
      glVertex2i(720,530);
      glVertex2i(800,520);
      glVertex2i(800,600);
      glVertex2i(760,670);
      glVertex2i(720,595);
      glEnd();
glFlush();
glBegin(GL_POLYGON);
      glColor3ub(255,51,51); // Maximum Green
       glVertex2i(770,660);
      glVertex2i(760,670);
      glVertex2i(710,595);
      glVertex2i(725,605);
      glEnd();
glFlush();
// door in 4
glBegin(GL_POLYGON);
      glColor3ub(0,0,0); // Maximum Green
       glVertex2i(745,528);
      glVertex2i(775,525);
      glVertex2i(775,580);
      glVertex2i(745,576);
      glEnd();
glFlush();
//5
glBegin(GL_POLYGON);
      glColor3ub(255,51,51); // Maximum Green
      glVertex2i(800,595);
      glVertex2i(900,600);
      glVertex2i(860,670);
      glVertex2i(760,670);
      glEnd();
glFlush();
//6
glBegin(GL_POLYGON);
      glColor3ub(153,204,255); // Maximum Green
      glVertex2i(800,520);
      glVertex2i(890,540);
      glVertex2i(890,600);
      glVertex2i(800,595);
      glEnd();
glFlush();
//tree
glBegin(GL_POLYGON);
      glColor3ub(102,0,0); // Maximum Green
      glVertex2i(920,570);
      glVertex2i(930,570);
      glVertex2i(930,620);
      glVertex2i(920,620);
      glEnd();
glFlush();
//leaf
glBegin(GL_TRIANGLES);
      glColor3ub(30, 86, 49); // Maximum Green
      glVertex2i(900,620);
      glVertex2i(950,620);
      glVertex2i(920,700);
      glEnd();
glBegin(GL_TRIANGLES);
      glColor3ub(30, 86, 49); // Maximum Green
      glVertex2i(900,660);
      glVertex2i(950,660);
      glVertex2i(925,720);
      glEnd();

      //tree home 1 right corner

      glBegin(GL_POLYGON);
      glColor3ub(153, 0, 0); // Maximum Green
       glVertex2i(1020,480);
      glVertex2i(1030,400);
      glVertex2i(990,400);
       glVertex2i(1000,480);
      glVertex2i(970,560);
      glVertex2i(975,565);
      glVertex2i(985,525);
      glVertex2i(995,525);
      glVertex2i(1000,675);
      glVertex2i(1005,535);


      glVertex2i(1050,580);
      //      glVertex2i(1000,460);
       glVertex2i(1000,460);
      glVertex2i(980,400);
       glEnd();

//tree home 1 right bottom corner

      glBegin(GL_POLYGON);
      glColor3ub(50,205,50); // Maximum Green
       glVertex2i(1030,400);
       glVertex2i(1050,420);
       glVertex2i(1050,380);
       glVertex2i(1030,380);
       glVertex2i(1010,370);
      glVertex2i(900,380);
      glVertex2i(990,400);
       glVertex2i(1000,430);


       glEnd();
       glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
       for(int i=0;i<200;i++)
        {
           glColor3ub(51,102,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=50.85;
            float x = r * cos(A)+1010;
            float y = r * sin(A)+655;
            glVertex2f(x,y );
        }

	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
       for(int i=0;i<200;i++)
        {
           glColor3ub(51,102,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=40.85;
            float x = r * cos(A)+1030;
            float y = r * sin(A)+725;
            glVertex2f(x,y );
        }

	glEnd();

	  glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
       for(int i=0;i<200;i++)
        {
           glColor3ub(50,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=40.85;
            float x = r * cos(A)+1040;
            float y = r * sin(A)+680;
            glVertex2f(x,y );
        }

	glEnd();

	  glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
       for(int i=0;i<200;i++)
        {
           glColor3ub(0,51,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=25.85;
            float x = r * cos(A)+960;
            float y = r * sin(A)+580;
            glVertex2f(x,y );
        }

	glEnd();
	  glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
       for(int i=0;i<200;i++)
        {
           glColor3ub(76,153,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=35.85;
            float x = r * cos(A)+1050;
            float y = r * sin(A)+590;
            glVertex2f(x,y );
        }

	glEnd();
glFlush();

//Road 1
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(96,106,116); // Red
      glVertex2i(0,10);
      glVertex2i(1050,10);
      glVertex2i(1050,200);
      glVertex2i(0,200);
      glEnd();
glFlush();
//Road 2
glBegin(GL_POLYGON);
      glColor3ub(96,106,116);
      glVertex2i(520,200);
      glVertex2i(690,200);
      glVertex2i(480,600);
      glVertex2i(370,600);
      glEnd();
glFlush();
//Road 3
glBegin(GL_POLYGON);
      glColor3ub(96,106,116);
      glVertex2i(0,600);
      glVertex2i(500,530);
      glVertex2i(480,605);
      glVertex2i(0,630);
      glEnd();
glFlush();
//2nd home tree 1
glBegin(GL_POLYGON);
      glColor3ub(0,0,0);
      glVertex2i(180,530);
      glVertex2i(190,530);
      glVertex2i(190,590);
      glVertex2i(180,590);
      glEnd();
glFlush();
//2nd home tree 1 leaf
glBegin(GL_POLYGON);
      glColor3ub(0,51,25);
      glVertex2i(150,580);
      glVertex2i(220,580);
      glVertex2i(185,685);
      glEnd();
glFlush();
// 2nd home part 1
glBegin(GL_POLYGON);
      glColor3ub(255,204,204);
      glVertex2i(0,480);
      glVertex2i(100,450);
      glVertex2i(100,530);
      glVertex2i(0,540);
      glEnd();
glFlush();
// 2nd home part 2
glBegin(GL_POLYGON);
      glColor3ub(0,0,102);
      glVertex2i(0,540);
      glVertex2i(100,530);
      glVertex2i(150,600);
      glVertex2i(0,590);
      glEnd();
glFlush();
// 2nd home part 3
glBegin(GL_POLYGON);
      glColor3ub(192,192,192);
      glVertex2i(100,450);
      glVertex2i(100,530);
      glVertex2i(150,600);
      glVertex2i(200,530);
      glVertex2i(200,480);
      glEnd();
glFlush();
// 2nd home part 4
glBegin(GL_POLYGON);
      glColor3ub(204,0,0);
      glVertex2i(150,500);
      glVertex2i(250,490);
      glVertex2i(300,580);
      glVertex2i(200,575);
      glEnd();
glFlush();
// 2nd home part 5
glBegin(GL_POLYGON);
      glColor3ub(255,229,204);
      glVertex2i(170,500);
      glVertex2i(250,490);
      glVertex2i(250,400);
      glVertex2i(170,440);
      glEnd();
glFlush();
// 2nd home part 6
glBegin(GL_POLYGON);
      glColor3ub(204, 209, 255);
      glVertex2i(250,400);
      glVertex2i(350,420);
      glVertex2i(350,490);
      glVertex2i(300,580);
      glVertex2i(250,490);
      glEnd();
      glBegin(GL_POLYGON);
      glColor3ub(204, 0, 0);
      glVertex2i(360,480);
      glVertex2i(300,580);
      glVertex2i(290,570);
      glVertex2i(340,480);

      glEnd();
      //6 in door
       glBegin(GL_POLYGON);
      glColor3ub(0, 0, 0);
      glVertex2i(280,405);
      glVertex2i(325,410);
      glVertex2i(320,490);
      glVertex2i(280,485);

      glEnd();
glFlush();
// 2nd home tree
glBegin(GL_POLYGON);
      glColor3ub(102,0,0);
      glVertex2i(400,490);
      glVertex2i(420,490);
      glVertex2i(420,380);
      glVertex2i(400,380);
      glEnd();
glFlush();
// 2nd home tree leaf
glBegin(GL_POLYGON);
      glColor3ub(0,51,25);
      glVertex2i(340,490);
      glVertex2i(480,490);
      glVertex2i(410,600);

      glEnd();
glFlush();
// 2nd home tree leaf1
glBegin(GL_POLYGON);
      glColor3ub(0,51,25);
      glVertex2i(340,530);
      glVertex2i(480,530);
      glVertex2i(410,650);

      glEnd();
glFlush();
// 2nd home tree leaf2
glBegin(GL_POLYGON);
      glColor3ub(0,51,25);
      glVertex2i(340,570);
      glVertex2i(480,570);
      glVertex2i(410,700);

      glEnd();
glFlush();
//tree 1
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(20,200);
      glVertex2i(30,200);
      glVertex2i(30,250);
      glVertex2i(20,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(5,250);
      glVertex2i(45,250);
      glVertex2i(25,310);
      glEnd();
glFlush();
//tree 2
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(80,200);
      glVertex2i(90,200);
      glVertex2i(90,250);
      glVertex2i(80,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(65,250);
      glVertex2i(105,250);
      glVertex2i(85,310);
      glEnd();
glFlush();
//tree 3
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(140,200);
      glVertex2i(150,200);
      glVertex2i(150,250);
      glVertex2i(140,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(125,250);
      glVertex2i(165,250);
      glVertex2i(145,310);
      glEnd();
glFlush();
//tree 4
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(200,200);
      glVertex2i(210,200);
      glVertex2i(210,250);
      glVertex2i(200,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(185,250);
      glVertex2i(225,250);
      glVertex2i(205,310);
      glEnd();
glFlush();
//tree 5
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(260,200);
      glVertex2i(270,200);
      glVertex2i(270,250);
      glVertex2i(260,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(245,250);
      glVertex2i(285,250);
      glVertex2i(265,310);
      glEnd();
glFlush();
//tree 6
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(320,200);
      glVertex2i(330,200);
      glVertex2i(330,250);
      glVertex2i(320,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(305,250);
      glVertex2i(345,250);
      glVertex2i(325,310);
      glEnd();
glFlush();
//tree 7
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(380,200);
      glVertex2i(390,200);
      glVertex2i(390,250);
      glVertex2i(380,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(365,250);
      glVertex2i(405,250);
      glVertex2i(385,310);
      glEnd();
glFlush();
//tree 8
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(440,200);
      glVertex2i(450,200);
      glVertex2i(450,250);
      glVertex2i(440,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(425,250);
      glVertex2i(465,250);
      glVertex2i(445,310);
      glEnd();
glFlush();

//tree 9
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(500,200);
      glVertex2i(510,200);
      glVertex2i(510,250);
      glVertex2i(500,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(485,250);
      glVertex2i(525,250);
      glVertex2i(505,310);
      glEnd();
glFlush();
//tree 10
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(680,200);
      glVertex2i(690,200);
      glVertex2i(690,250);
      glVertex2i(680,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(665,250);
      glVertex2i(705,250);
      glVertex2i(685,310);
      glEnd();
glFlush();
//tree 11
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(740,200);
      glVertex2i(750,200);
      glVertex2i(750,250);
      glVertex2i(740,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(725,250);
      glVertex2i(765,250);
      glVertex2i(745,310);
      glEnd();
glFlush();
//tree 12
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(800,200);
      glVertex2i(810,200);
      glVertex2i(810,250);
      glVertex2i(800,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(785,250);
      glVertex2i(825,250);
      glVertex2i(805,310);
      glEnd();
glFlush();
//tree 13
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(860,200);
      glVertex2i(870,200);
      glVertex2i(870,250);
      glVertex2i(860,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(845,250);
      glVertex2i(885,250);
      glVertex2i(865,310);
      glEnd();
glFlush();
//tree 13
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(920,200);
      glVertex2i(930,200);
      glVertex2i(930,250);
      glVertex2i(920,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(905,250);
      glVertex2i(945,250);
      glVertex2i(925,310);
      glEnd();
glFlush();
//tree 13
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(102,0,0); // Red
      glVertex2i(980,200);
      glVertex2i(990,200);
      glVertex2i(990,250);
      glVertex2i(980,250);
      glEnd();
glFlush();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(0,51,0); // Red
      glVertex2i(965,250);
      glVertex2i(1005,250);
      glVertex2i(985,310);
      glEnd();
glFlush();
//sign 1
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(1,1,1); // Red
      glVertex2i(50,100);
      glVertex2i(200,100);
      glVertex2i(200,110);
      glVertex2i(50,110);
      glEnd();
glFlush();
//sign 2
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(1,1,1); // Red
      glVertex2i(250,100);
      glVertex2i(400,100);
      glVertex2i(400,110);
      glVertex2i(250,110);
      glEnd();
glFlush();
//sign 3
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(1,1,1); // Red
      glVertex2i(450,100);
      glVertex2i(600,100);
      glVertex2i(600,110);
      glVertex2i(450,110);
      glEnd();
glFlush();
//sign 4
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(1,1,1); // Red
      glVertex2i(650,100);
      glVertex2i(800,100);
      glVertex2i(800,110);
      glVertex2i(650,110);
      glEnd();
glFlush();
//sign 5
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(1,1,1); // Red
      glVertex2i(850,100);
      glVertex2i(990,100);
      glVertex2i(990,110);
      glVertex2i(850,110);
      glEnd();
glFlush();
//car 1
glBegin(GL_QUADS);
      glColor3ub(255,255,204);
      glVertex2i(795,50);
      glVertex2i(885,50);
      glVertex2i(880,80);
      glVertex2i(800,80);
      glEnd();
glFlush();
glBegin(GL_POLYGON);
      glColor3ub(153,153,255);
      glVertex2i(800,80);
      glVertex2i(870,80);
      glVertex2i(850,110);
      glVertex2i(810,110);
      //glVertex2i(720,100);
      glEnd();
glFlush();

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
        {
           glColor3ub(1.0,0,1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.85;
            float x = r * cos(A)+815;
            float y = r * sin(A)+50;
            glVertex2f(x,y );
        }

	glEnd();
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
        {
           glColor3ub(1.0,0,1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.85;
            float x = r * cos(A)+865;
            float y = r * sin(A)+50;
            glVertex2f(x,y );
        }

	glEnd();
//car 2
glBegin(GL_QUADS);
      glColor3ub(255,255,204);
      glVertex2i(95,50);
      glVertex2i(185,50);
      glVertex2i(180,80);
      glVertex2i(100,80);
      glEnd();
glFlush();
glBegin(GL_POLYGON);
      glColor3ub(53,153,255);
      glVertex2i(100,80);
      glVertex2i(170,80);
      glVertex2i(150,110);
      glVertex2i(110,110);
      //glVertex2i(720,100);
      glEnd();
glFlush();

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
        {
           glColor3ub(1.0,0,1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.85;
            float x = r * cos(A)+115;
            float y = r * sin(A)+50;
            glVertex2f(x,y );
        }

	glEnd();
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
        {
           glColor3ub(1.0,0,1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.85;
            float x = r * cos(A)+165;
            float y = r * sin(A)+50;
            glVertex2f(x,y );
        }

	glEnd();

	//car 3
glBegin(GL_QUADS);
      glColor3ub(255,255,204);
      glVertex2i(475,150);
      glVertex2i(595,150);
      glVertex2i(590,180);
      glVertex2i(480,180);
      glEnd();
glFlush();
glBegin(GL_POLYGON);
      glColor3ub(153,153,255);
      glVertex2i(500,180);
      glVertex2i(590,180);
      glVertex2i(570,210);
      glVertex2i(510,210);
      //glVertex2i(720,100);
      glEnd();
glFlush();

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
        {
           glColor3ub(1.0,0,1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.85;
            float x = r * cos(A)+505;
            float y = r * sin(A)+150;
            glVertex2f(x,y );
        }

	glEnd();
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
        {
           glColor3ub(1.0,0,1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.85;
            float x = r * cos(A)+570;
            float y = r * sin(A)+150;
            glVertex2f(x,y );
        }

	glEnd();


glFlush();

}
int main(int iArgc, char** cppArgv)
{
glutInit(&iArgc, cppArgv); // initialize the toolkit
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set the display mode
glutInitWindowSize(640,480); // set window size
glutInitWindowPosition(100, 150); // set window upper left corner position on screen
glutCreateWindow("Village Scenery"); // open the screen window (Title: My First Attempt)
// register the callback functions
glutDisplayFunc(myDisplay);
myInit(); // additional initializations as necessary
glutMainLoop(); // go into a endless loop
return 0;
}
