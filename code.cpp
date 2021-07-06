#include<iostream>
#include<cmath>
#include<graphics.h>
int s;
using namespace std;
void door(int xc, int yc)
{	int i;
	setcolor(BROWN);
	for(i=0;i<5;i++)
	{	
	ellipse(xc*s,yc*s,0,180,i*s,53*s);
	}
}
void cloud(int x, int y, int r=10)
{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	circle(x,y,r);//top
	floodfill(x,y,LIGHTBLUE);
	circle(x-10,y+5,r);//left
	floodfill(x-10,y+5,LIGHTBLUE);
	circle(x+10,y+5,r);//right
	floodfill(x+10,y+5,LIGHTBLUE);
	circle(x,y+10,r);//down
	floodfill(x,y+10,LIGHTBLUE);

}
void struc_mazar()
{	
	initwindow(200*s,200*s);
	arc(75*s, 40*s, 0, 180, 35*s);
	ellipse(75*s, 40*s, 0, 180, 35*s, 15*s);
	//small windows on left
	//1
	arc(103.5*s,40*s,22.5,202.5,2.5*s);
	line(105.5*s,39*s,105.5*s,44*s);//106
	line(101*s,40*s,101*s,42*s);
	//2
	arc(97.5*s,38*s,22.5,202.5,2.5*s);
	line(99.5*s,37*s,99.5*s,41*s);
	line(95*s,38*s,95*s,39.5*s);
	//3
	arc(91.5*s,36*s,22.5,202.5,2.5*s);
	line(93.5*s,35*s,93.5*s,39*s);
	line(89*s,36*s,89*s,36*s);
	//small windows on right
	//1
	arc(46.5*s,40*s,22.5,202.5,2.5*s);
	line(44*s,40*s,44*s,44*s);//106
	line(48.5*s,39*s,48.5*s,42*s);
	//2
	arc(53.5*s,38*s,22.5,202.5,2.5*s);
	line(51*s,38*s,51*s,41*s);
	line(55.5*s,37*s,55.5*s,39*s);
	//3
	arc(60.5*s,36*s,22.5,202.5,2.5*s);
	line(58*s,36*s,58*s,38*s);
	line(62.5*s,35*s,62.5*s,36*s);

	//right small uper straight line
	line(120*s,45*s,120*s,50*s);
	//left small uper straight line
	line(30*s,45*s,30*s,50*s);
	//tomb left straight line
	line(40*s,39.9*s,40*s,45.9*s);
	//tomb right straight line
	line(110*s,39.9*s,110*s,45.9*s);
	//line from tomb to building left
	line(40*s,45.9*s,30*s,45*s);
	//line from tomb to building left
	line(110*s,45.9*s,120*s,45*s);
	//left
	//straight line
	line(20*s,50*s,20*s,120*s);//1 
	line(75*s,25*s,75*s,140*s);//2
	line(65*s,35*s,65*s,30*s);
	//bottom lines
	line(20*s,120*s,75*s,140*s);
	line(130*s,120*s,75*s,140*s);
	//boundary
	line(1*s,122*s,75*s,152*s);
	line(150*s,120*s,75*s,152*s);
	line(1*s,122*s,20*s,115*s);
	line(150*s,120*s,130*s,115*s);
	//slope
	line(20*s,50*s,30*s,45*s);
	line(30*s,50*s,65*s,35*s);
	line(65*s,30*s,75*s,25*s);
	//right
	line(130*s,50*s,130*s,120*s);//straight line at last
	line(85*s,35*s,85*s,30*s);
	//slope
	line(130*s,50*s,120*s,45*s);
	line(120*s,50*s,85*s,35*s);
	line(85*s,30*s,75*s,25*s);	   		        
}
int main()
{	cout<<"How much do you want to scale?"<<endl;
	cin>>s;
	struc_mazar();
	//door
	//right
	door(105,130);
	//left
	door(45,130);
	//cloud
	if(s<3)
	{	
	cloud(10,10); cloud(20,20); cloud(50,50); cloud(60,40);
	cloud(70,40); cloud(300,20); cloud(310,30); cloud(290,40);
	cloud(280,50); cloud(330,40); cloud(250,50); cloud(30,30);
	cloud(10,40);
	}
	getch();
}
