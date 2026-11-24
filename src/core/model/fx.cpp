// FX table, spec 02 §4.3 (values from tracker-lib, MIT).
#include "model/fx.h"

namespace ot {

namespace {
const FxInfo kFxTable[kFxCount] = {
    {'-', "None", 0, 100, 0},
    {'!', "Off", 0, 0, 0},
    {'m', "Micro-move", 0, 100, 0},
    {'R', "Roll", 0, 47, 1},
    {'C', "Chance", 0, 100, 0},
    {'n', "Random Note", 0, 100, 0},
    {'i', "Random Instrument", 0, 100, 0},
    {'v', "Random Volume", 0, 100, 0},
    {'a', "MIDI CC A", 0, 127, 0},
    {'b', "MIDI CC B", 0, 127, 0},
    {'c', "MIDI CC C", 0, 127, 0},
    {'d', "MIDI CC D", 0, 127, 0},
    {'e', "MIDI CC E", 0, 127, 0},
    {'x', "Break Pattern", 1, 1, 1},
    {'0', "MIDI Chord", 0, 15, 0},
    {'T', "Tempo", 4, 200, 60},          // displayed x2: 8..400
    {'x', "Random FX Value", 0, 255, 0},
    {'I', "Swing", 25, 75, 50},          // displayed -25..25
    {'V', "Volume/Velocity", 0, 100, 0},
    {'G', "Glide", 0, 100, 0},
    {'q', "Gate Length", 0, 100, 0},
    {'A', "Arp", 0, 33, 0},
    {'p', "Position", 0, 100, 0},
    {'g', "Volume LFO", 0, 24, 0},
    {'h', "Panning LFO", 0, 30, 0},
    {'S', "Slice", 0, 47, 0},            // displayed 1..48
    {'r', "Reverse Playback", 0, 1, 0},
    {'L', "Low-pass", 0, 100, 0},
    {'H', "High-pass", 0, 100, 0},
    {'B', "Band-pass", 0, 100, 0},
    {'s', "Delay Send", 0, 100, 0},
    {'P', "Panning", 0, 100, 0},         // displayed -50..50
    {'t', "Reverb Send", 0, 100, 0},
    {'l', "Finetune LFO", 0, 30, 0},
    {'M', "Micro-tune/Pitchbend", 0, 198, 0},  // displayed -99..99
    {'j', "Filter LFO", 0, 30, 0},
    {'k', "Position LFO", 0, 30, 0},
    {'f', "MIDI CC F", 0, 127, 0},
    {'D', "Overdrive", 0, 100, 0},
    {'E', "Bit Depth", 1, 16, 0},
    {'U', "Tune", 0, 48, 0},             // displayed -24..24
    {'F', "Slide Up", 0, 255, 0},
    {'J', "Slide Down", 0, 255, 0},
    // [I] Grid letters stock FX does not already use. The menu name is the CC letter.
    {'u', "MIDI CC G", 0, 127, 0},
    {'w', "MIDI CC H", 0, 127, 0},
    {'y', "MIDI CC I", 0, 127, 0},
    {'z', "MIDI CC J", 0, 127, 0},
    {'K', "MIDI CC K", 0, 127, 0},
    {'N', "MIDI CC L", 0, 127, 0},
    {'W', "MIDI CC M", 0, 127, 0},
    {'Q', "MIDI CC N", 0, 127, 0},
    {'O', "MIDI CC O", 0, 127, 0},
    {'X', "MIDI CC P", 0, 127, 0},
    {'Y', "MIDI CC Q", 0, 127, 0},
    {'Z', "MIDI CC R", 0, 127, 0},
    {'o', "MIDI CC S", 0, 127, 0},
};
}  // namespace

const uint8_t kFxMenuOrder[kFxCount] = {
    0, 1, 18, 31, 34, 19, 15, 17, 2, 20, 4, 3, 21, 5, 6, 16, 7, 26, 22, 25, 23, 24,
    35, 36, 33, 38, 27, 29, 28, 30, 32, 39, 40, 41, 42, 8, 9, 10, 11, 12, 37,
    43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 14, 13,
};

const FxInfo& fxInfo(uint8_t id) { return kFxTable[id < kFxCount ? id : 0]; }

}  // namespace ot
