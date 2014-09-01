#include "cfg.h"

#if USE_Tone

#include <Arduino.h>
#include "ToneClass.h"
#include <stdlib.h>

const char* nanpy::ToneClass::get_firmware_id()
{
    return "Tone";
}



void nanpy::ToneClass::elaborate( nanpy::MethodDescriptor* m ) {
        ObjectsManager<ToneWrapper>::elaborate(m);

        if (strcmp(m->getName(),"new") == 0) {
            v.insert(new ToneWrapper (m->getInt(0)));
            m->returns(v.getLastIndex());
        }

        if (strcmp(m->getName(), "play") == 0) {
            v[m->getObjectId()]->play(m->getInt(0), m->getInt(1));
            m->returns(0);
        }

    if (strcmp(m->getName(), "playRTTTL") == 0) {
        v[m->getObjectId()]->playRTTTL(m->getInt(0));
        m->returns(0);
    }

    if (strcmp(m->getName(), "testRTTTL") == 0) {
        v[m->getObjectId()]->testRTTTL();
        m->returns(0);
    }

    if (strcmp(m->getName(), "testString") == 0) {
        v[m->getObjectId()]->testString(m->getString(0));
        m->returns(0);
    }

    if (strcmp(m->getName(), "testInt") == 0) {
        v[m->getObjectId()]->testInt(m->getInt(0));
        m->returns(0);
    }
    
        if (strcmp(m->getName(), "stop") == 0) {
            v[m->getObjectId()]->stop();
            m->returns(0);
        }
    
//    
//    if (strcmp(m->getName(), "startRTTTL") == 0) {
//        v[m->getObjectId()]->startRTTTL(m->getString(0));
//        m->returns(0);
//    }
//    
//    if (strcmp(m->getName(), "addRTTTLNote") == 0) {
//        v[m->getObjectId()]->addRTTTLNote(m->getString(0));
//        m->returns(0);
//    }
//    
//    if (strcmp(m->getName(), "playStreamedRTTTL") == 0) {
//        v[m->getObjectId()]->playStreamedRTTTL();
//        m->returns(0);
//    }
    
};
#endif
