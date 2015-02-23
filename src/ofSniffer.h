#ifndef _OF_SNIFFER
#define _OF_SNIFFER

#include "ofMain.h"

class ofSniffer : public ofThread {
    
public:
    
    ofSniffer();
    
    void update();
    void draw(int x, int y);
    
    std::vector<string> cropArray(vector<string> array, int cropAt);
    
    void threadedFunction() {
        
        while(isThreadRunning())
        {
            
            for (string line; getline(std::cin, line);)
            {
                //if (!line.empty()) {
                lock();
                inputLines.push_back(line);
                unlock();
                //}
            }
            
        }
        
    }
    
private:
    
    ofTrueTypeFont inputFont;
    
    string text;
    std::vector<string> inputLines;
    
};

#endif