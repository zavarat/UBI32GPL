/*
 * pptpmanager.h
 *
 * Manager function prototype.
 *
 * $Id: pptpmanager.h,v 1.1 2008/05/02 10:09:55 jimmy_huang Exp $
 */

#ifndef _PPTPD_PPTPSERVER_H
#define _PPTPD_PPTPSERVER_H

void slot_init(int count);
void slot_free();
void slot_set_local(int i, char *ip);
void slot_set_remote(int i, char *ip);
void slot_set_pid(int i, pid_t pid);
int slot_find_by_pid(pid_t pid);
int slot_find_empty();
char *slot_get_local(int i);
char *slot_get_remote(int i);

extern int pptp_manager(int argc, char **argv);

#endif	/* !_PPTPD_PPTPSERVER_H */
