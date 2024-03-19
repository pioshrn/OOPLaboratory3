#include <iostream>
#include "ComplexNumber.h"
#include "ComplexNumber.cpp"
void display_mandelbrot( int width, int height, int max_its)
{
    const float x_start = -3.0f;
    const float x_fin = 1.0f;
    const float y_start = -1.0f;
    const float y_fin = 1.0f;
    double dx = (x_fin - x_start)/(width - 1);
    double dy = (y_fin - y_start)/(height - 1);
    for(int y = 0; y < height; ++y)
    {
        for(int x = 0; x < width; ++x)
        {
// TODO your code here
// create complex number z = 0 + 0i
ComplexNumber z(0,0);
// create complex number c = x_start+ x*dx + (y_start+y*dy)i
ComplexNumber c(x_start+x*dx,y_start+y*dy);
            int iteration = 0;
// while |z| < 2 and we haven't reach max_its
            while(z.magnitude()<2 and ++iteration < max_its){
// apply the rule: z = z*z + c
z=z*z+c;
            }
// TODO: your code here (modify the code to display the mandelbrot

            if(iteration == max_its){
                std::cout << "\033[1;33;41mbold yellow text with red background\033[0m\n";
            }else{
                std::cout<<( "-");
            }
        }
        std::cout<<("\n");
    }
}
int main()
{
    display_mandelbrot(100, 25, 100);

    return 0;
}
