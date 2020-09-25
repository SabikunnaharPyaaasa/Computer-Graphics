#include<windows.h>

#include <GL/glut.h>

#include<math.h>

# define PI           3.14159265358979323846


//#include <GL/glut.h>

void myInit(void)

{

glClearColor(0.0, 1.0, 1.0, 1.0); // set the bg color to a bright black

glMatrixMode(GL_PROJECTION); // set up appropriate matrices-

glLoadIdentity();

//gluOrtho2D(0.0, 640.0, 0.0, 480.0);

gluOrtho2D(-1.0, 1.0, -0.6, 0.6 );



}

void HCircle(GLfloat cx, GLfloat cy,GLfloat cz, GLfloat radius,int r,int g,int b)
{
	int triangleAmount = 40;
	GLfloat twicePi = 2.0f * 3.1416;
    int counter=0;
    glColor3ub(r,g,b);
	glBegin(GL_TRIANGLE_FAN);
		glVertex3f(cx, cy,cz);
		for(int i = 0; i <= triangleAmount;i++) {
			counter+=1;
			glVertex3f(
		            cx + (radius * 1.5*cos(i *  twicePi / triangleAmount)),
			    cy + (radius * sin(i * twicePi / triangleAmount)),cz
			);
		}
	glEnd();
}

void MCircle(GLfloat cx, GLfloat cy,GLfloat cz, GLfloat radius,int r,int g,int b)
{
	int triangleAmount = 40;
	GLfloat twicePi = 2.0f * 3.1416;
    int counter=0;
    glColor3ub(r,g,b);
	glBegin(GL_TRIANGLE_FAN);
		glVertex3f(cx, cy,cz);
		for(int i = 0; i <= triangleAmount;i++) {
			counter+=1;
			glVertex3f(
		            cx + (radius *cos(i *  twicePi / triangleAmount)),
			    cy + (radius * sin(i * twicePi / triangleAmount)),cz
			);
		}
	glEnd();
}

float angle=30.f;



void building()
{

//glClear(GL_COLOR_BUFFER_BIT); // clear the screenn

//glPushMatrix();
//full body

 glBegin(GL_QUADS);

      glColor3ub(255, 255, 255);

      glVertex2f(-0.50f, 0.0f);
      glColor3ub(212, 212, 212);
      glVertex2f(0.50f, 0.0f);
       glColor3ub(212, 212, 212);

      glVertex2f(0.5f, 0.36f);
      glColor3ub(255, 255, 255);

      glVertex2f(-0.5f, 0.36f);
glEnd();
//full body 4th floor inner line
glLineWidth(10.0);
glBegin(GL_LINES);
       glColor3ub(245, 245, 245);
      glVertex2f(-0.51f, 0.345f);
      glColor3ub(180, 180, 180);
      glVertex2f(0.51f, 0.345f);

glEnd();

//full body 4th floor line
glLineWidth(2.0);
glBegin(GL_LINES);

      glColor3ub(110,110,110);
      glVertex2f(-0.51f, 0.340f);
      glVertex2f(0.51f, 0.340f);

       glVertex2f(0.51f, 0.340f);
      glVertex2f(0.51f, 0.352f);

      glVertex2f(0.51f, 0.352f);
      glVertex2f(-0.51f, 0.352f);

      glVertex2f(-0.51f, 0.352f);
      glVertex2f(-0.51f, 0.340f);

glEnd();


//full body 4th floor line corner
glLineWidth(5.0);
glBegin(GL_LINES);

      glColor3ub(190, 190, 190);
      glVertex2f(-0.51f, 0.345f);
      glVertex2f(-0.50f, 0.33f);
      glVertex2f(0.51f, 0.345f);
      glVertex2f(0.50f, 0.33f);
glEnd();


//full body 3rd floor inner line
glLineWidth(10.0);
glBegin(GL_LINES);
       glColor3ub(245, 245, 245);
      glVertex2f(-0.51f, 0.29f);
      glColor3ub(180, 180, 180);
      glVertex2f(0.51f, 0.29f);

glEnd();
//full body 3rd floor outer line
glLineWidth(2.0);
glBegin(GL_LINES);

      glColor3ub(110, 110, 110);
      glVertex2f(-0.51f, 0.28f);
      glVertex2f(0.51f, 0.28f);

       glVertex2f(0.51f, 0.28f);
      glVertex2f(0.51f, 0.295f);

      glVertex2f(0.51f, 0.295f);
      glVertex2f(-0.51f, 0.295f);

      glVertex2f(-0.51f, 0.295f);
      glVertex2f(-0.51f, 0.28f);

      glVertex2f(-0.51f, 0.28f);
      glVertex2f(-0.50f, 0.26f);
      glVertex2f(0.51f, 0.28f);
      glVertex2f(0.50f, 0.26f);



glEnd();




//full body 2nd floor inner line
glLineWidth(10.0);
glBegin(GL_LINES);
       glColor3ub(245, 245, 245);
      glVertex2f(-0.51f, 0.15f);
      glColor3ub(180, 180, 180);
      glVertex2f(0.51f, 0.15f);

glEnd();
//full body 2nd floor outer line
glLineWidth(2.0);
glBegin(GL_LINES);

      glColor3ub(110, 110, 110);
      glVertex2f(-0.51f, 0.14f);
      glVertex2f(0.51f, 0.14f);

       glVertex2f(0.51f, 0.14f);
      glVertex2f(0.51f, 0.155f);

      glVertex2f(0.51f, 0.155f);
      glVertex2f(-0.51f, 0.155f);

      glVertex2f(-0.51f, 0.155f);
      glVertex2f(-0.51f, 0.14f);

glEnd();



//full body 1st floor inner line
glLineWidth(10.0);
glBegin(GL_LINES);
       glColor3ub(245, 245, 245);
      glVertex2f(-0.51f, 0.05f);
      glColor3ub(180, 180, 180);
      glVertex2f(0.51f, 0.05f);

glEnd();
//full body 1st floor outer line
glLineWidth(2.0);
glBegin(GL_LINES);

      glColor3ub(110, 110, 110);
      glVertex2f(-0.51f, 0.04f);
      glVertex2f(0.51f, 0.04f);

       glVertex2f(0.51f, 0.04f);
      glVertex2f(0.51f, 0.055f);

      glVertex2f(0.51f, 0.055f);
      glVertex2f(-0.51f, 0.055f);

      glVertex2f(-0.51f, 0.055f);
      glVertex2f(-0.51f, 0.04f);
glEnd();



//middle top box
glBegin(GL_QUADS);

       glColor3ub(255,255,255);

      glVertex2f(-0.123f, 0.28f);
      glVertex2f(0.123f, 0.28f);
       glColor3ub(250,250,250);

      glVertex2f(0.123f, 0.38f);
       glColor3ub(250,250,250);

      glVertex2f(-0.123f, 0.38f);



   glEnd();
//middle top
glBegin(GL_QUADS);

      glColor3f(0.8f, 0.8f, 0.8f);

      glVertex2f(-0.14f, 0.28f);

      glVertex2f(0.14f, 0.28f);

      glVertex2f(0.14f, 0.37f);

      glVertex2f(-0.14f, 0.37f);



   glEnd();





//middle middle box
glBegin(GL_QUADS);

      glColor3ub(255,255,255);

      glVertex2f(-0.03f, 0.3f);
      glColor3ub(177, 177, 176);

      glVertex2f(0.03f, 0.3f);

      glVertex2f(0.03f, 0.34f);

      glVertex2f(-0.03f, 0.34f);



   glEnd();

//middle pillar box
glBegin(GL_QUADS);


      glColor3ub(255,255,255);
      glVertex2f(-0.158f, 0.25f);
      glColor3ub(172,172,172);

      glVertex2f(0.158f, 0.25);


      glVertex2f(0.158f, 0.281f);
      glColor3ub(172,172,172);

      glVertex2f(-0.158f, 0.281f);



   glEnd();

//middle pillar box line
glLineWidth(5.0);
glBegin(GL_LINES);

      glColor3ub(255,255,255);

      glVertex2f(-0.16f, 0.278f);
      glColor3ub(180,180,180);

      glVertex2f(0.16f, 0.278f);
   glEnd();


   //middle pillar box 2 top

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.110f, 0.22f);
      glVertex2f(-.095f, 0.22f);
      glVertex2f(-.090f, 0.25f);

      glVertex2f(-.115f, 0.25f);
   glEnd();
//middle pillar box 2 middle

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.110f, 0.038f);
      glVertex2f(-.095f, 0.038f);
      glVertex2f(-.095f, 0.22f);

      glVertex2f(-.110f, 0.22f);
   glEnd();

    //middle pillar box 3 top

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.06f, 0.22f);
      glVertex2f(-.045f, 0.22f);
      glVertex2f(-.040f, 0.25f);

      glVertex2f(-.065f, 0.25f);
   glEnd();
//middle pillar box 3 middle

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.06f, 0.038f);
      glVertex2f(-.045f, 0.038f);
      glVertex2f(-.045f, 0.22f);

      glVertex2f(-.06f, 0.22f);
   glEnd();

   //middle pillar box 4 top

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.03f, 0.22f);
      glVertex2f(-.015f, 0.22f);
      glVertex2f(-.010f, 0.25f);

      glVertex2f(-.035f, 0.25f);
   glEnd();
