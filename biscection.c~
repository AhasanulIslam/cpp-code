#include<stdio.h>
#include<math.h>
#define EPS 1.0e-6

double f(double x)
{
	return sin(x)-cos(x);
}

double bisec(double a, double b)
{
	double root;

	if(!(f(a)*f(b))<0) return 0;

	while(1)
	{
		double xnot = (a+b)/2.0; 
		
		if(fabs(f(xnot))<=EPS)
		{
			
			return xnot;
			return 0;
		}

		if((f(a)*f(xnot))<0) 
			b = xnot;
		else
		 	a = xnot;
		 	
		 	
		
	}

}



int main()
{
	double a,b,x,y1,y2,h;
	a = bisec(0, 3.14159),b = bisec(3.14159, 2*3.14159);
    h = (b-a)/200;
    
	printf("\"x\", \"f(x)\", \"g(x)\"\n");
	
	for(int i=0; i<=200; i++)
	{
		x = a+i*h;
		y1 = sin(x);
		y2 = cos(x);
		
		printf("%lf, %lf, %lf\n",x,y1,y2);
		//printf("%d, %lf, %lf\n",i, bisec(0, 3.14159), bisec(3.14159, 2*3.14159));

	}
	
	
	return 0;
}
