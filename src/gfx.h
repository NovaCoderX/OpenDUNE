/* $Id$ */

#ifndef GFX_H
#define GFX_H

extern void GFX_DrawSprite(uint16 spriteID, uint16 x, uint16 y, uint8 houseID);
extern void GFX_Init_Sprites(uint16 memoryBlockID, void *iconRPAL, void *iconRTBL);
extern void GFX_Init_SpriteInfo(uint16 widthSize, uint16 heightSize);
extern void GFX_PutPixel(uint16 x, uint16 y, uint8 colour);
extern uint16 GFX_GetScreenSegment();
extern uint16 Unknown_22A6_0E1A(uint16 memoryBlockID);

extern void emu_GFX_GetScreenSegment();
extern void emu_Unknown_22A6_0E1A();
extern void emu_GFX_PutPixel();

#endif /* GFX_H */