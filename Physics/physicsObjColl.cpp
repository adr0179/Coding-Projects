#include "physicsObj.cpp"

class PhysicsObjectCollection {
    private:
        PhysicsObject* phyObj = nullptr;
        int size;
    public:
        PhysicsObjectCollection(int s) : size(s) {phyObj = new PhysicsObject[size];}
        ~PhysicsObjectCollection() {delete[] phyObj; cout << "Collection Deleted" << endl;}
        void setPhyObj(PhysicsObject* pos) {phyObj = pos;}
        PhysicsObject* getPhyObj() {return phyObj;}
        int getSize() {return size;}

        void addPhysicsObject(PhysicsObject po) {
            PhysicsObject* newPO = new PhysicsObject[size + 1];

            for (int i = 0; i < size; i++) {
                newPO[i] = phyObj[i];
            }

            delete[] phyObj;
            phyObj = newPO;
            phyObj[size] = po;
            size++;
        }

        void deletePhyObj(PhysicsObject* phyPtr) {
            PhysicsObject* newPO = new PhysicsObject[size - 1];
            int newIndx = 0;
            
            for (int i = 0; i < size; i++) {
                if (phyObj[i] == *phyPtr) {
                    cout << "Skipped" << endl;
                    continue;
                }

                newPO[newIndx++] = phyObj[i];
            }

            delete[] phyObj;
            phyObj = newPO;
            size--;
        }
};