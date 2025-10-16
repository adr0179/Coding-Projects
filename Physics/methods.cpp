#include "physicsObj.cpp"

string getComb(PhysicsObject p1, PhysicsObject p2) {
    p2.setProp(p1.getX()+p2.getX(), p1.getY()+p2.getY(), p1.getZ()+p2.getZ(), p1.getMass()+p2.getMass());
    return p2.toString();
}

void setRand(PhysicsObject &po) {
    po.setProp(rand()%1000+1, rand()%1000+1, rand()%1000+1, rand()%100+1);
}

double* getMomentem(const PhysicsObject &po) {
    double* arr = new double[3];
    arr[0] = po.getX() * po.getMass(); 
    arr[1] = po.getY() * po.getMass(); 
    arr[2] = po.getZ() * po.getMass(); 
}