//middle pillar box 4 middle

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.03f, 0.038f);
      glVertex2f(-.015f, 0.038f);
      glVertex2f(-.015f, 0.22f);

      glVertex2f(-.03f, 0.22f);
   glEnd();

   //middle pillar box 5 top

glBegin(GL_POLYGON);

      glColor3ub(177,180,180);
      glVertex2f(0.03f, 0.22f);
      glVertex2f(0.015f, 0.22f);
      glVertex2f(0.010f, 0.25f);

      glVertex2f(0.035f, 0.25f);
   glEnd();
//middle pillar box 5 middle

glBegin(GL_POLYGON);

      glColor3ub(177,177,177);

      glVertex2f(0.03f, 0.038f);
      glVertex2f(0.015f, 0.038f);
      glVertex2f(0.015f, 0.22f);

      glVertex2f(0.03f, 0.22f);
   glEnd();





    //middle pillar box 6 top

glBegin(GL_POLYGON);

      glColor3ub(177,180,180);

      glVertex2f(0.06f, 0.22f);
      glVertex2f(0.045f, 0.22f);
      glVertex2f(0.040f, 0.25f);

      glVertex2f(0.065f, 0.25f);
   glEnd();
//middle pillar box 6 middle

glBegin(GL_POLYGON);

      glColor3ub(177,177,177);

      glVertex2f(0.06f, 0.038f);
      glVertex2f(0.045f, 0.038f);
      glVertex2f(0.045f, 0.22f);

      glVertex2f(0.06f, 0.22f);
   glEnd();
//middle pillar box 7 top

glBegin(GL_POLYGON);

      glColor3ub(177,180,180);

      glVertex2f(0.110f, 0.22f);
      glVertex2f(0.095f, 0.22f);
      glVertex2f(0.090f, 0.25f);

      glVertex2f(0.115f, 0.25f);
   glEnd();
//middle pillar box 7 middle

glBegin(GL_POLYGON);

      glColor3ub(177,177,177);

      glVertex2f(0.110f, 0.038f);
      glVertex2f(0.095f, 0.038f);
      glVertex2f(0.095f, 0.22f);

      glVertex2f(0.110f, 0.22f);
   glEnd();





   //middle pillar box 8 top

glBegin(GL_POLYGON);

      glColor3ub(177,180,180);

       glVertex2f(0.14f, 0.22f);
      glVertex2f(0.125f, 0.22f);
      glVertex2f(0.120, 0.25f);

      glVertex2f(0.145f, 0.25f);
   glEnd();
//middle pillar box 8 middle

glBegin(GL_POLYGON);

     glColor3ub(177,180,180);
      glVertex2f(0.14f, 0.048f);
      glVertex2f(0.125f, 0.048f);
      glVertex2f(0.125, 0.22f);

      glVertex2f(0.14f, 0.22f);
   glEnd();



//middle pillar box 8 bottom

glBegin(GL_POLYGON);

      glColor3ub(80, 80, 80);

      glVertex2f(.144f, 0.036f);
      glVertex2f(.121f, 0.036f);
      glVertex2f(.121, 0.048f);

      glVertex2f(.144f, 0.048f);
   glEnd();

   //middle pillar box 1 top

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.14f, 0.22f);
      glVertex2f(-.125f, 0.22f);
      glVertex2f(-.120, 0.25f);

      glVertex2f(-.145f, 0.25f);
   glEnd();
//middle pillar box 1 middle

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.14f, 0.048f);
      glVertex2f(-.125f, 0.048f);
      glVertex2f(-.125, 0.22f);

      glVertex2f(-.14f, 0.22f);
   glEnd();

//middle pillar box 1 bottom

glBegin(GL_POLYGON);

      glColor3f(0.0f, 0.0f, 1.0f);

      glVertex2f(-.144f, 0.036f);
      glVertex2f(-.121f, 0.036f);
      glVertex2f(-.121, 0.048f);

      glVertex2f(-.144f, 0.048f);
   glEnd();


// 4th floor left window outer border

float wx1,wx2,wy1,wy2;
wx1=-0.47; wx2=-0.44; wy1=0.3;wy2=0.335;
glColor3ub(180,180,180);
glBegin(GL_QUADS);
       for(int j=0; j<7;j++)
       {
          glVertex2f(wx1, wy1);
          glVertex2f(wx2, wy1);
          glVertex2f(wx2, wy2);
          glVertex2f(wx1, wy2);

          wx1=wx1+0.05;
          wx2=wx2+0.05;

       }

   glEnd();
// 4th floor left window inner border

glColor3ub(54,54,54);
float wix1=-0.467, wix2=-0.443, wiy1=0.301, wiy2=0.329;
glBegin(GL_QUADS);


        for(int j=0; j<7;j++)
       {
          glVertex2f(wix1, wiy1);
          glVertex2f(wix2, wiy1);
          glVertex2f(wix2, wiy2);
          glVertex2f(wix1, wiy2);

          wix1=wix1+0.05;
          wix2=wix2+0.05;

       }

   glEnd();
   // 4th floor left window inner line

float wlx=-.454,wly1=0.301,wly2=0.3295;
glColor3ub(255,255,255);
glLineWidth(2.0);
glBegin(GL_LINES);

        for(int i=0; i<7; i++)
        {
            glVertex2f(wlx, wly1);
            glVertex2f(wlx, wly2);

            wlx=wlx+0.05;
        }

glEnd();
// 4th floor right window outer border

float wxr1=0.17,wxr2=0.14,wyr1=0.3,wyr2=0.335;
glColor3ub(180,180,180);
glBegin(GL_QUADS);

    for(int i=0; i<7; i++)
    {
      glVertex2f(wxr1, wyr1);
      glVertex2f(wxr2, wyr1);
      glVertex2f(wxr2, wyr2);
      glVertex2f(wxr1, wyr2);

      wxr1=wxr1+0.05;
      wxr2=wxr2+0.05;

    }


   glEnd();


// 4th floor right window inner border

float wixr1=0.168,wixr2=0.146,wiyr1=0.301,wiyr2=0.329;
 glColor3ub(54,54,54);
glBegin(GL_QUADS);

     for(int i=0; i<7; i++)
     {
          glVertex2f(wixr1, wiyr1);
          glVertex2f(wixr2, wiyr1);
          glVertex2f(wixr2, wiyr2);
          glVertex2f(wixr1, wiyr2);

          wixr1=wixr1+0.05;
          wixr2=wixr2+0.05;


     }
glEnd();

// 4th floor right window inner line

float wlxr=0.157,wlyr1=0.301,wlyr2=0.3295;
glLineWidth(2.0);
glColor3ub(255,255,255);
glBegin(GL_LINES);

    for(int i=0; i<7; i++)
    {

      glVertex2f(wlxr, wlyr1);
      glVertex2f(wlxr, wlyr2);

      wlxr=wlxr+0.05;
    }

glEnd();
// 3rd floor left window outer border

float w3x1,w3x2,w3y1,w3y2;
w3x1=-0.47; w3x2=-0.44; w3y1=0.17f;w3y2=0.265f;
glColor3ub(180,180,180);
glBegin(GL_QUADS);
       for(int j=0; j<7;j++)
       {
          glVertex2f(w3x1, w3y1);
          glVertex2f(w3x2, w3y1);
          glVertex2f(w3x2, w3y2);
          glVertex2f(w3x1, w3y2);

          w3x1=w3x1+0.05;
          w3x2=w3x2+0.05;

       }

   glEnd();

// 3rd floor left window inner border

glColor3ub(54,54,54);
float w33x1=-0.467f, w33x2=-0.443f, w33y1=0.177f, w33y2=0.260f;
glBegin(GL_QUADS);


        for(int j=0; j<7;j++)
       {
          glVertex2f(w33x1, w33y1);
          glVertex2f(w33x2, w33y1);
          glVertex2f(w33x2, w33y2);
          glVertex2f(w33x1, w33y2);

          w33x1=w33x1+0.05;
          w33x2=w33x2+0.05;

       }

   glEnd();

   //3rd floor window 1 left inner middle x line

   glLineWidth(2.0);
   glColor3ub(255,255,255);
   float x1=-0.467f, x2=-0.443f, y1=0.238f;
   glBegin(GL_LINES);

          for(int j=0; j<7;j++ ){
             glVertex2f(x1, y1);
             glVertex2f(x2, y1);

             x1=x1+0.05;
             x2=x2+0.05;
          }

   glEnd();

// 3rd floor left window inner line

float w333x=-.454f,w333y1=0.177f,w333y2=0.260f;
glColor3ub(255,255,255);

glLineWidth(2.0);
glBegin(GL_LINES);

        for(int i=0; i<7; i++)
        {
            glVertex2f(w333x, w333y1);
            glVertex2f(w333x, w333y2);

            w333x=w333x+0.05;
        }

glEnd();


// 3rd floor right window outer border

float w3rx1,w3rx2,w3ry1,w3ry2;
w3rx1=0.17; w3rx2=0.14; w3ry1=0.17f;w3ry2=0.265f;
glColor3ub(180,180,180);
glBegin(GL_QUADS);
       for(int j=0; j<7;j++)
       {
          glVertex2f(w3rx1, w3ry1);
          glVertex2f(w3rx2, w3ry1);
          glVertex2f(w3rx2, w3ry2);
          glVertex2f(w3rx1, w3ry2);

          w3rx1=w3rx1+0.05;
          w3rx2=w3rx2+0.05;

       }

   glEnd();




