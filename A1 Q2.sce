clc;
deff('y=f(x)','y=sin(sqrt(x))') 
a=0; b=%pi/2; n=10; h=(b-a)/n;

s = f(a) + f(b);
for i = 1:n-1
    x = a + i*h;
    if (modulo(i,2) == 0)
        s = s + 2*f(x);
    else
        s = s + 4*f(x);
    end
end

I = h/3 * s;
disp(['The approximate value of the integral is: ', string(I)]);
