/***
 *
 * 	File Author: Allen, Julia "veno"
 *
 * 	Based on, but not a modification of, copyrighted work by Valve LLC. 
 *
 * 	This file is subject to the MIT License.
 *
 ***/

/* Purpose: Network Data for: Screen Shake Effect.
 */


#ifndef SHAKE_H
#define SHAKE_H


extern int gmsgShake;


//netcode should send struct ScreenShake to client
typedef struct{
	unsigned short amplitude;
	unsigned short duration;
	unsigned short frequency;
} ScreenShake; //name of struct sent

extern void V_ApplyShake(float *origin, float *angles, float factor);
extern void V_CalcShake(void);
extern int V_ScreenShake(const char *pszName, int iSize, void *pbuf);
extern int V_ScreenFade(const char *pszName, int iSize, void *pbuf);

#endif 

