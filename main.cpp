#include <iostream>
#include <png++/png.hpp>
#include <random>

int main()
{
    using namespace std;

    png::image<png::rgb_pixel> image(16,16);


    for(int i=0;i<image.get_height();i++)
    {
        for(int j=0;j<image.get_width();j++)
        {
            image[i][j].red=static_cast<uint8_t>(random()%255);
        }
    }

    image.write("noise.png");

    return 0;
}
