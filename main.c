#define P2LTCH    0xFF5E  */The offset of the P2LTCH register


/************************************************************
*
*Function toggLeLed()
*
*Description: Toggle the state of one or both LEDs.
*
*Notes:     This function is specific to Arcom's Target188EB board.
*
* Retruns:  None defined.
*
*************************************************************

void
toggleLed(unsidgned char ledMask)
{
    asm {
    mov dx, P2LTCH      /* Load the address of the register. */
    in  al, dx          /* Read the contnent of the register. */
    
    mov ah, ledMask     /* Move the ledMask into a register. */
    xor al, ah          /* Toggle the requested bits.         */
    
    out dx, al          /*Write the nex register contnents.   */
    };
   
};

}   */ toggleLed() */


/************************************************************
*
*Function delay()
*
*Description: Busy wait for the requested number of milliseconds.
*Notes:       The number of decrement and test cycles per millisecond
              was determined through trial and error. This value is
              dependent upon the processor type and speed
              
* Retruns:  None defined.
*
*************************************************************
void
delay( unsigned int Milliseconds)
{
  #define CYCLES_PER_MS 260 */ Number of decrement and test cycles.*/
  
  unsigned long nCycles + nMilliseconds * CYCLES_PER_MS;
  
  while (nCycles--);
  
  } /*delay() */
  
  
  
 // Will need to translate this for PIC18F16Q41  and MICROCHIP PIC
  
  


