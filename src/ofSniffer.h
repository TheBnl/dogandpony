#ifndef _OF_SNIFFER
#define _OF_SNIFFER

#include "ofMain.h"

class ofSniffer : public ofThread {
    
public:
    
    ofSniffer();
    
    void update();
    void draw(int x, int y);
    
    void threadedFunction() {
        
        while(isThreadRunning())
        {
            
            for (string line; getline(std::cin, line);)
            {
                //text += line + "\n";
                inputLines.push_back(line);
            }
            
        }
        
    }
    
private:
    
    ofTrueTypeFont inputFont;
    
    string text;
    std::vector<string> inputLines;
    
};

#endif