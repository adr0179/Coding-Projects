#include "methods.cpp"
#include "physicsObjColl.cpp"

int main() {
    srand(time(NULL));
    cout << "how many?" << endl;
    int num_of_pos;
    cin >> num_of_pos;
    PhysicsObjectCollection coll = PhysicsObjectCollection(num_of_pos);
    PhysicsObject* pos = new PhysicsObject[num_of_pos];
    for (int i = 0; i < num_of_pos; i++) {
        cout << pos[i].toString() << endl;
    }

    cout << "------------------------------------------------------------------------" << endl;

    coll.setPhyObj(pos);
    PhysicsObject newPhy = PhysicsObject(55, 37, 20, 100);
    PhysicsObject newPhy2 = PhysicsObject(40, 27, 10, 75);
    coll.addPhysicsObject(newPhy);
    coll.addPhysicsObject(newPhy2);

    for (int i = 0; i < coll.getSize(); i++) {
        cout << coll.getPhyObj()[i].toString() << endl;
    }

    cout << "------------------------------------------------------------------------" << endl;

    coll.deletePhyObj(&newPhy2);

    for (int i = 0; i < coll.getSize(); i++) {
        cout << coll.getPhyObj()[i].toString() << endl;
    }

    delete[] pos;
}