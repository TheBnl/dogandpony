#include "ofSlideManager.h"

ofSlideManager::ofSlideManager()
{
    currentSlide = 1;
    
    /*
     * Create slide 1
     *
     * Introductie over het onderwerp, veel tijd kwijt aan het opstarten van de tcpdump stream
     */
    std::vector<string> slideOneTitles;
    slideOneTitles.push_back("THE MAN IN THE MIDDLE");
    slideOneTitles.push_back("THE MAN IN THE MIDDLE");
    slideOne = new ofSlide(slideOneTitles, "testImages/image.png");
    
    /*
     * Create slide 2
     *
     * Notes
     */
    std::vector<string> slideTwoTitles;
    slideTwoTitles.push_back("DIT IS DE");
    slideTwoTitles.push_back("TWEEDE SLIDE");
    slideTwo = new ofSlide(slideTwoTitles, "testImages/image.png");
    
    /*
     * Create slide 3
     *
     * Notes
     */
    std::vector<string> slideThreeTitles;
    slideThreeTitles.push_back("DIT IS DE");
    slideThreeTitles.push_back("DERDE SLIDE");
    slideThree = new ofSlide(slideThreeTitles, "testImages/image.png");

    /*
     * Create slide 4
     *
     * Notes
     */
    std::vector<string> slideFourTitles;
    slideFourTitles.push_back("DIT IS DE");
    slideFourTitles.push_back("VIERDE SLIDE");
    slideFour = new ofSlide(slideFourTitles, "testImages/image.png");
    
    /*
     * Create slide 5
     *
     * Notes
     */
    std::vector<string> slideFiveTitles;
    slideFiveTitles.push_back("DIT IS DE");
    slideFiveTitles.push_back("VIJFDE SLIDE");
    slideFive = new ofSlide(slideFiveTitles, "testImages/image.png");
    
    /*
     * Create slide 6
     *
     * Notes
     */
    std::vector<string> slideSixTitles;
    slideSixTitles.push_back("DIT IS DE");
    slideSixTitles.push_back("ZESDE SLIDE");
    slideSix = new ofSlide(slideSixTitles, "testImages/image.png");
    
    /*
     * Create slide 7
     *
     * Notes
     */
    std::vector<string> slideSevenTitles;
    slideSevenTitles.push_back("DIT IS DE");
    slideSevenTitles.push_back("ZEVENDE SLIDE");
    slideSeven = new ofSlide(slideSevenTitles, "testImages/image.png");
    
    /*
     * Create slide 8
     *
     * Notes
     */
    std::vector<string> slideEightTitles;
    slideEightTitles.push_back("DIT IS DE");
    slideEightTitles.push_back("ACHTSTE SLIDE");
    slideEight = new ofSlide(slideEightTitles, "testImages/image.png");
    
    /*
     * Create slide 9
     *
     * Notes
     */
    std::vector<string> slideNineTitles;
    slideNineTitles.push_back("DIT IS DE");
    slideNineTitles.push_back("NEGENDE SLIDE");
    slideNine = new ofSlide(slideNineTitles, "testImages/image.png");
    
    /*
     * Create slide 10
     *
     * Notes
     */
    std::vector<string> slideTenTitles;
    slideTenTitles.push_back("DIT IS DE");
    slideTenTitles.push_back("TIENDE SLIDE");
    slideTen = new ofSlide(slideTenTitles, "testImages/image.png");

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
