#ifndef _VREP_HPP_
#define _VREP_HPP_

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

namespace vrep
{
    class VREP
    {
    private:
        int clientID;
    public:
        VREP();
        int getClientId();
        int getObjectNumber();
        void sendStatusMessage(string message);
        void getObjectHandle(string name, int * handle);
        void setJointVelocity(int jointHandle, float targetVelocity);
        void setJointVelocity(string jointName, float targetVelocity);
        void setJointPosition(int jointHandle, float targetPosition);
        void setJointPosition(string jointName, float targetPosition);

        void getJointPosition(int jointHandle, float * currentPosition);
        void getJointPosition(string jointName, float * currentPosition);
        float getJointPosition(int jointHandle);
        void getJointVelocity(int jointHandle, float * currentVelocity);
        void getJointVelocity(string jointName, float * currentVelocity);

        void getPosition(string objectName, string objectNameRelative, float * position);
        void getOrientation(string objectName, string objectNameRelative, float * orientation);

        int createDummy(float size, const unsigned char * color);
        void setPosition(int objectHandle, float * position);
        void setOrientation(int objectHandle, float * orientation);
        bool getToggleButtonState(string uiName, int uiButtonID);
    };
}

#endif