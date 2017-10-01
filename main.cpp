#include "2drobots.h"
#define rndp (pos(gen))
#define rndv (vel(gen))
#define rnda (ang(gen))
#define rndw (wei(gen))
using namespace std;

int main(){
    vector<robot> R(numrobots);
    vector<feed> F(numfeeds);
                for(int x=0 ; x<Bsize ; x++){
                for(int y=0 ; y<Bsize ; y++){
                    for(int z=0 ; z<Bsize ; y++){
                        printf("robot0 Brain: %.2f\n",R[1].brain[x][y][z]);
                    }
                }
            }
    weighttrain(R,F);
    return 0;
}
