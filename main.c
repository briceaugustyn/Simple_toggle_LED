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
    /*
    asm {
    mov dx, P2LTCH      /* Load the address of the register. */
    in  al, dx          /* Read the contnent of the register. */
    
    mov ah, ledMask     /* Move the ledMask into a register. */
    xor al, ah          /* Toggle the requested bits.         */
    
    out dx, al          /*Write the nex register contnents.   */
    };
   */
       
       
       
       
      // Init_Ports
		movlb 0
		clrf PORTB
		movlb 3
		clrf ANSELB	;	Make Port B all Digital
		movlb 1
		clrf TRISB	; Make Port B all output
		movlb 0		
		return

            
       ; These are actually called labels.  They're the only thing allowed in column 0. 
; MPlab assumes that anything not a semicolon in column 0 is a label.

LED			equ 0				; LED on pin 0 of port B
       
       ; Toggle the state of the LED on Port B
Toggle_LED
	
	btfsc PORTB, LED	; is the LED off?
	bra Is_On			; Go to Is_On.  Will be skipped if the LED is off

Is_Off					; Executes if the LED is off
	bsf PORTB, LED
	return

Is_On					; Executes if the LED is on
	bcf PORTB, LED
	return
       
       
       
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
  
  


