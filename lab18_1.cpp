#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1 , Rect R2){
	double left,right,up,low,width,height;
	left  = max(R1.x,R2.x);
	right = min(R1.x+R1.w,R2.x+R2.w);
	up = min(R1.y,R2.y);
	low = max(R1.y-R1.h,R2.y-R2.h);

	width = right-left;
	height = up-low;
	if(width <= 0 and height <= 0) return 0; 
	else return width*height;

}

int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);
	
	return 0;
}
