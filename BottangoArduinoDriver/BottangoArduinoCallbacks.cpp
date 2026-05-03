#include "BottangoArduinoCallbacks.h"
#include "src/AbstractEffector.h"
#include "src/Log.h"
#include "src/Outgoing.h"
#include "src/BottangoCore.h"

extern volatile int pendingAnimation;

namespace Callbacks
{
    void onThisControllerStarted() {}
    void onThisControllerStopped() {}

    void onEarlyLoop()
    {
        if (pendingAnimation >= 0) {
            int anim = pendingAnimation;
            pendingAnimation = -1;
            BottangoCore::commandStreamProvider->startCommandStream(anim, false);
        }
    }

    void onLateLoop() {}
    void onEffectorRegistered(AbstractEffector *effector) {}
    void onEffectorDeregistered(AbstractEffector *effector) {}
    void effectorSignalOnLoop(AbstractEffector *effector, int signal, bool didChange) {}
    void onCurvedCustomEventMovementChanged(AbstractEffector *effector, float newMovement) {}
    void onOnOffCustomEventOnOffChanged(AbstractEffector *effector, bool on) {}
    void onTriggerCustomEventTriggered(AbstractEffector *effector) {}
    void onColorCustomEventColorChanged(AbstractEffector *effector, byte newRed, byte newGreen, byte newBlue) {}
    bool isStepperAutoHomeComplete(AbstractEffector *effector) { return false; }
}