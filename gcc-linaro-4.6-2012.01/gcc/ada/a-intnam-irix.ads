------------------------------------------------------------------------------
--                                                                          --
--                  GNAT RUN-TIME LIBRARY (GNARL) COMPONENTS                --
--                                                                          --
--                   A D A . I N T E R R U P T S . N A M E S                --
--                                                                          --
--                                  S p e c                                 --
--                                                                          --
--          Copyright (C) 1991-2009, Free Software Foundation, Inc.         --
--                                                                          --
-- GNARL is free software; you can redistribute it  and/or modify it  under --
-- terms of the  GNU General Public License as published  by the Free Soft- --
-- ware  Foundation;  either version 3,  or (at your option) any later ver- --
-- sion.  GNAT is distributed in the hope that it will be useful, but WITH- --
-- OUT ANY WARRANTY;  without even the  implied warranty of MERCHANTABILITY --
-- or FITNESS FOR A PARTICULAR PURPOSE.                                     --
--                                                                          --
-- As a special exception under Section 7 of GPL version 3, you are granted --
-- additional permissions described in the GCC Runtime Library Exception,   --
-- version 3.1, as published by the Free Software Foundation.               --
--                                                                          --
-- You should have received a copy of the GNU General Public License and    --
-- a copy of the GCC Runtime Library Exception along with this program;     --
-- see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see    --
-- <http://www.gnu.org/licenses/>.                                          --
--                                                                          --
-- GNARL was developed by the GNARL team at Florida State University.       --
-- Extensive contributions were provided by Ada Core Technologies, Inc.     --
--                                                                          --
------------------------------------------------------------------------------

--  This is the Irix version of this package

--  The following signals are reserved by the run time (Athread library):

--  SIGFPE, SIGILL, SIGSEGV, SIGBUS, SIGTRAP, SIGSTOP, SIGKILL

--  The following signals are reserved by the run time (Pthread library):

--  SIGTSTP, SIGILL, SIGTRAP, SIGEMT, SIGFPE, SIGBUS, SIGSTOP, SIGKILL,
--  SIGSEGV, SIGSYS, SIGXCPU, SIGXFSZ, SIGPROF, SIGPTINTR, SIGPTRESCHED,
--  SIGABRT, SIGINT

--  The pragma Unreserve_All_Interrupts affects the following signal
--  (Pthread library):

--  SIGINT: made available for Ada handler

--  This target-dependent package spec contains names of interrupts
--  supported by the local system.

with System.OS_Interface;

