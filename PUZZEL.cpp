#include <graphics.h>
void puzzel ();
int main(){
	int gd=DETECT, gm;
	initgraph(&gd,&gm, (char*)"");
	int x=100;int y=275;int X=400;int Y=225;int r=15;int i=2;
	while (x!=X||(y>=250||y<=200)){
		setcolor(WHITE);
		puzzel();
		setcolor(RED);
		circle (x,y,r);
		if(GetAsyncKeyState(VK_RIGHT)){ x=x+i;}
		else if(GetAsyncKeyState(VK_LEFT))	{x=x-i;}
		else if(GetAsyncKeyState(VK_UP))	{y=y-i;}
		else if(GetAsyncKeyState(VK_DOWN)) {y=y+i;}
	delay(10);
	cleardevice();
	}
	setcolor(WHITE);
	puzzel();
	setcolor(GREEN);
	circle(x,y,r);
	system("pause");
	
	return 0;
	
}

void puzzel(){
		line(100,100,400,100);
	line(100,400,400,400);
	line(100,100,100,250);
	line(100,300,100,400);
	line(400,400,400,250);
	line(400,100,400,200);
	line(150,100,150,250);
	line(100,300,150,300);
	line(150,350,200,350);
	line(200,200,200,350);
	line(200,200,250,200);
	line(250,100,250,150);
	line(250,200,250,400);
	line(300,100,300,200);
	line(300,250,300,350);
	line(300,350,350,350);
	line(350,200,350,350);
	line(350,200,400,200);
}
 