// 3rd floor right window inner border

glColor3ub(54,54,54);
float w33rx1=0.168f, w33rx2=0.146f, w33ry1=0.177f, w33ry2=0.260f;
glBegin(GL_QUADS);


        for(int j=0; j<7;j++)
       {
          glVertex2f(w33rx1, w33ry1);
          glVertex2f(w33rx2, w33ry1);
          glVertex2f(w33rx2, w33ry2);
          glVertex2f(w33rx1, w33ry2);

          w33rx1=w33rx1+0.05;
          w33rx2=w33rx2+0.05;

       }

   glEnd();

   //3rd floor window 1 left inner middle x line

   glLineWidth(2.0);
   glColor3ub(255,255,255);
   float rx1=0.168f, rx2=0.146f, ry1=0.238f;
   glBegin(GL_LINES);

          for(int j=0; j<7;j++ ){
             glVertex2f(rx1, y1);
             glVertex2f(rx2, y1);

             rx1=rx1+0.05;
             rx2=rx2+0.05;
          }

   glEnd();

// 3rd floor right window inner line

float w333rx=.157f,w333ry1=0.177f,w333ry2=0.260f;
glColor3ub(255,255,255);

glLineWidth(2.0);
glBegin(GL_LINES);

        for(int i=0; i<7; i++)
        {
            glVertex2f(w333rx, w333ry1);
            glVertex2f(w333rx, w333ry2);

            w333rx=w333rx+0.05;
        }

glEnd();
// 2nd floor left window outer border

float w2x1,w2x2,w2y1,w2y2;
w2x1=-0.47; w2x2=-0.44; w2y1=0.097;w2y2=0.132;
glColor3ub(180,180,180);
glBegin(GL_QUADS);
       for(int j=0; j<7;j++)
       {
          glVertex2f(w2x1, w2y1);
          glVertex2f(w2x2, w2y1);
          glVertex2f(w2x2, w2y2);
          glVertex2f(w2x1, w2y2);

          w2x1=w2x1+0.05;
          w2x2=w2x2+0.05;

       }

   glEnd();

// 2nd floor left window inner border

glColor3ub(54,54,54);
float w2ix1=-0.466, w2ix2=-0.444, w2iy1=0.098, w2iy2=0.127;
glBegin(GL_QUADS);


        for(int j=0; j<7;j++)
       {
          glVertex2f(w2ix1, w2iy1);
          glVertex2f(w2ix2, w2iy1);
          glVertex2f(w2ix2, w2iy2);
          glVertex2f(w2ix1, w2iy2);

          w2ix1=w2ix1+0.05;
          w2ix2=w2ix2+0.05;

       }

   glEnd();

// 2nd floor left window inner line

float w2x3=-.455,w2y3=0.098,w22y3=0.127;
glColor3ub(255,255,255);
glLineWidth(2.0);
glBegin(GL_LINES);

        for(int i=0; i<7; i++)
        {
            glVertex2f(w2x3, w2y3);
            glVertex2f(w2x3, w22y3);

            w2x3=w2x3+0.05;
        }

glEnd();

//.................................

// 2nd floor right window outer border

float w2rx1=0.17f,w2rx2=.14f,w2ry1= 0.097f,w2ry2=0.132f;
glColor3ub(180,180,180);
glBegin(GL_QUADS);

    for(int i=0; i<7; i++)
    {
      glVertex2f(w2rx1, w2ry1);
      glVertex2f(w2rx2, w2ry1);
      glVertex2f(w2rx2, w2ry2);
      glVertex2f(w2rx1, w2ry2);

      w2rx1=w2rx1+0.05;
      w2rx2=w2rx2+0.05;

    }


   glEnd();


// 2nd floor right window inner border

float w22rx1=0.168f,w22rx2=.146f,w22ry1=0.098f,w22ry2=0.127f;
 glColor3ub(54,54,54);
glBegin(GL_QUADS);

     for(int i=0; i<7; i++)
     {
          glVertex2f(w22rx1, w22ry1);
          glVertex2f(w22rx2, w22ry1);
          glVertex2f(w22rx2, w22ry2);
          glVertex2f(w22rx1, w22ry2);

          w22rx1=w22rx1+0.05;
          w22rx2=w22rx2+0.05;


     }
glEnd();

// 2nd floor right window inner line

float w222xr=.157f,w222yr1=0.098f,w222yr2=0.127f;
glLineWidth(2.0);
glColor3ub(255,255,255);
glBegin(GL_LINES);

    for(int i=0; i<7; i++)
    {

      glVertex2f(w222xr, w222yr1);
      glVertex2f(w222xr, w222yr2);

      w222xr=w222xr+0.05;
    }

glEnd();
// 1st floor left window outer border

float w1x1,w1x2,w1y1,w1y2;
w1x1=-0.47; w1x2=-0.44; w1y1=0.005;w1y2=0.035;
glColor3ub(180,180,180);
glBegin(GL_QUADS);
       for(int j=0; j<7;j++)
       {
          glVertex2f(w1x1, w1y1);
          glVertex2f(w1x2, w1y1);
          glVertex2f(w1x2, w1y2);
          glVertex2f(w1x1, w1y2);

          w1x1=w1x1+0.05;
          w1x2=w1x2+0.05;

       }

   glEnd();

// 1st floor left window inner border

glColor3ub(54,54,54);
float w11x1=-0.467f, w11x2=-0.443f, w11y1=0.007f, w11y2=0.03f;
glBegin(GL_QUADS);


        for(int j=0; j<7;j++)
       {
          glVertex2f(w11x1, w11y1);
          glVertex2f(w11x2, w11y1);
          glVertex2f(w11x2, w11y2);
          glVertex2f(w11x1, w11y2);

          w11x1=w11x1+0.05;
          w11x2=w11x2+0.05;

       }

   glEnd();

// 1st floor left window inner line

float w11lx=-.454f,wl11y1=0.007f,wl11y2=0.03f;
glColor3ub(255,255,255);

glLineWidth(2.0);
glBegin(GL_LINES);

        for(int i=0; i<7; i++)
        {
            glVertex2f(w11lx, wl11y1);
            glVertex2f(w11lx, wl11y2);

            w11lx=w11lx+0.05;
        }

glEnd();


//........................................................................................................................................................


// 1st floor right window outer border

float w1rx1,w1rx2,w1ry1,w1ry2;
w1rx1=0.17; w1rx2=0.14; w1ry1=0.005;w1ry2=0.035;
glColor3ub(180,180,180);
glBegin(GL_QUADS);
       for(int j=0; j<7;j++)
       {
          glVertex2f(w1rx1, w1ry1);
          glVertex2f(w1rx2, w1ry1);
          glVertex2f(w1rx2, w1ry2);
          glVertex2f(w1rx1, w1ry2);

          w1rx1=w1rx1+0.05;
          w1rx2=w1rx2+0.05;

       }

   glEnd();

// 1st floor right window inner border

glColor3ub(54,54,54);
float w11rx1=0.168f, w11rx2=0.146f, w11ry1=0.007f, w11ry2=0.03f;
glBegin(GL_QUADS);


        for(int j=0; j<7;j++)
       {
          glVertex2f(w11rx1, w11ry1);
          glVertex2f(w11rx2, w11ry1);
          glVertex2f(w11rx2, w11ry2);
          glVertex2f(w11rx1, w11ry2);

          w11rx1=w11rx1+0.05;
          w11rx2=w11rx2+0.05;

       }

   glEnd();

// 1st floor right window inner line

float w11lrx=.157f,wl11ry1=0.007f,wl11ry2=0.03f;
glColor3ub(255,255,255);

glLineWidth(2.0);
glBegin(GL_LINES);

        for(int i=0; i<7; i++)
        {
            glVertex2f(w11lrx, wl11ry1);
            glVertex2f(w11lrx, wl11ry2);

            w11lrx=w11lrx+0.05;
        }

glEnd();






//grass side
glBegin(GL_POLYGON);

      glColor3ub(32,164,71);

      glVertex2f(-1.0f, 0.0f);
      glVertex2f(-1.0f, -1.0);
      glVertex2f(1.0f, -1.0f);

      glVertex2f(1.0f, 0.0f);
   glEnd();


//Road base

glBegin(GL_POLYGON);

      glColor3ub(145,145,145);

      glVertex2f(-1.0f, 0.0f);
      glVertex2f(-1.0f, -0.16f);
      glVertex2f(1.0f, -0.16f);

      glVertex2f(1.0f, 0.0f);
   glEnd();
   //car parking place
   glBegin(GL_POLYGON);

      glColor3ub(124, 129, 130);

      glVertex2f(-0.58f, -0.042f);
      glVertex2f(0.58f, -0.042f);
      glVertex2f(0.50f, 0.0f);
      glVertex2f(-0.50f, 0.0f);
   glEnd();


   //Stair

glBegin(GL_POLYGON);

      glColor3ub(146, 150, 151);

      glVertex2f(-0.22f, -0.03f);
      glVertex2f(0.22f, -0.03f);
      glVertex2f(0.15f, 0.047f);
      glVertex2f(-0.15f, 0.047f);
   glEnd();