package Ada.Interrupts.Names is

   --  Beware that the mapping of names to signals may be many-to-one. There
   --  may be aliases. Also, for all signal names that are not supported on
   --  the current system the value of the corresponding constant will be zero.

   SIGHUP : constant Interrupt_ID :=
     System.OS_Interface.SIGHUP;      --  hangup

   SIGINT : constant Interrupt_ID :=
     System.OS_Interface.SIGINT;      --  interrupt (rubout)

   SIGQUIT : constant Interrupt_ID :=
     System.OS_Interface.SIGQUIT;     --  quit (ASCD FS)

   SIGILL : constant Interrupt_ID :=
     System.OS_Interface.SIGILL;      --  illegal instruction (not reset)

   SIGTRAP : constant Interrupt_ID :=
     System.OS_Interface.SIGTRAP;     --  trace trap (not reset)

   SIGIOT : constant Interrupt_ID :=
     System.OS_Interface.SIGIOT;      --  IOT instruction

   SIGABRT : constant Interrupt_ID :=
     System.OS_Interface.SIGABRT;     --  used by abort, replace SIGIOT in the
   --                                     future

   SIGEMT : constant Interrupt_ID :=
     System.OS_Interface.SIGEMT;      --  EMT instruction

   SIGFPE : constant Interrupt_ID :=
     System.OS_Interface.SIGFPE;      --  floating point exception

   SIGKILL : constant Interrupt_ID :=
     System.OS_Interface.SIGKILL;     --  kill (cannot be caught or ignored)

   SIGBUS : constant Interrupt_ID :=
     System.OS_Interface.SIGBUS;      --  bus error

   SIGSEGV : constant Interrupt_ID :=
     System.OS_Interface.SIGSEGV;     --  segmentation violation

   SIGSYS : constant Interrupt_ID :=
     System.OS_Interface.SIGSYS;      --  bad argument to system call

   SIGPIPE : constant Interrupt_ID :=
     System.OS_Interface.SIGPIPE;     --  write on pipe with no one to read it

   SIGALRM : constant Interrupt_ID :=
     System.OS_Interface.SIGALRM;     --  alarm clock

   SIGTERM : constant Interrupt_ID :=
     System.OS_Interface.SIGTERM;     --  software termination signal from kill

   SIGUSR1 : constant Interrupt_ID :=
     System.OS_Interface.SIGUSR1;     --  user defined signal 1

   SIGUSR2 : constant Interrupt_ID :=
     System.OS_Interface.SIGUSR2;     --  user defined signal 2

   SIGCLD : constant Interrupt_ID :=
     System.OS_Interface.SIGCLD;      --  alias for SIGCHLD

   SIGCHLD : constant Interrupt_ID :=
     System.OS_Interface.SIGCHLD;     --  child status change

   SIGPWR : constant Interrupt_ID :=
     System.OS_Interface.SIGPWR;      --  power-fail restart

   SIGWINCH : constant Interrupt_ID :=
     System.OS_Interface.SIGWINCH;    --  window size change

   SIGURG : constant Interrupt_ID :=
     System.OS_Interface.SIGURG;      --  urgent condition on IO channel

   SIGPOLL : constant Interrupt_ID :=
     System.OS_Interface.SIGPOLL;     --  pollable event occurred

   SIGIO : constant Interrupt_ID :=
     System.OS_Interface.SIGIO;       --  I/O possible (Solaris SIGPOLL alias)

   SIGSTOP : constant Interrupt_ID :=
     System.OS_Interface.SIGSTOP;     --  stop (cannot be caught or ignored)

   SIGTSTP : constant Interrupt_ID :=
     System.OS_Interface.SIGTSTP;     --  user stop requested from tty

   SIGCONT : constant Interrupt_ID :=
     System.OS_Interface.SIGCONT;     --  stopped process has been continued

   SIGTTIN : constant Interrupt_ID :=
     System.OS_Interface.SIGTTIN;     --  background tty read attempted

   SIGTTOU : constant Interrupt_ID :=
     System.OS_Interface.SIGTTOU;     --  background tty write attempted

   SIGVTALRM : constant Interrupt_ID :=
     System.OS_Interface.SIGVTALRM;   --  virtual timer expired

   SIGPROF : constant Interrupt_ID :=
     System.OS_Interface.SIGPROF;     --  profiling timer expired

   SIGXCPU : constant Interrupt_ID :=
     System.OS_Interface.SIGXCPU;     --  CPU time limit exceeded

   SIGXFSZ : constant Interrupt_ID :=
     System.OS_Interface.SIGXFSZ;     --  filesize limit exceeded

   SIGK32 : constant Interrupt_ID :=
     System.OS_Interface.SIGK32;      --  reserved for kernel (IRIX)

   SIGCKPT : constant Interrupt_ID :=
     System.OS_Interface.SIGCKPT;     --  Checkpoint warning

   SIGRESTART : constant Interrupt_ID :=
     System.OS_Interface.SIGRESTART;  --  Restart warning

   SIGUME : constant Interrupt_ID :=
     System.OS_Interface.SIGUME;      --  Uncorrectable memory error

   --  Signals defined for Posix 1003.1c

   SIGPTINTR : constant Interrupt_ID :=
     System.OS_Interface.SIGPTINTR;    --  Pthread Interrupt Signal

   SIGPTRESCHED : constant Interrupt_ID :=
     System.OS_Interface.SIGPTRESCHED; --  Pthread Rescheduling Signal

   --  Posix 1003.1b signals

   SIGRTMIN : constant Interrupt_ID :=
     System.OS_Interface.SIGRTMIN;    --  Posix 1003.1b signals

   SIGRTMAX : constant Interrupt_ID :=
     System.OS_Interface.SIGRTMAX;    --  Posix 1003.1b signals

end Ada.Interrupts.Names;
