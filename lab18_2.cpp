#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *data1,Rect *data2){
	double x1,y1,x2,y2,Maxx,Maxy,Minx,Miny;
	x1 = data1->x+data1->w;
	y1 = data1->y-data1->h;
	x2 = data2->x+data2->w;
	y2 = data2->y-data2->h;
	Maxx = max(data1->x,data2->x);
	Maxy = max(y1,y2);
	Minx = min(x1,x2);
	Miny = min(data2->y,data1->y);
	if((Minx-Maxx)*(Miny-Maxy)>0)
		return (Minx-Maxx)*(Miny-Maxy);
	else
		return 0;
}
