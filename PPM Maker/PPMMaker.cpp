#include <fstream>
using namespace std;
const int width = 0, height = 0;
//set width and height to desired values
int PixelMap[height][width][3];
//set PixelMap equal to a 3 dimensional array of RGB values
int main(){
    ofstream img ("SampleImage.ppm");
    img << "P3" << endl;
    img << width << " " << height << endl;
    img << "255" << endl;

    for (int y = 0; y < height; y++){
        for (int x = 0; x < width; x++){
            int r = PixelMap[y][x][0];
            int g = PixelMap[y][x][1];
            int b = PixelMap[y][x][2];

            img << r << " " << g << " " << b << endl;
        }
    }
    return 0;
}
