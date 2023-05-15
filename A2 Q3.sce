clc;
deff('z=f(x,y)','z=x+y') 
x0=0; y0=1; h=1; x1=1;
//Applying Runge kutta method
k1=h*f(x0,y0);
disp('k1='+string(k1));
k2=h*f(x0+h/2,y0+k1/2);
disp('k2='+string(k2));
k3=h*f(x0+h/2,y0+k2/2);
disp('k3='+string(k3));
k4=h*f(x0+h,y0+k3);
disp('k4='+string(k4));
k=(k1+2*k2+2*k3+k4)/6;
disp('k='+string(k));
y1=y0+k;
disp('y1=y0+k='+string(y1));
