/*
 * $HeadURL: https://svn.fzd.de/repo/concast/FWF_Projects/FWKE/hw_sp605/bsp_zpuahb/software/ambainfo.h $
 * $Date$
 * $Author$
 * $Revision$
 */


#ifndef AMBAINFO_H
#define AMBAINFO_H

void print_vendor_device( uint8_t vendor, uint8_t device);
void apb_info( uint32_t* addr, uint8_t verbose);
void ahb_info( uint8_t verbose);

#endif // AMBAINFO_H