glBegin(GL_POLYGON);

      glColor3ub(146, 150, 151);

     glVertex2f(-0.22f, -0.03f);
      glVertex2f(0.22f, -0.03f);
      glVertex2f(0.15f, 0.047f);
      glVertex2f(-0.15f, 0.047f);
   glEnd();


//Stair lines
float stx1=-0.215, stx2=0.215, sty=-0.02;
glBegin(GL_LINES);
glColor3ub(255,255,255);

  for(int i=0; i<5; i++)
  {
      glVertex2f(stx1, sty);
      glVertex2f(stx2, sty);

      sty=sty+0.015;
      stx1=stx1+0.015;
      stx2=stx2-0.015;


  }


glEnd();

//Road base left right


glBegin(GL_POLYGON);

      glColor3ub(145,145,145);
      glVertex2f(-1.0f, -0.6f);
      glVertex2f(1.0f, -0.6f);

      glVertex2f(0.7f, -0.16f);

      glVertex2f(-0.7f, -0.16f);
   glEnd();

//grass middle
glBegin(GL_POLYGON);

      glColor3ub(38, 124, 17 );

      glVertex2f(-0.5f, -0.16f);
      glColor3ub(50, 174, 19 );
      glVertex2f(-0.8f, -1.0);
      glVertex2f(0.8f, -1.0f);

      glVertex2f(0.5f, -0.16);
   glEnd();


//road border middle grass
//left
glLineWidth(6.0);
glBegin(GL_LINES);

      glColor3ub(255,255,255);

      glVertex2f(-0.5f, -0.16f);//left
      glVertex2f(-0.8f, -1.0);

      glVertex2f(-0.503f, -.16f);//middle
      glVertex2f(0.503f, -0.16f);


      glVertex2f(0.5f, -0.16f);//right
      glVertex2f(0.8f, -1.0f);

      glVertex2f(-1.0f, -0.6f);//left left grass down
      glVertex2f(-0.7f, -0.16f);



      glVertex2f(-0.7f, -0.1605f);//left left grass up
      glVertex2f(-1.0f, -0.1605f);


       glVertex2f(1.0f, -0.6f);//right right grass down
      glVertex2f(0.7f, -0.16f);



      glVertex2f(0.7f, -0.1609f);//right right grass up
      glVertex2f(1.0f, -0.1609f);


      glEnd();

}

//Helicoptor







//Tent quad
void Tent(){
      glBegin(GL_POLYGON);

      glColor3ub(193, 188, 176 );

      glVertex2f(0.2f, -0.4f);
      glVertex2f(0.28f, -0.555f);
      glVertex2f(0.55f, -0.52f);

      glVertex2f(0.48f, -0.38);


      glEnd();


//Tent triangle
      glBegin(GL_POLYGON);

      glColor3ub(204, 197, 181 );

      glVertex2f(0.2f, -0.4f);
      glVertex2f(0.28f, -0.555f);
      glVertex2f(0.10f, -0.52f);

       glVertex2f(0.2f, -0.4f);


      glEnd();
//Tent triangle middle
      glBegin(GL_POLYGON);

      glColor3ub(61,37,24);

      glVertex2f(0.2f, -0.4f);
      glVertex2f(0.132f, -0.5290f);
      glVertex2f(0.22f, -0.541f);

       glVertex2f(0.2f, -0.4f);


      glEnd();




//Tent triangle line
      glBegin(GL_LINES);

      glColor3ub(0,0,0);//frontleft

      glVertex2f(0.22f, -0.38f);

      glVertex2f(0.08f, -0.52f);



      glColor3ub(0,0,0);//frontright

      glVertex2f(0.18f, -0.38f);
      glVertex2f(0.30f, -0.57f);


      glColor3ub(0,0,0);//back right

      glVertex2f(0.46f, -0.35f);
      glVertex2f(0.58f, -0.55f);

      glVertex2f(0.50f, -0.365f);
      glVertex2f(0.48f, -0.385f);

      glEnd();


}
    void Circle(GLfloat cx, GLfloat cy,GLfloat cz, GLfloat radius,int r,int g,int b)
  {
	int triangleAmount = 40;
	GLfloat twicePi = 2.0f * 3.1416;
    int counter=0;
    glColor3ub(r,g,b);
	glBegin(GL_TRIANGLE_FAN);
		glVertex3f(cx, cy,cz);
		for(int i = 0; i <= triangleAmount;i++) {
			counter+=1;
			glVertex3f(
		            cx + (radius * cos(i *  twicePi / triangleAmount)),
			    cy + (radius * sin(i * twicePi / triangleAmount)),cz
			);
		}
	glEnd();


   }
void Man_1()
{


 Circle(-0.1f,0.08f,0.0f,0.01f,243, 192, 182  );// head
 Circle(-0.1f,0.055f,0.0f,0.015f,96, 94, 128   );//body


   glBegin(GL_LINES);
      glColor3ub(0,0,0);//hair

      glVertex2f(-0.11f, 0.085f);

      glVertex2f(-0.09f, 0.085f);
     glEnd();


 glBegin(GL_QUADS);// full body

      glColor3ub(96, 94, 128);

      glVertex2f(-0.115f, 0.012f);
      glVertex2f(-0.085f, 0.012f);
      glVertex2f(-0.085f, 0.054f);

      glVertex2f(-0.115f, 0.054);


      glEnd();

   glBegin(GL_LINES);
      glColor3ub(0,0,0);//hair

      glVertex2f(-0.115f, 0.011f);

      glVertex2f(-0.085f, 0.011f);
     glEnd();

     glBegin(GL_LINES);
      glColor3ub(90, 90, 120);//hand left

      glVertex2f(-0.116f, 0.060f);

      glVertex2f(-0.116f, 0.034f);
     glEnd();

     glBegin(GL_LINES);
      glColor3ub(90, 90, 120);//hand right

      glVertex2f(-0.085f, 0.060f);

      glVertex2f(-0.085f, 0.034f);
     glEnd();
   glLineWidth(2.0);
     glBegin(GL_LINES);
      glColor3ub(180,180,180);//hand right

      glVertex2f(-0.1f, 0.037f);

      glVertex2f(-0.1f, 0.004f);
     glEnd();




}
void Man_2()
{


 Circle(0.1f,0.10f,0.0f,0.01f,210, 187, 131 );// head
 Circle(0.1f,0.075f,0.0f,0.015f,96, 94, 128 );//body

 glLineWidth(5.0);
   glBegin(GL_LINES);

      glColor3ub(0,0,0);//hair

      glVertex2f(0.11f, 0.105f);

      glVertex2f(0.09f, 0.105f);
     glEnd();


 glBegin(GL_QUADS);// full body

      glColor3ub(96, 94, 128);

      glVertex2f(0.115f, 0.032f);
      glVertex2f(0.085f, 0.032f);
      glVertex2f(0.085f, 0.074f);

      glVertex2f(0.115f, 0.074);


      glEnd();

   glBegin(GL_LINES);
      glColor3ub(0,0,0);//hair

      glVertex2f(0.115f, 0.031f);

      glVertex2f(0.085f, 0.031f);
     glEnd();

     glBegin(GL_LINES);
      glColor3ub(90, 90, 120);//hand left

      glVertex2f(0.116f, 0.080f);

      glVertex2f(0.116f, 0.054f);
     glEnd();

     glBegin(GL_LINES);
      glColor3ub(90, 90, 120);//hand right

      glVertex2f(0.085f, 0.080f);

      glVertex2f(0.085f, 0.054f);
     glEnd();
   glLineWidth(2.0);
     glBegin(GL_LINES);
      glColor3ub(180,180,180);//hand right

      glVertex2f(0.1f, 0.057f);

      glVertex2f(0.1f, 0.024f);
     glEnd();
}

void Boy_police()
{
 Circle(0.08f,-0.4f,0.0f,0.025f,88, 75, 12  );// hair
 Circle(0.1f,-0.42f,0.0f,0.014f,88, 75, 12  );// hair khopa
  Circle(0.075f,-0.405f,0.0f,0.02f,249, 236, 170 );// head
 Circle(0.075f,-0.455f,0.0f,0.027f,65, 58, 24  );//body
  glBegin(GL_QUADS);// full body
      glColor3ub(65, 58, 24);
      glVertex2f(0.05f, -.55f);
      glVertex2f(0.1f, -.55f);
      glVertex2f(0.095f, -0.45f);
      glVertex2f(0.055f, -0.45f);
      glEnd();
      glLineWidth(10.0);
      glBegin(GL_LINES);
      glColor3ub(52, 47, 27  );//hand

      glVertex2f(0.093f, -0.44f);

      glVertex2f(0.078f, -0.5f);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(249, 236, 170 );//finger

      glVertex2f(0.078f, -0.5f);
      glVertex2f(0.078f, -0.51f);
     glEnd();


}

