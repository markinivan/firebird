/*
 *  The contents of this file are subject to the Initial
 *  Developer's Public License Version 1.0 (the "License");
 *  you may not use this file except in compliance with the
 *  License. You may obtain a copy of the License at
 *  http://www.ibphoenix.com/main.nfs?a=ibphoenix&page=ibp_idpl.
 *
 *  Software distributed under the License is distributed AS IS,
 *  WITHOUT WARRANTY OF ANY KIND, either express or implied.
 *  See the License for the specific language governing rights
 *  and limitations under the License.
 *
 *  The Original Code was created by Mark O'Donohue
 *  for the Firebird Open Source RDBMS project.
 *
 *  Copyright (c) 2002 Mark O'Donohue <skywalker@users.sourceforge.net>
 *  and all contributors signed below.
 *
 *  All Rights Reserved.
 *  Contributor(s): ______________________________________.
 */

#ifndef INCLUDE_EDITLINE_H
#define INCLUDE_EDITLINE_H

// This file defines the ansi headers for the editline library which
// did not have it's own ansi header. This is an external module
// which we have included to replace readline which does not
// have a compatible licence for us to use.  MOD 7-Oct-2002

#ifdef __cplusplus
extern "C" {
#endif

typedef char *(*CPFunction) (const char *, int);
typedef char **(*CPPFunction) (const char *, int, int);

extern char* rl_readline_name;
extern CPPFunction* rl_attempted_completion_function;
extern CPFunction* rl_completion_entry_function;
extern int (*rl_pre_input_hook)(void);
extern char* rl_line_buffer;

extern char *readline(const char*);
extern void add_history(char*);
extern void add_history(char*);
extern char ** completion_matches (char *text, CPFunction *entry_func);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
