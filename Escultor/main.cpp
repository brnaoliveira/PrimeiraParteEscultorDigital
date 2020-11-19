#include <iostream>
#include <Sculptor.h>
#include <string>
using namespace std;
char* TesteEsculptor = "Escultura";
int main()
{
    Sculptor escultura(200,200,200);
    escultura.setColor(193.5546,169,0,0);
    cout <<"Numero de voxels: "<<escultura.numE<<endl;
    escultura.putVoxel(0,0,0);
    escultura.setColor(150,193.5546,0,0);
    escultura.putBox(1,5,1,5,1,5);
    //escultura.cutBox(1,4,1,4,1,4);
    escultura.putSphere(10,10,10,15);
    //escultura.cutSphere(3,3,3,1);
    escultura.putEllipsoid(100,100,100,20,20,20);
    //escultura.cutEllipsoid(3,3,3,1,2,3);
    escultura.writeOFF(TesteEsculptor);
}
