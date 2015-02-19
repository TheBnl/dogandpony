#ifndef _OF_SNIFFER
#define _OF_SNIFFER

#include "ofMain.h"

class ofSniffer : public ofThread {
  
public:
    
    ofSniffer();
    
    void update(float time);
    void draw(int x, int y);
    
    void threadedFunction() {
        
        // start
        
        while(isThreadRunning()) {
            
            for (std::string line; std::getline(std::cin, line);) {
                linesArray.push_back(line);
                cout << line << endl;
            }
                
            //cout << "thread running!";
        }
        
        // done
    }
    
    
    
private:
    string line;
    std::vector<string> linesArray;
};

#endif