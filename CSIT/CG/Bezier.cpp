#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#define max 10
using namespace std;
int facto(int n){
	if(n==0){
		return 1;
	}else{
		return n*(facto(n-1));
	}
}
float Combi(int n,int i){
	if(n<i){
		cout<<"invalid";
	}else{
	return facto(n)/(facto(n-i)*facto(i));
}
}
float C(int a[max],int n,int i,float u){

	float sum=0;
	int j;
	for(j=i;j<=n;j++){
			sum=sum+(a[j]*Combi(n,j)*pow(u,j)*pow(1-u,n-j));
		}
	return sum;
	}
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int n,k;
	int i=0;
	cout<<"Enter number of control points: ";
	cin>>n;
	int x[n-1],y[n-1];
	cout<<"Enter control points (one pair at a time): "<<endl;
	for(k=0;k<n;k++){
		cin>>x[k]>>y[k];
	}
	
	double q;
	for(q=0.0;q<1.0;q=q+0.0005){
		double xp,yp;
		xp=C(x,n-1,i,q);
		yp=C(y,n-1,i,q);
		putpixel(xp,yp,WHITE);
	}
	int w;
	for(w=0;w<n;w++){
		putpixel(x[w],y[w],RED);
	}
	getch();
	closegraph();
	return 0;
}	
