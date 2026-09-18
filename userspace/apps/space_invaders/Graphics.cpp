#include "space_invaders/Graphics.h"
#include "system.h"

// Constructor for graphics, uses some black magic initializer list
// It looks like i can use the getinstance for the sprites and conserve
// thread safety and singleton stuff
Graphics::Graphics(Sprites &sprites) :
   sprites(sprites)
{
    // Maybe I should do some error checking idk
    fd = open(SYSTEM_HDMI_FILE);
}
// Destructor for graphics
Graphics::~Graphics(){
    close(fd);
}

// Fill the screen.  This is fastest if you write line by line.
void Graphics::fillScreen(rgb_t color){
    
}

// This draws a sprite of given size and color at an x,y location.  This
// version of the function is given a background color (bgColor), such that
// every pixel of sprite region is written (with either color or bgColor).
// This is faster because it allows you to write line by line and minimize
// system calls.
void Graphics::drawSprite(Sprite *sprite, uint16_t x, uint16_t y, uint8_t size,
                rgb_t color, rgb_t bgColor){

                }

// Same as previous function, but does not write over the background pixels.
// Although this writes fewer pixels, it often requires more system calls and
// so will be slower.  This is needed to draw the bunker damage.
void Graphics::drawSprite(Sprite *sprite, uint16_t x, uint16_t y, uint8_t size,
                rgb_t color){

                }

// Draws a string on the screen, and returns the width
uint16_t Graphics::drawStr(std::string str, uint16_t x, uint16_t y, uint8_t size,
                rgb_t color, rgb_t bgColor){

                }

// Draws a string on the screen that is centered horizontally
void Graphics::drawStrCentered(std::string str, uint16_t y, uint8_t size, rgb_t color,
                    rgb_t bgColor){

                    }

// Returns the width of a str of given length and size.  This should take into
// account the character sizes, and spacing between characters.  For a given
// string and size, this should return the same value as drawStr.
uint16_t Graphics::getStrWidth(uint8_t strLen, uint8_t size){

}
