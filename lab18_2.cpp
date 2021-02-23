#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double max(double x,double y){
	if(x>y){
		return x;
	}else{
		return y;
	}
}
double min(double x,double y){
	if(x<y){
		return x;
	}else{
		return y;
	}
}

double overlap(Rect *R1, Rect *R2){
	double hn,wn;
	wn = min(R1->x+R1->w , R2->x+R2->w) - max(R1->x ,R2->x); 
	if(wn < R1->x) wn = 0;
	hn = min(R1->y ,R2->y) - max(R1->y - R1->h , R2->y - R2->h); 
	
	
	
	return hn*wn;

}