void Boy_police2()
{
 Circle(-0.08f,-0.4f,0.0f,0.025f,88, 75, 12  );// hair
 Circle(-0.1f,-0.42f,0.0f,0.014f,88, 75, 12  );// hair khopa
  Circle(-0.075f,-0.405f,0.0f,0.02f,249, 236, 170 );// head
 Circle(-0.075f,-0.455f,0.0f,0.027f,65, 58, 24  );//body
  glBegin(GL_QUADS);// full body
      glColor3ub(65, 58, 24);
      glVertex2f(-0.05f, -.55f);
      glVertex2f(-0.1f, -.55f);
      glVertex2f(-0.095f, -0.45f);
      glVertex2f(-0.055f, -0.45f);
      glEnd();
      glLineWidth(10.0);
      glBegin(GL_LINES);
      glColor3ub(52, 47, 27  );//hand

      glVertex2f(-0.093f, -0.44f);

      glVertex2f(-0.078f, -0.5f);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(249, 236, 170 );//finger

      glVertex2f(-0.078f, -0.5f);
      glVertex2f(-0.078f, -0.51f);
     glEnd();

      glLineWidth(14.0);
      glBegin(GL_LINES);
     glColor3ub(0, 0, 0 );//shoes

      glVertex2f(-0.078f, -0.55f);
      glVertex2f(-0.080f, -0.565f);
     glEnd();


   glBegin(GL_LINES);
     glColor3ub(96, 79, 12 );//shoes

      glVertex2f(-0.070f, -0.569f);
      glVertex2f(-0.084f, -0.569f);
     glEnd();



}


GLfloat positionr = 0.0f;
GLfloat speedr = 0.03f;

void updater(int value) {

    if(positionr < -1.0)
        positionr = 1.5f;
    positionr -= speedr;
	glutPostRedisplay();

	glutTimerFunc(1000, updater, 0);
}

void rain()
{

float x=0.0;
float y=1.5;
float x1=-0.099;

     glPushMatrix();
    glTranslatef(positionr,0,0);
    Circle(-0.58f,0.75f,0.0f,0.060f,47,79,79);//left cloud
    Circle(-0.5f,0.82f,0.0f,0.068f,47,79,79);
    Circle(-0.42f,0.75f,0.0f,0.068f,47,79,79);//right cloud
    Circle(-0.5f,0.72f,0.0f,0.07f,47,79,79);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(positionr,0,0);
    Circle(-0.16f,0.69f,0.0f,0.060f,47,79,79);
    Circle(-0.08f,0.76f,0.0f,0.068f,47,79,79);
    Circle(0.0f,0.68f,0.0f,0.068f,47,79,79);
    Circle(-0.08f,0.652f,0.0f,0.07f,47,79,79);


    glPopMatrix();

    glColor3ub(255,255,255);
    glPushMatrix();
    glTranslatef(0.0f,positionr,0.0f);
    glBegin(GL_LINES);

    for(int i=600;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            glVertex3f(x,y,0);
            glVertex3f(x+0.05,y+0.09,0);
            x+=float(rand()%5)/10;
           // x-=rand()%1050;
        }
        for(int j=0;j<=i;j++)
        {
            glVertex3f(x1,y,0);
            glVertex3f(x1+0.05,y+0.09,0);
            //x+=rand()%1050;
            x1-=float(rand()%5)/10;
        }
        y+=float(rand()%10)/10;
        //y-=rand()%15;
        x=0.0;
        x1=-0.099;

    }
    glEnd();
    glPopMatrix();
    glutPostRedisplay();

}




GLfloat position7 = 1.0f;
GLfloat positionY7 = 1.0f;
GLfloat speed7 = 0.02f;


float temp = 0.0;
void update7(int value) {

    if(position7  < -0.3f  || temp == 1.0){
        temp=1.0;
       // speed7 = 0.00f;
       positionY7 += speed7;
         position7 -= speed7;
        glutPostRedisplay();

    }
    else if(temp == 0){
    position7 -= speed7;
    positionY7 -= speed7;
	glutPostRedisplay();
    }



	glutTimerFunc(100, update7, 0);

}





void Helicoptor() {
   //glClear(GL_COLOR_BUFFER_BIT);
   //glLoadIdentity();
glPushMatrix();
glTranslatef(position7,positionY7,0);

  //glEnd();
//helicopter  stand 1
    glBegin(GL_QUADS);
    glColor3ub(128, 124, 124);
    glVertex2f(0.22f, 0.30f);
    glVertex2f(0.22f, 0.20f);
    glVertex2f(0.24f, 0.20f);
    glVertex2f(0.24f, 0.30f);

//helicopter  stand 2
    glBegin(GL_QUADS);
    glColor3ub(128, 124, 124);
    glVertex2f(0.26f, 0.30f);
    glVertex2f(0.26f, 0.19f);
    glVertex2f(0.28f, 0.19f);
    glVertex2f(0.28f, 0.30f);



    //helicopter  stand 3
    glBegin(GL_QUADS);
    glColor3ub(128, 124, 124);
    glVertex2f(0.16f, 0.22f);
    glVertex2f(0.16f, 0.20f);
    glVertex2f(0.34f, 0.20f);
    glVertex2f(0.34f, 0.22f);


//helicopter  stand 4
    glBegin(GL_QUADS);
    glColor3ub(128, 124, 124);
    glVertex2f(0.16f, 0.19f);
    glVertex2f(0.16f, 0.17f);
    glVertex2f(0.34f, 0.17f);
    glVertex2f(0.34f, 0.19f);




   glEnd();


//helicopter border
  HCircle(0.25f,0.38f,0.0f,0.105f,25, 27, 28  );
//helicopter
  HCircle(0.25f,0.38f,0.0f,0.1f,94, 103, 112 );

// below turbine
glBegin(GL_QUADS);
      glColor3ub(182, 179, 178);

        glVertex2f(0.23f, 0.48f);
        glVertex2f(0.27f, 0.48f);
        glVertex2f(0.27f, 0.51f);
        glVertex2f(0.23f, 0.51f);


   glEnd();



// tail
 glBegin(GL_TRIANGLES);
      glColor3ub(94, 103, 112 );
      glVertex2f(0.37f, 0.33f);
      glVertex2f(0.73f, 0.300f);
       glVertex2f(0.37f, 0.40f);



   glEnd();



//tail tail

 glBegin(GL_QUADS);
      glColor3ub(94, 103, 112 );

        glVertex2f(0.68f, 0.310f);
        glVertex2f(0.73f, 0.300f);
        glVertex2f(0.78f, 0.34f);
        glVertex2f(0.73f, 0.36f);


   glEnd();



//turbine1

 glRotatef(position7,0,0.0,0.1);
 glBegin(GL_QUADS);
      glColor3ub(80, 84, 88);

        glVertex2f(-0.11f, 0.47f);
        glVertex2f(-0.09f, 0.44f);
        glVertex2f(0.62f, 0.55f);
        glVertex2f(0.6f, 0.58f);


   glEnd();


    glBegin(GL_QUADS);
      glColor3ub(80, 84, 88);
         glVertex2f(-0.11f, 0.55f);
        glVertex2f(-0.09f, 0.58f);
        glVertex2f(0.62f, 0.47f);
        glVertex2f(0.6f, 0.44f);



   glEnd();

 //helicopter turbine
 MCircle(0.25f,0.53f,0.0f,0.03f,22, 25, 28  );

//helicopter Triangle window
    glBegin(GL_TRIANGLES);
      glColor3ub(104, 167, 233 );
        glVertex2f(0.12f, 0.38f);
        glVertex2f(0.23f, 0.38f);
        glVertex2f(0.23f, 0.45f);


   glEnd();
//helicopter  window
    glBegin(GL_QUADS);
      glColor3ub(104, 167, 233);
      glVertex2f(0.24f, 0.38f);
      glVertex2f(0.33f, 0.38f);
      glVertex2f(0.33f, 0.45f);
      glVertex2f(0.24f, 0.45f);

glEnd();
glPopMatrix();


}
void dayview()
{
    glBegin(GL_QUADS);// full body
      glColor3ub(218, 228, 245);
      glVertex2f(-1.0f, 0.0f);
      glColor3ub(245, 244, 218 );
      glVertex2f(1.0f, 0.0f);
      glColor3ub(132, 209, 243 );
      glVertex2f(1.0f, 0.7f);
      glColor3ub(120, 186, 250 );
      glVertex2f(-1.0f, 0.7f);
      glEnd();
}
void night()
{
      glBegin(GL_POLYGON);// full body
      glColor3ub(61, 61, 61 );
      glVertex2f(-1.0f, 0.0f);
      glColor3ub(31, 29, 32 );
      glVertex2f(1.0f, 0.0f);
      glColor3ub(31, 29, 32 );
      glVertex2f(1.0f, 0.2f);
      glColor3ub(116, 115, 117 );
      glVertex2f(-1.0f, 0.1f);
      glColor3ub(95, 95, 96 );
      glVertex2f(-1.0f, 0.3f);
      glColor3ub(14, 13, 14 );
      glVertex2f(1.0f, 0.2f);
      glColor3ub(216, 216, 216 );
      glVertex2f(1.0f, 0.6f);
      glColor3ub(237, 233, 239 );
      glVertex2f(-1.0f, 0.6f);
      glEnd();
      glBegin(GL_POINT);
      glColor3ub(255, 255, 255  );
      glVertex2f(0.0f, 0.3f);
      glEnd();

}




//-----------------------------------ZAHIN-----------------------------------Start--------------------------//

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.002f;

void update2(int value) {

    if(position2 < -1.0)
        position2 = 1.5f;
    position2 -= speed2;
	glutPostRedisplay();

	glutTimerFunc(100, update2, 0);
}

