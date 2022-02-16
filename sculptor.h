#ifndef SCULPTOR_H
#define SCULPTOR_H

#include "Voxel.h"
#include <string>

class Sculptor{
private:
  Voxel ***m; // 3D matrix
  int nx,ny,nz; // Dimensions of a cube
  float r,g,b; // Current drawing color
  float a; // Transparency
  float lado; // Auxiliary variables
  float delta;
  int i, j, k, x,y,z;

public:
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  void alocar();
  void liberar();

  void setColor(float r, float g, float b, float a);
  void limpaVoxels(void);
  void putVoxel(int x0, int y0, int z0);
  void cutVoxel(int x0, int y0, int z0);

  void writeOFF(char* v);

};

#endif // SCULPTOR_H
