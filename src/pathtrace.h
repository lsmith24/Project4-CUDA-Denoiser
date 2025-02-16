#pragma once

#include <vector>
#include "scene.h"

void pathtraceInit(Scene *scene);
void pathtraceFree();
void pathtrace(int frame, int iteration);
void showGBuffer(uchar4 *pbo);
void showImage(uchar4 *pbo, int iter);
void showDenoised(uchar4* pbo, int iter, float cPhi, float nPhi, float pPhi, int ui_filterSize);
