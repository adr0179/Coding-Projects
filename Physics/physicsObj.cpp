#include<iostream>
#include<string>
#include<ctime>
#pragma once
using namespace std;

class PhysicsObject;
void setRand(PhysicsObject &po);

class PhysicsObject {
    private:
        double vel_x, vel_y, vel_z;
        double mass;
    public:
        PhysicsObject(double x, double y, double z, double m): vel_x(x), vel_y(y), vel_z(z), mass(m) {}
        PhysicsObject(){setRand(*this);}
        double getX() const {return vel_x;}
        double getY() const {return vel_y;}
        double getZ() const {return vel_z;}
        double getMass() const {return mass;}
        void setProp(double x, double y, double z, double m) {
            vel_x = x;
            vel_y = y;
            vel_z = z;
            mass = m;
        }
        string toString() const {
            string res = "properties:\n";
            res += "x vel: " + to_string(vel_x);
            res += " y vel: " + to_string(vel_y);
            res += " z vel: " + to_string(vel_z);
            res += " mass: " + to_string(mass);
            return res;
        }

        bool operator==(const PhysicsObject &other) {
            if (vel_x == other.getX() && vel_y == other.getY() && vel_z == other.getZ() && mass == other.getMass()) {
                return true;
            }

            return false;
        }
};