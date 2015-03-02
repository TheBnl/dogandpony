#include "ofSlideManager.h"

ofSlideManager::ofSlideManager()
{
    currentSlide = 1;
    
    /*
     * THE MAN IN THE MIDDLE
     *
     * Voorstellen, veel tijd kwijt aan het opstarten van de tcpdump stream.
     *
     * Hello, my name is Bram de Leeuw and i want to be your man in the middle.
     * Eventueel beginnen aan slide 2
     */
    std::vector<string> slideOneTitles;
    slideOneTitles.push_back("THE MAN IN THE MIDDLE");
    slideOneTitles.push_back("THE MAN IN THE MIDDLE");
    slideOne = new ofSlide(slideOneTitles, "");
    
    /*
     * WE ARE DEPENDENT
     *
     * Our lives have become dependent of the connection between our laptops, phones, tablets and even in the near future between or washing machines, 
     * kitchen appliances and house hold robotics. These devices keep a constant connection to the internet while collecting massive amounts of data. 
     * This data flows through the air to a wifi router connecting it to fiber optic cables sending it to data centers all over the world.
     */
    std::vector<string> slideTwoTitles;
    slideTwoTitles.push_back("WE ARE");
    slideTwoTitles.push_back("DEPENDENT");
    slideTwo = new ofSlide(slideTwoTitles, "02.png");
    
    /*
     * WHAT IS A MAN IN THE MIDDLE
     *
     * A man in the middle sits in between the connection from your device to the wireless router. 
     * Or as NSA spies do, between the Internet Service Provider and the datacenters.
     * But i’m not going to swerve on that topic. I want to be your Man in the Middle,
     * and i’m going to sit in between your device and the connection you requested.
     */
    std::vector<string> slideThreeTitles;
    slideThreeTitles.push_back("WHAT IS A");
    slideThreeTitles.push_back("MAN IN THE MIDDLE");
    slideThree = new ofSlide(slideThreeTitles, "03.png");

    /*
     * DON'T BE EVIL
     *
     * But do not worry that i will steal your identity by Session Hijacking you, 
     * or steal you passwords by removing the ssl encryption with SSL Strip.
     * No, i want to reverse hack you. I want to make this invisible process visible.
     * And explain it in an accessible and fun way.
     */
    std::vector<string> slideFourTitles;
    slideFourTitles.push_back("DON\'T");
    slideFourTitles.push_back("BE");
    slideFourTitles.push_back("EVIL");
    slideFour = new ofSlide(slideFourTitles, "04.png");
    
    /*
     * HI I WANT TO CONNECT TO THE HOME NETWORK!
     *
     * I have a device in possession capable of doing a lot of evil. But i'm not going to use it for evil. 
     * This device is called a WiFi Pineapple, and makes network hacking a piece of cake.
     * First of all your phone’s or any other wifi capable device is constantly looking for networks it has been previously connected to.
     */
    std::vector<string> slideFiveTitles;
    slideFiveTitles.push_back("ARE YOU THE");
    slideFiveTitles.push_back("HOME NETWORK?");
    slideFive = new ofSlide(slideFiveTitles, "05.png");
    
    /*
     * HI YEAH SURE I'M THE HOME NETWORK
     *
     * It does this by constantly shouting out the network name like “hi i want to connect to the home network! are you the home network?”
     * And my device responds with “hi yeah sure i’m the home network” and so a connection is established while you do not even know it happend.
     */
    std::vector<string> slideSixTitles;
    slideSixTitles.push_back("HI YEAH SURE");
    slideSixTitles.push_back("I\'M THE HOME NETWORK");
    slideSix = new ofSlide(slideSixTitles, "06.png");
    
    /*
     * CONNECT, ALTER, SEND BACK
     *
     * After the connection is established i can see the data flowing trough my device, a user requests a page and i could send something else back.
     * At this point the user becomes part of my intervention.
     * I want to create a work that invites or actually forces viewer into participate,
     * by partisapating i want to educate the viewer about the networking / hacking proceses that are happening.
     */
    std::vector<string> slideSevenTitles;
    slideSevenTitles.push_back("CONNECT");
    slideSevenTitles.push_back("ALTER");
    slideSevenTitles.push_back("SEND BACK");
    slideSeven = new ofSlide(slideSevenTitles, "07.png");
    
    /*
     * PIRATES AND PEERS
     *
     * Last Februari i went to the Transmediale in Berlin, for me it was a good opportunity to see what other artist,
     * scientist and thinkers were doing with the rapid developing field of technology.
     * What for me especially was nice to see, where the artist impressions related to the subject.
     * A project that struck me was the pirate cinema, this is an example of a project that shows in a accessible way
     * how the hidden process of peer to peer networking compute.
     */
    std::vector<string> slideEightTitles;
    slideEightTitles.push_back("PIRATES");
    slideEightTitles.push_back("AND");
    slideEightTitles.push_back("PEERS");
    slideEight = new ofSlide(slideEightTitles, "08.png");
    
    /*
     * ENLIGHTEND L33T HAX0RS
     *
     * The same simple way the pirate cinema explains how peer to peer networks work i want to use to explain how hacking works. 
     * It does not mean that i will end up with an installation looking like that of the pirate cinema but i hope the viewer 
     * will leave my exhibition a little bit more enlightened in the subject of hacking than when they entered.
     */
    std::vector<string> slideNineTitles;
    slideNineTitles.push_back("ENLIGHTEND");
    slideNineTitles.push_back("L33T HAX0RS");
    slideNine = new ofSlide(slideNineTitles, "09.png");
    
    /*
     * THANKS YOU FOR LISTENING!
     *
     * I want to thank you al for listening and i hope to see you all in July!
     */
    std::vector<string> slideTenTitles;
    slideTenTitles.push_back("ALL YOUR DATA");
    slideTenTitles.push_back("BELONGS TO ME!");
    slideTen = new ofSlide(slideTenTitles, "");

}

void ofSlideManager::update(float time)
{
    if (time <= 0)
    {
        currentSlide++;
    }
    
    switch (currentSlide) {
        case 1:
            slideOne->update();
            break;
        case 2:
            slideTwo->update();
            break;
        case 3:
            slideThree->update();
            break;
        case 4:
            slideFour->update();
            break;
        case 5:
            slideFive->update();
            break;
        case 6:
            slideSix->update();
            break;
        case 7:
            slideSeven->update();
            break;
        case 8:
            slideEight->update();
            break;
        case 9:
            slideNine->update();
            break;
        case 10:
            slideTen->update();
            break;
        case 11:
            cout << "TERMINATE APP!" << endl;
            std::exit(0);
            break;
            
        default:
            break;
    }
}

void ofSlideManager::draw()
{
    switch (currentSlide) {
        case 1:
            slideOne->draw();
            break;
        case 2:
            slideTwo->draw();
            break;
        case 3:
            slideThree->draw();
            break;
        case 4:
            slideFour->draw();
            break;
        case 5:
            slideFive->draw();
            break;
        case 6:
            slideSix->draw();
            break;
        case 7:
            slideSeven->draw();
            break;
        case 8:
            slideEight->draw();
            break;
        case 9:
            slideNine->draw();
            break;
        case 10:
            slideTen->draw();
            break;
            
        default:
            break;
    }
}
