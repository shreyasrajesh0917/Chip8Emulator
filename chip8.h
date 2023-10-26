#define CHIP8_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdint.h>

class Chip8
{
    public:
    uint8_t memory[4096];
    uint16_t program_counter;
    uint8_t keypad[16];
    uint8_t mem_register[16];
    uint16_t index_register;
    uint16_t stack_routines[16];
    uint8_t stack_pointer;
    unsigned char gfx[64 * 32];
    uint8_t delay_timer;
    uint8_t sound_timer;
    uint16_t opcode;

    void initialize();
    void fetch_opcode();
    void emulate_codes();

};