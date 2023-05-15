clc;
deff('z=f(x,y)','z=2+sqrt(x*y)') 
x0=0; y0=1; h=0.1; x=0.3;

n = (x - x0) / h;
y = y0;

for i = 1:n
    y = y + h * f(x0, y);
    x0 = x0 + h;
end

disp(['The value of y at x=', string(x), ' is: ', string(y)]);