GLfloat position3 =  1.4f;
GLfloat speed3 = 0.02f;

void update3(int value) {

if(position3 == 0.2)
        {
        //glutDisplayFunc(diplayday1_2);
        //speed3 = 0.00f;
     }

    position3 -= speed3;
	glutPostRedisplay();

	glutTimerFunc(100, update3, 0);
}



GLfloat position8 = 1.6f;
GLfloat speed8 = 0.02f;

void update8(int value) {
   if(position8 < 0.00)
        speed8 = 0.00f;

    position8 -= speed8;
	glutPostRedisplay();

	glutTimerFunc(100, update8, 0);
}



GLfloat position4 = -1.5f;
GLfloat speed4 = 0.02f;

void update4(int value) {   //left to right

    if(position4 > -0.2){
        speed4 = 0.00f;
    }
        //position4 = -1.5f;
    position4 += speed4;
	glutPostRedisplay();
	glutTimerFunc(10, update4, 0);
}


GLfloat position5 = 1.0f;
GLfloat speed5 = 0.05f;

void update5(int value) {

    if(position5 < 0.0){
        speed5 = 0.00f;
    }
        //position5 = 1.5f;

    position5 -= speed5;
	glutPostRedisplay();

	glutTimerFunc(10, update5, 0);
}
//Red car by Zahin



GLfloat position6 = 1.5f;
GLfloat speed6 = 0.01f;

void update6(int value) {
    if(position6 < -1.0)
        position6 = 1.5f;
    position6 -= speed6;
	glutPostRedisplay();

	glutTimerFunc(1000, update6, 0);
}






void car1(){
glPushMatrix();
glTranslatef(position2,0,0);
glBegin(GL_POLYGON);

glBegin(GL_POLYGON); //car_bottom
glColor3ub(255,0,0);
glVertex3f(-0.3,-0.05,0);
glVertex3f(-0.3,-0.08,0);
glVertex3f(-0.45,-0.08,0);
glVertex3f(-0.45,-0.05,0);
glEnd();


glBegin(GL_TRIANGLES); //car_bottom
glColor3ub(145,145,145);

glVertex3f(-0.45,-0.05,0);
glVertex3f(-0.45,-0.06,0);
glVertex3f(-0.443,-0.05,0);
glEnd();

glBegin(GL_POLYGON); //car_font
glColor3ub(255,0,0);
glVertex3f(-0.32,-0.025,0);
glVertex3f(-0.3,-0.05,0);
glVertex3f(-0.43,-0.05,0);
glVertex3f(-0.415,-0.025,0);
glEnd();

glBegin(GL_POLYGON); //car_top_roof
glColor3ub(0,0,0);
glVertex3f(-0.33,-0.015,0);
glVertex3f(-0.33,-0.025,0);
glVertex3f(-0.4,-0.025,0);
glVertex3f(-0.4,-0.015,0);
glEnd();

glBegin(GL_POLYGON); //car_font_window
glColor3ub(0,0,0);
glVertex3f(-0.37,-0.03,0);
glVertex3f(-0.37,-0.05,0);
glVertex3f(-0.42,-0.05,0);
glVertex3f(-0.408,-0.03,0);
glEnd();

glBegin(GL_POLYGON); //car_back_window
glColor3ub(0,0,0);
glVertex3f(-0.325,-0.03,0);
glVertex3f(-0.31,-0.05,0);
glVertex3f(-0.36,-0.05,0);
glVertex3f(-0.36,-0.03,0);
glEnd();

glBegin(GL_POLYGON);   //wheel1
glColor3f(0.0f, 0.0f, 0.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.33f+.018*cos(theta),-0.08f+.016*sin(theta));

}
glEnd();
glBegin(GL_POLYGON);   //wheel2
glColor3f(0.0f, 0.0f, 0.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.4f+.018*cos(theta),-0.08f+.016*sin(theta));

}
glEnd();
glPopMatrix();

}




void car2(){   //trek
glPushMatrix();
glTranslatef(position3,0,0);
glBegin(GL_POLYGON);

glBegin(GL_POLYGON); //car_bottom
glColor3ub(145,145,0);
glVertex3f(0.0,-0.03,0);
glVertex3f(0.0,0.0,0);
glVertex3f(-0.23,0.0,0);
glVertex3f(-0.23,-0.03,0);
glEnd();


glBegin(GL_POLYGON); //car_box
glColor3ub(145,145,0);

glVertex3f(0.0,0.0,0);
glVertex3f(0.0,0.05,0);
glVertex3f(-0.13,0.05,0);
glVertex3f(-0.13,0.0,0);
glEnd();


glBegin(GL_POLYGON); //car_plus
glColor3f(1.0f, 1.0f, 1.0f);
glVertex3f(-0.05,0.01,0);
glVertex3f(-0.05,0.04,0);
glVertex3f(-0.06,0.04,0);
glVertex3f(-0.06,0.01,0);
glEnd();

glBegin(GL_POLYGON); //car_plus
glColor3f(1.0f, 1.0f, 1.0f);
glVertex3f(-0.04,0.02,0);
glVertex3f(-0.04,0.03,0);
glVertex3f(-0.07,0.03,0);
glVertex3f(-0.07,0.02,0);
glEnd();



glBegin(GL_POLYGON); //car_font
glColor3ub(145,145,0);

glVertex3f(-0.13,0.0,0);
glVertex3f(-0.13,0.03,0);
glVertex3f(-0.17,0.03,0);
glVertex3f(-0.195,0.0,0);
glEnd();

glBegin(GL_POLYGON); //car_font_glass
glColor3ub(0,0,0);
glVertex3f(-0.135,0.005,0);
glVertex3f(-0.135,0.025,0);
glVertex3f(-0.167,0.025,0);
glVertex3f(-0.185,0.005,0);
glEnd();


glBegin(GL_POLYGON); //car_light
glColor3ub(255,0,0);
glVertex3f(-0.15,0.03,0);
glVertex3f(-0.15,0.04,0);
glVertex3f(-0.16,0.04,0);
glVertex3f(-0.16,0.03,0);
glEnd();


glBegin(GL_POLYGON);   //wheel1
glColor3f(0.0f, 0.0f, 0.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.19f+0.022*cos(theta),-0.035f+.020*sin(theta));

}

/*glBegin(GL_POLYGON);   //center_wheel1
glColor3f(1.0f, 1.0f, 0.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.19f+0.012*cos(theta),-0.035f+.012*sin(theta));

}*/

glEnd();
glBegin(GL_POLYGON);   //wheel1
glColor3f(0.0f, 0.0f, 0.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.05f+0.022*cos(theta),-0.035f+.020*sin(theta));

}
glEnd();
glPopMatrix();

}



//Red car by Zahin
void car3(){
glPushMatrix();
glTranslatef(position2,0,0);
glBegin(GL_POLYGON);

glBegin(GL_POLYGON); //car_bottom
glColor3ub(255,244,0);
glVertex3f(0.3,-0.05,0);
glVertex3f(0.3,-0.08,0);
glVertex3f(0.15,-0.08,0);
glVertex3f(0.15,-0.05,0);
glEnd();


glBegin(GL_TRIANGLES); //car_bottom
glColor3ub(145,145,145);

glVertex3f(0.15,-0.05,0);
glVertex3f(0.15,-0.06,0);
glVertex3f(0.16,-0.05,0);

glEnd();

glBegin(GL_POLYGON); //car_top
glColor3ub(255,244,0);
glVertex3f(0.28,-0.025,0);
glVertex3f(0.3,-0.05,0);
glVertex3f(0.17,-0.05,0);
glVertex3f(0.2,-0.025,0);
glEnd();

glBegin(GL_POLYGON); //car_top_roof
glColor3f(1.0f, 0.5f, 0.0f);
glVertex3f(0.28,-0.015,0);
glVertex3f(0.28,-0.025,0);
glVertex3f(0.2,-0.025,0);
glVertex3f(0.2,-0.015,0);
glEnd();

glBegin(GL_POLYGON); //car_font_window
glColor3ub(0,0,0);
glVertex3f(0.23,-0.03,0);
glVertex3f(0.23,-0.05,0);
glVertex3f(0.18,-0.05,0);
glVertex3f(0.20,-0.03,0);
glEnd();

glBegin(GL_POLYGON); //car_back_window
glColor3ub(0,0,0);
glVertex3f(0.235,-0.03,0);
glVertex3f(0.235,-0.05,0);
glVertex3f(0.285,-0.05,0);
glVertex3f(0.27,-0.03,0);
glEnd();

glBegin(GL_POLYGON);   //wheel1
glColor3f(0.0f, 0.0f, 0.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(0.19f+.018*cos(theta),-0.08f+.016*sin(theta));

}
glEnd();
glBegin(GL_POLYGON);   //wheel2
glColor3f(0.0f, 0.0f, 0.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(0.27f+.018*cos(theta),-0.08f+.016*sin(theta));

}
glEnd();
glPopMatrix();

}




