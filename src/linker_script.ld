/*
entry is used to set the entry point address information
in the header of final elf file generated the first piece
of code that executes right after the processor reset
this usefull if you want to debug
*/

ENTRY(Reset_handler)

/*
 -	Memory command allows you to describe the different memories
	present in the target and their start address and size info
-	the linker uses this info to give sections addresses
 */

MEMORY
{
	FLASH(rx):ORIGIN =0x08000000, LENGTH =512K
	SRAM(rwx):ORIGIN =0x20000000, LENGTH =128K
}

/*
	used to create differet output sections in the final elf
	instruct the linker how to merge the input sections to yield an output 
	section
*/

SECTIONS
{
	.text :
	{
		*(.ivt)
		*(.text)
		*(.rodata)
		_end_of_text = .;
	}> FLASH AT> FLASH

	.data :
	{
		_start_of_data = .;
		*(.data)
		_end_of_data = .;
	}>SRAM AT> FLASH

	.bss :
	{
		_start_of_bss = .;
		*(.bss)
		_end_of_bss = .;
	}>SRAM
}

/*
	you may wonder isn't _end_of_text is the same _start_of_data
	well no because text section is working with FLASH as base address
	and .data
	has SRAM base adresse 
	_start_of_data is represting source which data section should be placed
	NOTE:
		_start_of_data = .; is working always with VMA
*/
