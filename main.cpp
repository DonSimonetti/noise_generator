#include <iostream>
#include <png++/png.hpp>
#include <random>

uint8_t noise(uint32_t pX, uint32_t pY);

int main()
{
    using namespace std;

    png::image<png::rgb_pixel> image(128,128);

    srand(time(nullptr));

    for(int i=0;i<image.get_height();i++)
    {
        for(int j=0;j<image.get_width();j++)
        {
            image[i][j].red=noise(i,j);
            image[i][j].blue=noise(i,j);
        }
    }

    image.write("noise.png");
    return 0;
}

uint8_t noise(uint32_t pX, uint32_t pY)
{
    return (pX+pY)/256.0*255*(random()%20)/20;
}