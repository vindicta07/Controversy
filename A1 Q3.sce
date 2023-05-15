clc;
deff('y=f(x)','y=sin(x)-log(x)+exp(x)') 
a=0.2; b=1.4; n=12; h=(b-a)/n;

s = f(a) + f(b);
for i = 1:n-1
    x = a + i*h;
    if (modulo(i,3) == 0)
        s = s + 2*f(x);
    else
        s = s + 3*f(x);
    end
end

I = 3*h/8 * s;
disp(['The approximate value of the integral is: ', string(I)]);