void cloud2(){
glPushMatrix();
glTranslatef(position2,0,0);
glBegin(GL_POLYGON);   //cloud1
glColor3f(1.0f,1.0f,1.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(0.27f+.05*cos(theta),0.55f+.04*sin(theta));
}
glEnd();
glBegin(GL_POLYGON);   //cloud1
glColor3f(1.0f,1.0f,1.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(0.32f+.05*cos(theta),0.55f+.05*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);   //cloud1
glColor3f(1.0f,1.0f,1.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(0.37f+.05*cos(theta),0.55f+.04*sin(theta));
}
glEnd();



glBegin(GL_POLYGON);   //cloud2
glColor3f(1.0f,1.0f,1.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.1f+.06*cos(theta),0.55f+.05*sin(theta));
}
glEnd();
glBegin(GL_POLYGON);   //cloud2
glColor3f(1.0f,1.0f,1.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.15f+.05*cos(theta),0.55f+.04*sin(theta));
}
glEnd();
glBegin(GL_POLYGON);   //cloud3
glColor3f(1.0f,1.0f,1.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.7f+.06*cos(theta),0.5f+.05*sin(theta));
}
glEnd();
glBegin(GL_POLYGON);   //cloud3
glColor3f(1.0f,1.0f,1.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.75f+.06*cos(theta),0.45f+.05*sin(theta));
}
glEnd();

glPopMatrix();
}




void carP1(){
glPushMatrix();
glTranslatef(position5,0,0);
glBegin(GL_POLYGON);

glBegin(GL_POLYGON); //car_bottom
glColor3f(1.0f,1.0f,1.0f);
glVertex3f(0.35,-0.09,0);
glVertex3f(0.35,-0.11,0);
glVertex3f(0.15,-0.11,0);
glVertex3f(0.15,-0.09,0);
glEnd();


glBegin(GL_TRIANGLES); //car_bottom_tri
glColor3ub(145,145,145);
glVertex3f(0.15,-0.1,0);
glVertex3f(0.15,-0.09,0);
glVertex3f(0.16,-0.09,0);
glEnd();

glBegin(GL_POLYGON); //car_font_bar
glColor3f(0.0f,0.0f,0.0f);
glVertex3f(0.15,-0.105,0);
glVertex3f(0.15,-0.11,0);
glVertex3f(0.14,-0.11,0);
glVertex3f(0.14,-0.105,0);
glEnd();

glBegin(GL_TRIANGLES); //car_bottom_tri
glColor3ub(145,145,145);
glVertex3f(0.35,-0.1,0);
glVertex3f(0.35,-0.09,0);
glVertex3f(0.34,-0.09,0);
glEnd();

glBegin(GL_POLYGON); //car_top
glColor3f(1.0f,1.0f,1.0f);
glVertex3f(0.30,-0.065,0);
glVertex3f(0.32,-0.09,0);
glVertex3f(0.18,-0.09,0);
glVertex3f(0.20,-0.065,0);
glEnd();

glBegin(GL_POLYGON); //car_top_light
glColor3ub(255,0,0);
glVertex3f(0.26,-0.058,0);
glVertex3f(0.26,-0.065,0);
glVertex3f(0.24,-0.065,0);
glVertex3f(0.24,-0.058,0);
glEnd();


glLineWidth(3.0);
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);  // line_door
glVertex2f(0.245f, -0.09f);
glVertex2f(0.245f,-0.11f);
glEnd();



glBegin(GL_POLYGON); //car_bottom
glColor3ub(0,0,0);
glVertex3f(0.245,-0.069,0);
glVertex3f(0.245,-0.085,0);
glVertex3f(0.19,-0.085,0);
glVertex3f(0.205,-0.069,0);
glEnd();

glBegin(GL_POLYGON); //car_bottom
glColor3ub(0,0,0);
glVertex3f(0.295,-0.069,0);
glVertex3f(0.31,-0.085,0);
glVertex3f(0.25,-0.085,0);
glVertex3f(0.25,-0.069,0);
glEnd();

glBegin(GL_POLYGON);   //wheel2
glColor3f(0.0f, 0.0f, 0.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(0.30f+.017*cos(theta),-0.115f+.015*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);   //wheel2
glColor3f(0.0f, 0.0f, 0.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(0.30f+.017*cos(theta),-0.115f+.015*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);   //wheel1
glColor3f(0.0f, 0.0f, 0.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(0.2f+.017*cos(theta),-0.115f+.015*sin(theta));
}
glEnd();


glPopMatrix();

}



void cloud1(){
glPushMatrix();
glTranslatef(position2,0,0);
glBegin(GL_POLYGON);   //cloud1
glColor3ub(227, 226, 228 );
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(0.27f+.05*cos(theta),0.55f+.04*sin(theta));
}
glEnd();
glBegin(GL_POLYGON);   //cloud1
glColor3ub(239, 238, 240 );
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(0.32f+.05*cos(theta),0.55f+.05*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);   //cloud1
glColor3ub(220, 229, 233 );
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(0.37f+.05*cos(theta),0.55f+.04*sin(theta));
}
glEnd();



glBegin(GL_POLYGON);   //cloud2
glColor3ub(145,145,145);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.1f+.06*cos(theta),0.55f+.05*sin(theta));
}
glEnd();
glBegin(GL_POLYGON);   //cloud2
glColor3ub(145,145,145);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.15f+.05*cos(theta),0.55f+.04*sin(theta));
}
glEnd();
glBegin(GL_POLYGON);   //cloud3
glColor3ub(145,145,145);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.7f+.06*cos(theta),0.5f+.05*sin(theta));
}
glEnd();
glBegin(GL_POLYGON);   //cloud3
glColor3ub(145,145,140);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.75f+.06*cos(theta),0.45f+.05*sin(theta));
}
glEnd();

glPopMatrix();
}


void carP2(){
glPushMatrix();
glTranslatef(position4,0,0);

glBegin(GL_POLYGON); //car_bottom
glColor3f(1.0f,1.0f,1.0f);
glVertex3f(0.0,-0.04,0);
glVertex3f(0.0,-0.02,0);
glVertex3f(-0.2,-0.02,0);
glVertex3f(-0.2,-0.04,0);
glEnd();

glBegin(GL_POLYGON); //car_top
glColor3f(1.0f,1.0f,1.0f);
glVertex3f(-0.02,-0.02,0);
glVertex3f(-0.03,-0.0,0);
glVertex3f(-0.16,0.0,0);
glVertex3f(-0.175,-0.02,0);
glEnd();

glBegin(GL_POLYGON); //car_top_light
glColor3ub(255,0,0);
glVertex3f(-0.08,-0.00,0);
glVertex3f(-0.08,0.01,0);
glVertex3f(-0.11,0.01,0);
glVertex3f(-0.11,0.00,0);
glEnd();

glBegin(GL_POLYGON); //car_font_bar
glColor3f(0.0f,0.0f,0.0f);
glVertex3f(0.0,-0.04,0);
glVertex3f(0.0,-0.03,0);
glVertex3f(0.012,-0.03,0);
glVertex3f(0.012,-0.04,0);
glEnd();


glBegin(GL_POLYGON); //car_window
glColor3ub(0,0,0);
glVertex3f(-0.1,-0.015,0);
glVertex3f(-0.1,-0.-0.004,0);
glVertex3f(-0.155,-0.004,0);
glVertex3f(-0.164,-0.015,0);
glEnd();

glBegin(GL_POLYGON); //car_window
glColor3ub(0,0,0);
glVertex3f(-0.03,-0.015,0);
glVertex3f(-0.035,-0.004,0);
glVertex3f(-0.09,-0.004,0);
glVertex3f(-0.09,-0.015,0);
glEnd();

glLineWidth(4.0);
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);  // line_door
glVertex2f(-0.095f, -0.02f);
glVertex2f(-0.095f,-0.04f);
glEnd();

glBegin(GL_POLYGON);   //wheel2
glColor3f(0.0f, 0.0f, 0.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.15f+.017*cos(theta),-0.045f+.015*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);   //wheel1
glColor3f(0.0f, 0.0f, 0.0f);
for(int i=0;i<360;i++){
    float theta=i*3.142/180;
    glVertex2d(-0.05f+.017*cos(theta),-0.045f+.015*sin(theta));
}
glEnd();



glPopMatrix();

}



void fucntionRain(float a,float b,float c){

glLineWidth(2.0);
glBegin(GL_LINES);
glColor3f(1.0f,1.0f,1.0f);  // line_door
glVertex2f(c, a);
glVertex2f(c,b);
glEnd();

}

void Rain1(){
glPushMatrix();
glTranslatef(0,position6,0);
glBegin(GL_POLYGON);

GLfloat b = 1.0f;
GLfloat a = 1.01f;
GLfloat c = 1.0f;

for(int i=0;i<40;i++)
{
    for(int i=0;i<100;i++)
    {
        fucntionRain(a,b,c);
        a=a-0.07f;
        b=b-0.07f;
    }
    b = 1.0f;
a = 1.01f;
c =c-.14f;
}




glPopMatrix();

}


void resetSpreedPostion(){
position7 = 1.0f;
speed7 = 0.007f;
position2 = 0.0f;
speed2 = 0.01f;
position3 =  1.5f;
speed3 = 0.04f;
position4 = -1.5f;
speed4 = 0.05f;
position5 = 1.0f;
speed5 = 0.05f;
position6 = 0.0f;
speed6 = 0.03f;
//b = 1.0f;
//a = 1.01f;
//c =1.0f;
}



