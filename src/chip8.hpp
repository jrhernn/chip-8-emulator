#include <cstdint>

class chip8
{
private:
    // Registers, memory, and stack
    unsigned char registers[16];
    unsigned char memory[4096];
    unsigned short index;
    unsigned short pc;
    unsigned char stack[16];
    unsigned char sp;

    // Timers
    unsigned char delayTimer;
    unsigned char soundTimer;

    // Screen
    unsigned char video[64][32];

    // Keyboard
    unsigned char keypad[16]{};

public:
    Chip8();
    void loadRom(const char *filename);
    void emulateCycle();
    void drawGraphics();
    void setKeys();
};
