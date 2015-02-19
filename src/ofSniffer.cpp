#include "ofSniffer.h"
#include <iostream>
#include <stdio.h>
#include <pcap.h>

ofSniffer::ofSniffer()
{
    // brew installed programs don't run
    //system("ngrep -d en1");
}


void ofSniffer::update(float time)
{
    
  
    
    
    if (time <= 0)
    {
        //getline(cin, line);
        //linesArray.push_back(line);
        
        //for (std::string line; std::getline(std::cin, line);) {
            //std::cout << line << std::endl;
          //  linesArray.push_back(line);
            //cout << line << endl;
        //}
    }
    
    
    
    
}

void ofSniffer::draw(int x, int y)
{
    
    for (int i = 0; i < linesArray.size(); i++)
    {
        
        ofDrawBitmapStringHighlight(linesArray[i], x, y);
        
    }
    
    ofDrawBitmapString( "Lines: " + ofToString( linesArray.size() ), 15, 60 );
    
}