/*GLfloat position7 = 1.0f;
GLfloat positionY7 = 1.0f;
GLfloat speed7 = 0.02f;


float temp = 0.0;
void update7(int value) {

    if(position7  < -0.3f  || temp == 1.0){
        temp=1.0;
        positionY7 += speed7;
         position7 -= speed7;
        glutPostRedisplay();

    }
    else if(temp == 0){
    position7 -= speed7;
    positionY7 -= speed7;
	glutPostRedisplay();
    }



	glutTimerFunc(100, update7, 0);

}*/



GLfloat positionX9 = 1.4f;
GLfloat positionY9 = 1.3f;
GLfloat speed9 = 0.02f;


float temp2 = 0.0;
void update9(int value) {

    if(positionX9  < -0.1f ){
        temp2=1.0;
        positionY9 = -0.25f;
        //positionX9 = 0.00f;
        speed9 = 0.00f;
        //glutPostRedisplay();

    }

    positionX9 -= speed9;
    positionY9 -= speed9;
	glutPostRedisplay();




	glutTimerFunc(100, update9, 0);

}


void Rober_2()
{

glPushMatrix();
glTranslatef(positionX9,positionY9,0);
glBegin(GL_POLYGON);


 Circle(-0.1f,0.08f,0.0f,0.01f,243, 192, 182  );// head
 Circle(-0.1f,0.055f,0.0f,0.015f,81,81,81   );//body


   glBegin(GL_LINES);
      glColor3ub(0,0,0);//hair

      glVertex2f(-0.11f, 0.085f);

      glVertex2f(-0.09f, 0.085f);
     glEnd();


 glBegin(GL_QUADS);// full body

      glColor3ub(81, 81, 81);

      glVertex2f(-0.115f, 0.012f);
      glVertex2f(-0.085f, 0.012f);
      glVertex2f(-0.085f, 0.054f);

      glVertex2f(-0.115f, 0.054);


      glEnd();

   glBegin(GL_LINES);
      glColor3ub(0,0,0);//hair

      glVertex2f(-0.115f, 0.011f);

      glVertex2f(-0.085f, 0.011f);
     glEnd();

     glBegin(GL_LINES);
      glColor3ub(82, 82, 82);//hand left

      glVertex2f(-0.116f, 0.060f);

      glVertex2f(-0.116f, 0.034f);
     glEnd();

     glBegin(GL_LINES);
      glColor3ub(82, 82, 82);//hand right

      glVertex2f(-0.085f, 0.060f);

      glVertex2f(-0.085f, 0.034f);
     glEnd();
   glLineWidth(2.0);
     glBegin(GL_LINES);
      glColor3ub(233, 55, 8);//hand right

      glVertex2f(-0.1f, 0.037f);

      glVertex2f(-0.1f, 0.004f);
     glEnd();

      glColor3ub(0, 0, 0);//gun

      glVertex2f(-0.1f, 0.037f);

      glVertex2f(-0.1f, 0.004f);
     glEnd();

     glPopMatrix();

}

void Rober_1()
{

glPushMatrix();
glTranslatef(position8,0,0);
glBegin(GL_POLYGON);


 Circle(-0.1f,0.08f,0.0f,0.01f,243, 192, 182  );// head
 Circle(-0.1f,0.055f,0.0f,0.015f,233, 55, 8    );//body


   glBegin(GL_LINES);
      glColor3ub(0,0,0);//hair

      glVertex2f(-0.11f, 0.085f);

      glVertex2f(-0.09f, 0.085f);
     glEnd();


 glBegin(GL_QUADS);// full body

      glColor3ub(233, 55, 8);

      glVertex2f(-0.115f, 0.012f);
      glVertex2f(-0.085f, 0.012f);
      glVertex2f(-0.085f, 0.054f);

      glVertex2f(-0.115f, 0.054);


      glEnd();

   glBegin(GL_LINES);
      glColor3ub(0,0,0);//hair

      glVertex2f(-0.115f, 0.011f);

      glVertex2f(-0.085f, 0.011f);
     glEnd();

     glBegin(GL_LINES);
      glColor3ub(233, 55, 8);//hand left

      glVertex2f(-0.116f, 0.060f);

      glVertex2f(-0.116f, 0.034f);
     glEnd();

     glBegin(GL_LINES);
      glColor3ub(233, 55, 8);//hand right

      glVertex2f(-0.085f, 0.060f);

      glVertex2f(-0.085f, 0.034f);
     glEnd();
   glLineWidth(2.0);
     glBegin(GL_LINES);
      glColor3ub(233, 55, 8);//hand right

      glVertex2f(-0.1f, 0.037f);

      glVertex2f(-0.1f, 0.004f);
     glEnd();

      glColor3ub(0, 0, 0);//gun

      glVertex2f(-0.1f, 0.037f);

      glVertex2f(-0.1f, 0.004f);
     glEnd();

     glPopMatrix();

}


void displayday(void)
{

glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.71, 0.93, 0.99, 1.0);
//glLoadIdentity();
dayview();
building();
Rober_1();
car2();
car1();
car3();
cloud1();
Rain1();

glFlush();  // Render now


}

void yo(){

}
void displayday2(void)
{

glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.71, 0.93, 0.99, 1.0);
//glLoadIdentity();
dayview();
building();
Tent();
Boy_police();
Boy_police2();
carP1();
carP2();
cloud2();
Man_1();
Man_2();
Rober_2();
Helicoptor();

//rain();
glFlush();  // Render now

}
void displayday3(void)
{

glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.71, 0.93, 0.99, 1.0);
//glLoadIdentity();
speed4 = 0.00f;
speed5 = 0.00f;
position5 = 0.0f;
position4 = -0.2f;
night();
building();
Tent();
//Boy_police();
//Boy_police2();
carP1();
carP2();
cloud2();
//Man_1();
//Man_2();
//Helicoptor();
rain();
glFlush();  // Render now

}




void functionaaa(){
glutInitWindowSize(1500,1200); // set window size
glutInitWindowPosition(0, 0); // set window upper left corner position on screen
glutCreateWindow("My First Attempt"); // open the screen window (Title: My First Attempt)

myInit(); // additional initializations as necessary
glutTimerFunc(1000, update2, 0);
glutTimerFunc(1000, update3, 0);
glutTimerFunc(1000, update4, 0);
glutTimerFunc(1000, update5, 0);
//glTranslatef(0.0f,positionr,0.0f);
glutTimerFunc(100, update6, 0);
glutTimerFunc(100, update8, 0);


}

void functionaaa2(){
glutInitWindowSize(1500,1200); // set window size
glutInitWindowPosition(0, 0); // set window upper left corner position on screen
glutCreateWindow("My First Attempt"); // open the screen window (Title: My First Attempt)

myInit(); // additional initializations as necessary
glutTimerFunc(1000, update2, 0);
glutTimerFunc(1000, update3, 0);
glutTimerFunc(1000, update4, 0);
glutTimerFunc(1000, update5, 0);

//glTranslatef(0.0f,positionr,0.0f);
glutTimerFunc(100, update6, 0);
glutTimerFunc(100, update7, 0);
glutTimerFunc(100, update7, 0);
glutTimerFunc(100, update8, 0);
glutTimerFunc(100, update9, 0);
//glutTimerFunc(10, update10, 0);

}

void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
case 'a':
    speed3 = 0.0f;
    break;
case 'w':
    speed3 = 0.04f;
   // glutTimerFunc(1000, update3, 0);
    break;
case 'r':
    position3 = 1.5f;
    break;
case 'h':
   // speed7 = 0.0f;
    break;
case '1':
    resetSpreedPostion();
    glutDestroyWindow(1);
    functionaaa();
    glutKeyboardFunc(handleKeypress);
    glutDisplayFunc(displayday);
    break;
case '2':
    resetSpreedPostion();
    glutDestroyWindow(1);
    functionaaa2();
    glutTimerFunc(10, update7, 0);
    glutKeyboardFunc(handleKeypress);
    glutDisplayFunc(displayday2);
    break;
    case '3':
    resetSpreedPostion();
    glutDestroyWindow(1);
    functionaaa();
    glutKeyboardFunc(handleKeypress);
    glutDisplayFunc(displayday3);
    break;
glutPostRedisplay();
    }}


//-----------------------------------ZAHIN-----------------------------------END--------------------------//


int main(int iArgc, char** cppArgv)

{

glutInit(&iArgc, cppArgv); // initialize the toolkit

glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set the display mode

glutInitWindowSize(1500,1200); // set window size
glutInitWindowPosition(0, 0); // set window upper left corner position on screen
glutCreateWindow("Money_Heist"); // open the screen window (Title: My First Attempt)

// register the callback functions

glutDisplayFunc(displayday);

myInit(); // additional initializations as necessary
glutTimerFunc(1000, update2, 0);
glutTimerFunc(1000, update3, 0);
glutTimerFunc(1000, update4, 0);
glutTimerFunc(1000, update5, 0);
glutTimerFunc(1000, update5, 0);
//glTranslatef(0.0f,positionr,0.0f);
glutTimerFunc(100, update6, 0);
glutTimerFunc(100, update8, 0);

//glutTimerFunc(100, update7, 0);
//glutTimerFunc(100, update9, 0);
//glutTimerFunc(10, update10, 0);
glutKeyboardFunc(handleKeypress);
glutMainLoop(); // go into a endless loop

return 0;

}
