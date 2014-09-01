#ifndef TONE_WRAPPER_H
#define TONE_WRAPPER_H

//#include "QueueList.h"

namespace nanpy {
class ToneWrapper {

    private:

        int pin;
    
//    char* notes[100];
//    int noteCount;
    
//        String header;
//        QueueList<String> notes;
    
    public:

        ToneWrapper(int pin) : pin(pin), noteCount(0) {}
    void play(int note, int duration);
    void playRTTTL(int songIndex);
    void testRTTTL();
    void testString(char* song);
    void testInt(int song);
        void stop(void);
    
//    void startRTTTL(char* song);
//    void addRTTTLNote(char* song);
//    void playStreamedRTTTL(void);
    
    

};
}

#endif
