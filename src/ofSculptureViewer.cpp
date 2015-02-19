#include "ofSculptureViewer.h"

ofSculptureViewer::ofSculptureViewer(string objectFileName)
{
    model.loadModel(objectFileName);
    model.setScale(0.5, 0.5, 0.5);
    
    rotationType = 0;
    rotationAngle = 0.0;
    rotationX = 0;
    rotationY = 2;
    rotationZ = 0;
}

void ofSculptureViewer::update()
{
    rotationAngle += 0.75;
    if (rotationAngle >= 360.0) {
        rotationAngle = 0.0;
    }
}

void ofSculptureViewer::draw(int x, int y)
{
    model.setPosition(x, y, 0);
    model.setRotation(rotationType, rotationAngle, rotationX, rotationY, rotationZ);
    model.draw(OF_MESH_WIREFRAME);
}
